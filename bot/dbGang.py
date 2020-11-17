import re
import price
import pandas as pd
import config


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


def gangsPrint(gangs):
    resp = ""
    for gang in gangs:
        name = gang["name"]
        money = (gang["money"])
        members = ', '.join(gang["members"])
        gearMoney = (gang["gearMoney"])
        moneyLicense = (gang["licenseMoney"])
        total = (
            gang["gearMoney"]+gang["money"]+gang["licenseMoney"])
        totalXmember = (
            int((gang["gearMoney"]+gang["money"]+gang["licenseMoney"])/len(gang["members"])))
        resp += ("{}: {}\n\tMoney: {}\n\tGear Money:{}\n\tMoney of License: {}\n\tTotal: {}\n\tTotal per Member: {}\n\n".format(
            name, members, money, gearMoney, moneyLicense, total, totalXmember))
    return resp


def loadTotal(df):
    sumcol=df['money'] + df['civ_gear'] + df['civ_licenses'] + df['civ_vehicles']
    df['total']=sumcol
    return df

def addVehicles(df):
    dbLife.execute('SELECT pid,classname FROM vehicles WHERE side="civ"')
    for pid, classname in dbLife:
        df.loc[pid,'civ_vehicles'] += vehicleToMoney(classname)
    return df


def setAllPlayers(dbLife):
    dbLife.execute(
        "SELECT uid,pid,name,cash,bankacc,civ_gear,civ_licenses FROM players")
    risultato = pd.DataFrame(
        columns=['uid', 'name', 'money', 'civ_gear', 'civ_licenses', 'civ_vehicles'])
    for uid, pid, name, cash, bankacc, civ_gear, civ_licenses in dbLife:
        new_row = {'uid': uid,
                   'name': name,
                   'money': int(cash+bankacc),
                   'civ_gear': gunToMoney(civ_gear),
                   'civ_licenses': licenseToMoney(civ_licenses),
                   'civ_vehicles': 0
                   }
        risultato.loc[pid] = new_row
    risultato = addVehicles(risultato)
    return loadTotal(risultato)        



def setAllGangs(dbLife, players):
    dbLife.execute("SELECT owner,name,members FROM gangs")
    risultato = pd.DataFrame(
        columns=['owner', 'name', 'membersName', 'gangMoney', 'gangGearMoney'])

    for owner, name, members in dbLife:
        members = re.findall(r'[0-9]{17}', members)
        membersName = list(map(lambda x: players.loc[x, "name"], members))
        gangMoney = sum(
            list(map(lambda x: int(players.loc[x, "money"]), members)))
        gangGearMoney = sum(
            list(map(lambda x: (players.loc[x, "gearMoney"]), members)))
        licenseMoney = sum(
            list(map(lambda x: (players.loc[x, "licenseMoney"]), members)))
        new_row = {'name': name,
                   'membersName': membersName,
                   'gangMoney': gangMoney,
                   'gangGearMoney': gangGearMoney,
                   'licenseMoney': licenseMoney,
                   }
        risultato.loc[owner] = new_row
    return risultato


dbLife = config.connect()
if __name__ == '__main__':
    df = (setAllPlayers(dbLife))
    df.to_csv('bot/stats/player.csv',index=True)
