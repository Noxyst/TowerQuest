#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "main.h"
#include "monster_bdd.h"
#include "system.h"
#include "player.h"
#include "combat.h"

#include "monster_bdd.c"
#include "combat.c"




int main(void)
{
    Carac monstre;
    Carac joueur;
    int nbCombat = 4;
    joueur = fDefineMonster(0);
    int alea;
    srand(time(NULL));

    do
    {
        if(nbCombat == 5)
        {
            alea = 5;
            printf("Apres avoir avance dans ce labyrinthe vous rencontrez le chef de ce lieu !\n\n");
            printf("Il est actuellement endormi mais bouche la sortie, vous decidez donc de regagnez \nvos points de vie !\n");
            joueur.vieAct = joueur.vieMax;
            fPause();
        }
        else
        {
            alea = rand()%(5-1)+1;
            printf("Vous en etes au combat %d",nbCombat);
        }




        monstre = fDefineMonster(alea);

        fAfficherCarac(monstre);
        fPause();
        fAfficherCarac(joueur);
        fPause();

        joueur.vieAct = fCombat(joueur, monstre);
        if (joueur.vieAct > 0)
        {
            printf("Vous avez gagner !\n");
        }
        else
        {
            printf("Vous avez perdu !\n");
        }
        fPause();

        nbCombat++;


    } while(nbCombat < 6 && joueur.vieAct > 0 );


    return 0;
}
