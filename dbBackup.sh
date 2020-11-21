#!/bin/bash

if [ $# -eq 0 ]
then
    WORKDIR=/home/arma/server
else
    WORKDIR=$1
fi

cd $WORKDIR

mkdir -p databaseBackups

