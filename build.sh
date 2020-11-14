#!/bin/bash

WORKDIR = /home/game/lifearma/

cd ${WORKDIR}/
git pull origin master

cd ${WORKDIR}/@life_server/addons/
rm -rf life_server.pbo
armake pack life_server life_server.pbo

cd ${WORKDIR}/@life_hc/addons/
rm -rf life_hc.pbo
armake pack life_hc life_hc.pbo
rm life_hc.pbo.life.bisign
armake sign ${WORKDIR}/signKey/life.biprivatekey life_hc.pbo

cd ${WORKDIR}/mpmissions/
rm -rf life.altis.pbo
armake pack life.altis life.altis.pbo
