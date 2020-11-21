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
tmux new -d -s arma "$WORKDIR/build.sh; $WORKDIR/start.sh 2> $WORKDIR/logs/serverErrors_$(date "+%y%m%d%H%M%S").rpt 1> $WORKDIR/logs/serverLogs_$(date "+%y%m%d%H%M%S").rpt;"

sleep 10

echo "> HeadlessClient Started"
tmux new -d -s armaHC "$WORKDIR/startHC.sh 2> $WORKDIR/logs/hcErrors_$(date "+%y%m%d%H%M%S").rpt 1> $WORKDIR/logs/hcLogs_$(date "+%y%m%d%H%M%S").rpt;"