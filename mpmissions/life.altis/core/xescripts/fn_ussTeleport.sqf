risucchio_1 addAction["Torna all`USS", {
	if(side player == west) then {
		cutText ["","BLACK OUT",2];
		titleFadeOut 1;
		sleep 2;
		player setPos [15636.9,15377,66.9514];
		sleep 2;
		cutText ["","BLACK IN",5];
	};
}];

risucchio_2 addAction["Vai al Porto", {
	if(side player == west) then {
		cutText ["","BLACK OUT",2];
		titleFadeOut 1;
		sleep 2;
		player setPos [15444,15746.4,11.7269];
		sleep 2;
		cutText ["","BLACK IN",5];
	};
}];