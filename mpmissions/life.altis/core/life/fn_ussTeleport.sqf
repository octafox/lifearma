risucchio_1 addAction["Torna all`USS", {
	if(side player == west) then {
		cutText ["","BLACK OUT",2];
		titleFadeOut 1;
		sleep 2;
		player setPos [3883.6,4601.14,0];
		sleep 2;
		cutText ["","BLACK IN",5];
	};
}];

risucchio_2 addAction["Vai al Porto", {
	if(side player == west) then {
		cutText ["","BLACK OUT",2];
		titleFadeOut 1;
		sleep 2;
		player setPos [3928.05,4620.38,0];
		sleep 2;
		cutText ["","BLACK IN",5];
	};
}];