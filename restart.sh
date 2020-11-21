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
tmux new -d -s arma './build.sh && ./start.sh &> serverLogs_$(date "+%y%m%d%H%M%S").rpt'
tmux new -d -s armaHC './startHC.sh &> hcLogs_$(date "+%y%m%d%H%M%S").rpt'