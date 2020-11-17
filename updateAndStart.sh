#!/bin/bash

if [ $# -eq 0 ]
then
    WORKDIR=/home/arma/server
else
    WORKDIR=$1
fi

cd $WORKDIR/

rm build.sh && rm start.sh
git pull
chmod +x build.sh
chmod +x start.sh
./build.sh $WORKDIR
./start.sh $WORKDIR