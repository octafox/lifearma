import mariadb
import re
import config

def gearToMoney(inventory):
    return 0

def gangsPrint(gangs):
    for gang in gangs:
        name = gang["name"]
        money = "${:,}".format(gang["money"])
        members = ', '.join(gang["members"])
        moneyXmember="${:,}".format(int(gang["money"]/len(gang["members"])))
        return "{}:\n\tMoney: {}\n\tMembers: {}\n\tMoney per Member:{}\n".format(name,money,members,moneyXmember)

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
    player["inventory"] = gearToMoney(civ_gear)
    players[pid] = player

armalife.execute("SELECT owner,name,members FROM gangs")
gangs = []
for owner,name,members in armalife:
    gang = {}
    members = re.findall(r'[0-9]{17}',members)
    membersName = list(map(lambda x: players[x]["name"],members))
    gangMoney = sum(list(map(lambda x: int(players[x]["money"]), members)))

    gang["name"] = name
    gang["members"] = membersName
    gang["money"] = gangMoney

    gangs.append(gang)



print(gangsPrint(gangs))