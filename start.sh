#!/bin/bash

WORKDIR = /home/game/lifearma/

cd ${WORKDIR}/
./arma3server -port=2302 "-config=config.cfg" "-cfg=basic.cfg" "-bepath=${WORKDIR}/battleye" "-profiles=${WORKDIR}/profiles" "-name=lifearma" -filePatching -autoInit "-serverMod=@life_server;@extdb3"
