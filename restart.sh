#!/bin/bash
source /home/arma/.bashrc
source /home/arma/.profile

if [ $# -eq 0 ]
then
    WORKDIR=/home/arma/server
else
    WORKDIR=$1
fi

cd $WORKDIR
mkdir -p logs

tmux kill-session -t arma
tmux kill-session -t armaHC

echo "> Server Started"
tmux new -d -s arma "$WORKDIR/build.sh && $WORKDIR/start.sh" #&> $WORKDIR/logs/serverLogs_$(date "+%y%m%d%H%M%S").rpt"

# sleep 60

echo "> HeadlessClient Started"
tmux new -d -s armaHC "$WORKDIR/startHC.sh" #&> $WORKDIR/logs/hcLogs_$(date "+%y%m%d%H%M%S").rpt"


#screen -X -S arma kill
#screen -X -S armaHC kill
#screen -dmS "arma" bash -c "/home/arma/server/start.sh"
#screen -dmS "armaHC" bash -c "/home/arma/server/startHC.sh"