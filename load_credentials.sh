#!/bin/bash

if [ $# -eq 0 ]
then
    WORKDIR=/home/steam/server
else
    WORKDIR=$1
fi

SAVE_CRED=false
LOAD_CRED=true
CRED_DIR=credentials.secret
mkdir -p $CRED_DIR

if $SAVE_CRED; then
    echo "> saving files with credentials"
    cp $WORKDIR/.gitignore $WORKDIR/$CRED_DIR/
    cp $WORKDIR/config.cfg $WORKDIR/$CRED_DIR/
    cp $WORKDIR/@extdb3/extdb3-conf.ini $WORKDIR/$CRED_DIR/
    cp $WORKDIR/battleye/beserver_x64.cfg $WORKDIR/$CRED_DIR/
    cp $WORKDIR/battleye/beserver.cfg $WORKDIR/$CRED_DIR/
fi

if $LOAD_CRED || ([[ -v LOAD_CRED_VENV ]] && $LOAD_CRED_VENV); then
    echo "> loading files with credentials"
    cp $WORKDIR/$CRED_DIR/.gitignore $WORKDIR/.gitignore
    cp $WORKDIR/$CRED_DIR/config.cfg $WORKDIR/config.cfg
    cp $WORKDIR/$CRED_DIR/extdb3-conf.ini $WORKDIR/@extdb3/extdb3-conf.ini
    cp $WORKDIR/$CRED_DIR/beserver_x64.cfg $WORKDIR/battleye/beserver_x64.cfg
    cp $WORKDIR/$CRED_DIR/beserver.cfg $WORKDIR/battleye/beserver.cfg
fi
