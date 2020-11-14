#!/bin/bash

workDir = "/home/arma/server/"

cd ${workDir}/
./arma3server -port=2302 "-config=config.cfg" "-cfg=basic.cfg" "-bepath=${workDir}/battleye" "-profiles=${workDir}/profiles" "-name=lifearma" -filePatching -autoInit "-serverMod=@life_server;@extdb3"
