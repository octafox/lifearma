waitUntil {!isServer && {!isNull player} && {player isEqualTo player}};
if (player diarySubjectExists "controls") exitWith {};

//player createDiarySubject ["civrules","Civilian Rules"];

/*  Example
    player createDiaryRecord ["", //Container
        [
            "", //Subsection
                "
TEXT HERE<br/><br/>
                "
        ]
    ];
*/


player createDiarySubject ["informazioni","Informazioni","\A3\Data_F_Argo\Logos\arma3_argo_artwork.jpg"];
player createDiaryRecord ["informazioni", ["TeamSpeak3","ts.octafox.it:9988"]];
player createDiaryRecord ["informazioni", ["Discord","https://discord.gg/Bve7wg4P9U"]];
player createDiaryRecord ["informazioni", ["Regolamento","https://github.com/octafox/lifearma/blob/master/documents/regolamento.md"]];

