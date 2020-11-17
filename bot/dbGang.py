import mariadb
import re
import config
import price
import pandas as pd

def gunToMoney(inventory):
    resp=0
    for nome in price.armi:
        if nome in inventory:
            resp+=price.armi[nome]
    return resp

def licenseToMoney(allLicense):
    resp=0
    for licenza in price.licenze:
        if licenza in allLicense:
            resp+=price.licenze[licenza]
    return resp

def vehicleToMoney(mezzo):
    return price.veicoli[mezzo]

def gangsPrint(gangs):
    resp=""
    for gang in gangs:
        name = gang["name"]
        money = "${:,}".format(gang["money"])
        members = ', '.join(gang["members"])
        gearMoney="${:,}".format(gang["gearMoney"])
        moneyLicense="${:,}".format(gang["licenseMoney"])
        total="${:,}".format(gang["gearMoney"]+gang["money"]+gang["licenseMoney"])
        totalXmember="${:,}".format(int((gang["gearMoney"]+gang["money"]+gang["licenseMoney"])/len(gang["members"])))
        resp+= ("{}: {}\n\tMoney: {}\n\tGear Money:{}\n\tMoney of License: {}\n\tTotal: {}\n\tTotal per Member: {}\n\n".format(name,members,money,gearMoney,moneyLicense,total,totalXmember))
    return resp

try:
    conn = mariadb.connect (user=config.DB_USER, password=config.DB_PASS, host=config.DB_HOST, port=config.DB_PORT, database=config.DB_NAME)
except mariadb.Error as err:
    print("Connection error")
armalife = conn.cursor()

armalife.execute('SELECT pid,classname FROM vehicles WHERE side="civ"')
vehicles = {}
for pid, classname in armalife:
    vehicles[pid]=vehicleToMoney(classname)
print(len(vehicles))

armalife.execute("SELECT uid,pid,name,cash,bankacc,civ_gear,civ_licenses FROM players")
players = {}
for uid,pid,name,cash,bankacc,civ_gear,civ_licenses in armalife:
    player = {}
    player["uid"] = uid
    player["name"] = name
    player["money"] = cash+bankacc
    player["gearMoney"] = gunToMoney(civ_gear)
    player["licenseMoney"]= licenseToMoney(civ_licenses)
    players[pid] = player

armalife.execute("SELECT owner,name,members FROM gangs")
gangs = []
for owner,name,members in armalife:
    gang = {}
    members = re.findall(r'[0-9]{17}',members)
    membersName = list(map(lambda x: players[x]["name"],members))
    gangMoney = sum(list(map(lambda x: int(players[x]["money"]), members)))
    gangGearMoney = sum(list(map(lambda x: (players[x]["gearMoney"]), members)))
    licenseMoney = sum(list(map(lambda x: (players[x]["licenseMoney"]), members)))
    gang["name"] = name
    gang["members"] = membersName
    gang["money"] = gangMoney
    gang["gearMoney"] = gangGearMoney
    gang["licenseMoney"] = licenseMoney
    gangs.append(gang)


print(gangsPrint(gangs))