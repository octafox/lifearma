#!/bin/bash

if [ $# -eq 0 ]
then
    WORKDIR=/home/arma/server
else
    WORKDIR=$1
fi

cd $WORKDIR

tmux kill-session -t arma
tmux kill-session -t armaHC

echo "> Server Started"
tmux new -d -s arma './build.sh && ./start.sh &> ./logs/serverLogs_$(date "+%y%m%d%H%M%S").rpt'

sleep 30

echo "> HeadlessClient Started"
tmux new -d -s armaHC './startHC.sh &> ./logs/hcLogs_$(date "+%y%m%d%H%M%S").rpt'