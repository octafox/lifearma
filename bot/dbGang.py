import mariadb
import re
import config
import price

def gunToMoney(inventory):
    resp=0
    for nome in price.armi:
        if nome in inventory:
            resp+=price.armi[nome]
    return resp

def licenseToMoney(allLicense):
    resp=""
    for licenza in price.licenze:
        if licenza in allLicense:
            resp+=price.licenze[licenza]
    return resp

def gangsPrint(gangs):
    resp=""
    for gang in gangs:
        name = gang["name"]
        money = "${:,}".format(gang["money"])
        members = ', '.join(gang["members"])
        moneyXmember="${:,}".format(int(gang["money"]/len(gang["members"])))
        gearMoney="${:,}".format(gang["gearMoney"])
        total="${:,}".format(gang["gearMoney"]+gang["money"])
        resp+= ("{}: {}\n\tMoney: {}\n\tMoney per Member: {}\n\tGear Money:{}\n\tTotal: {}\n\n".format(name,members,money,moneyXmember,gearMoney,total))
    return resp

def playerPrint(players):
    for player in players:
        name = player["name"]

try:
    conn = mariadb.connect (user=config.DB_USER, password=config.DB_PASS, host=config.DB_HOST, port=config.DB_PORT, database=config.DB_NAME)
except mariadb.Error as err:
    print("Connection error")

armalife = conn.cursor()
armalife.execute("SELECT uid,pid,name,cash,bankacc,civ_gear FROM players")
players = {}
for uid,pid,name,cash,bankacc,civ_gear in armalife:
    player = {}
    player["uid"] = uid
    player["name"] = name
    player["money"] = cash+bankacc
    player["gearMoney"] = gunToMoney(civ_gear)
    players[pid] = player

armalife.execute("SELECT owner,name,members FROM gangs")
gangs = []
for owner,name,members in armalife:
    gang = {}
    members = re.findall(r'[0-9]{17}',members)
    membersName = list(map(lambda x: players[x]["name"],members))
    gangMoney = sum(list(map(lambda x: int(players[x]["money"]), members)))
    gangGearMoney = sum(list(map(lambda x: (players[x]["gearMoney"]), members)))

    gang["name"] = name
    gang["members"] = membersName
    gang["money"] = gangMoney
    gang["gearMoney"] = gangGearMoney

    gangs.append(gang)


print(gangsPrint(gangs))