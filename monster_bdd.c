#include "main.h"


Carac fDefineMonster(int alea)
{
    Carac tabMonstre[20];
    Carac monstre;


    Carac player;
    player.consti = 15;
    player.force = 12;
    player.agi = 10;
    player.def = 10;
    player.vol = 10;
    player.vieMax = player.vieAct = 15+(player.consti-10);
    player.degat = ceil(player.force/2);
    //player.esquive =
    //player.parade =
//    player.nom = {'p','l','a','y','e','r'};
    player.id = 0;

    tabMonstre[0] = player;


    Carac rat1;
    rat1.consti = 10;
    rat1.force = 10;
    rat1.agi = 10;
    rat1.def = 10;
    rat1.vol = 10;
    rat1.vieMax = rat1.vieAct = 15+(rat1.consti-10);
    rat1.degat = ceil(rat1.force/2);
    //rat1.esquive =
    //rat1.parade =
    //rat1.nom = "Rat gris";
    rat1.id = 1;

    tabMonstre[1] = rat1;


    Carac rat2;
    rat2.consti = 9;
    rat2.force = 13;
    rat2.agi = 9;
    rat2.def = 8;
    rat2.vol = 10;
    rat2.vieMax = rat2.vieAct = 15+(rat2.consti-10);
    rat2.degat = ceil(rat2.force/2);
    //rat2.esquive =
    //rat2.parade =
    //rat2.nom = "Rat noir";
    rat2.id = 2;

    tabMonstre[2] = rat2;


    Carac rat3;
    rat3.consti = 9;
    rat3.force = 9;
    rat3.agi = 8;
    rat3.def = 13;
    rat3.vol = 10;
    rat3.vieMax = rat3.vieAct = 15+(rat3.consti-10);
    rat3.degat = ceil(rat3.force/2);
    //rat3.esquive =
    //rat3.parade =
    //rat3.nom = "Rat sournois";
    rat3.id = 3;

    tabMonstre[3] = rat3;


    Carac rat4;
    rat4.consti = 11;
    rat4.force = 11;
    rat4.agi = 10;
    rat4.def = 9;
    rat4.vol = 10;
    rat4.vieMax = rat4.vieAct = 15+(rat4.consti-10);
    rat4.degat = ceil(rat4.force/2);
    //rat4.esquive =
    //rat4.parade =
    //rat4.nom = "Rat mutant";
    rat4.id = 4;

    tabMonstre[4] = rat4;


    Carac ratBoss;
    ratBoss.consti = 15;
    ratBoss.force = 12;
    ratBoss.agi = 10;
    ratBoss.def = 10;
    ratBoss.vol = 10;
    ratBoss.vieMax = ratBoss.vieAct = 15+(ratBoss.consti-10);
    ratBoss.degat = ceil(ratBoss.force/2);
    //rat1.esquive =
    //rat1.parade =
//    ratBoss.nom = "Chef rat";
    ratBoss.id = 5;

    tabMonstre[5] = ratBoss;

    monstre = tabMonstre[alea];

    return monstre;
}
