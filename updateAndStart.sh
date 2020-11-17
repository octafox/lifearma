#!/bin/bash

if [ $# -eq 0 ]
then
    WORKDIR=/home/arma/server
else
    WORKDIR=$1
fi


cd $WORKDIR/

git pull
rm build.sh && rm start.sh
chmod +x build.sh
chmod +x start.sh
./build.sh $WORKDIR
./start.sh $WORKDIR