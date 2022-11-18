#!/bin/bash
source /home/steam/.bashrc
source /home/steam/.profile

if [ $# -eq 0 ]
then
    WORKDIR=/home/steam/server
else
    WORKDIR=$1
fi

START_ARMAHC=false
UPDATE_AND_BUILD=true

cd $WORKDIR
DATA_TXT="$(date "+%y%m%d")_$(date "+%H%M%S")"
mkdir -p $WORKDIR/logs

if $UPDATE_AND_BUILD; then
    echo "> Updateing and Building the project"
    $WORKDIR/build.sh;
fi

tmux kill-session -t arma
echo "> Server Started"
tmux new -d -s arma "$WORKDIR/start.sh 2> $WORKDIR/logs/serverErrors_$DATA_TXT.rpt 1> $WORKDIR/logs/serverLogs_$DATA_TXT.rpt;"

if $START_ARMAHC; then
    tmux kill-session -t armaHC
    sleep 10
    echo "> HeadlessClient Started"
    tmux new -d -s armaHC "$WORKDIR/startHC.sh 2> $WORKDIR/logs/hcErrors_$DATA_TXT.rpt 1> $WORKDIR/logs/hcLogs_$DATA_TXT.rpt;"
fi
