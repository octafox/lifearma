import re
import price
import pandas as pd
import config
import mariadb

def connect():
    try:
        conn = mariadb.connect (user=config.DB_USER, password=config.DB_PASS, host=config.DB_HOST, port=config.DB_PORT, database=config.DB_NAME)
    except:
        print("Connection error")
    armalife=conn.cursor()
    return armalife

def gunToMoney(inventory):
    resp = 0
    for nome in price.armi:
        if nome in inventory:
            resp += price.armi[nome]
    return resp

def licenseToMoney(allLicense):
    resp = 0
    for licenza in price.licenze:
        if licenza in allLicense:
            resp += price.licenze[licenza]
    return resp

def vehicleToMoney(mezzo):
    return price.veicoli[mezzo]

def containerToMoney(cn):
    return price.containers[cn]

def houseSizeToMoney(sizeC):
    try:
        return price.houses[sizeC]
    except:
        return price.houses[len(price.houses)]

def loadTotal(df):
    sumcol=df['money'] + df['civ_gear'] + df['civ_licenses'] + df['civ_vehicles']+  df['civ_homeInv']+ df['civ_homeSize']
    df['total']=sumcol
    return df

def addVehicles(df):
    dbLife.execute('SELECT pid,classname FROM vehicles WHERE side="civ"')
    for pid, classname in dbLife:
        df.loc[pid,'civ_vehicles'] += vehicleToMoney(classname)
    return df

def addContainerAndInv(df):
    dbLife.execute("SELECT pid, classname, gear FROM containers")
    playerWithHouse=[]
    for pid, classname, gear in dbLife:
        df.loc[pid,'civ_homeInv'] += gunToMoney(gear) + containerToMoney(classname)
        df.loc[pid,'civ_homeSize'] += 1
        playerWithHouse.append(pid)
    
    for pid in list(set(playerWithHouse)):
        df.loc[pid,'civ_homeSize']=houseSizeToMoney(df.loc[pid,'civ_homeSize'])
    return df

def setAllPlayers():
    dbLife.execute(
        "SELECT uid,pid,name,cash,bankacc,civ_gear,civ_licenses FROM players")
    risultato = pd.DataFrame(
        columns=['uid', 'name', 'money', 'civ_gear', 'civ_licenses', 'civ_vehicles','civ_homeInv','civ_homeSize'])
    for uid, pid, name, cash, bankacc, civ_gear, civ_licenses in dbLife:
        new_row = {'uid': uid,
                   'name': name,
                   'money': int(cash+bankacc),
                   'civ_gear': gunToMoney(civ_gear),
                   'civ_licenses': licenseToMoney(civ_licenses),
                   'civ_vehicles': 0,
                   'civ_homeInv':0,
                   'civ_homeSize':0
                   }
        risultato.loc[pid] = new_row
    risultato = addVehicles(risultato)
    risultato = addContainerAndInv(risultato)
    return loadTotal(risultato)        

def setAllGangs(players):
    dbLife.execute("SELECT owner,name,members FROM gangs")
    risultato = pd.DataFrame(
        columns=['owner', 'name', 'membersName', 'gangMoney', 'gangGearMoney','licenseMoney','vehiclesMoney','total'])

    for owner, name, members in dbLife:
        members = re.findall(r'[0-9]{17}', members)
        membersName = list(map(lambda x: players.loc[x, "name"], members))
        gangMoney = sum(
            list(map(lambda x: int(players.loc[x, "money"]), members)))
        gangGearMoney = sum(
            list(map(lambda x: (players.loc[x, "civ_gear"]), members)))
        licenseMoney = sum(
            list(map(lambda x: (players.loc[x, "civ_licenses"]), members)))
        vehiclesMoney = sum(
            list(map(lambda x: (players.loc[x, "civ_vehicles"]), members)))
        total=sum(
            list(map(lambda x: (players.loc[x, "total"]), members)))
        new_row = {'name': name,
                   'membersName': membersName,
                   'gangMoney': gangMoney,
                   'gangGearMoney': gangGearMoney,
                   'licenseMoney': licenseMoney,
                   'vehiclesMoney':vehiclesMoney,
                   'total':total
                   }
        risultato.loc[owner] = new_row
    return risultato

def loadAndSave():
    df = (setAllPlayers())
    df.to_csv('bot/stats/player.csv',index=True)
    dfGang=setAllGangs(df)
    dfGang.to_csv('bot/stats/gang.csv',index=True)
    return df,dfGang

def getByName(df,name):
    res= ""
    for nZ in df['name']:
        if name.lower() in nZ.lower():
            res+=printPlayer(df.loc[df['name']==nZ])
    return res

def printPlayer(row):
    row=row.iloc[0].astype("string")
    res="\nUID: "+row["uid"]+"\t\tNAME: "+row["name"]+"\t\tALL CASH: "+row["total"]+"\n(money: "+row["money"]+", loadout: "+row["civ_gear"]+", licenses: "+row["civ_licenses"]+", vehicles: "+row["civ_vehicles"]+", home inventory: "+row["civ_homeInv"]+", home value: "+row["civ_homeSize"]+")\n"
    return res
   

dbLife = connect()
if __name__ == '__main__':
    dfPlayer,dfGang=loadAndSave()
    ricerca=input("Inserisci il nome del player da cercare: ")
    print(getByName(dfPlayer,ricerca))


    
