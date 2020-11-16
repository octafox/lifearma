import mariadb
import re
import config

try:
    conn = mariadb.connect (user=config.DB_USER, password=config.DB_PASS, host=config.DB_HOST, port=config.DB_PORT, database=config.DB_NAME)
except mariadb.Error as err:
    print("Connection error")

armalife = conn.cursor()
armalife.execute("SELECT uid,pid,name,cash,bankacc FROM players")
players = {}
for uid,pid,name,cash,bankacc in armalife:
    player = {}
    player["uid"] = uid
    player["name"] = name
    player["money"] = cash+bankacc
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

def gangsPrint(gangs):
    for gang in gangs:
        name = gang["name"]
        money = "${:,}".format(gang["money"])
        members = ', '.join(gang["members"])
        print("{}:\n\tMoney: {}\n\tMembers: {}\n".format(name,money,members))

gangsPrint(gangs)