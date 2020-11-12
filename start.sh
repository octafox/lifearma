#!/bin/bash

WORKDIR = /home/game/lifearma/

cd ${$WORKDIR}/
./arma3server -port=2302 "-config=config.cfg" "-cfg=basic.cfg" "-bepath=/opt/life/battleye" "-name=default" -filePatching -autoInit "-serverMod=@life_server;@extdb3"
