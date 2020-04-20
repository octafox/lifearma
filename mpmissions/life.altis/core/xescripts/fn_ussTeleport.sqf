risucchio_1 addAction["Torna all`USS", {
	if(side player == west) then {
		cutText ["","BLACK OUT",2];
		titleFadeOut 1;
		sleep 2;
		player setPos [15642.1,15364.9,67.6437];
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