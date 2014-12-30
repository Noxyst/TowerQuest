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
    int winner;

    int alea;
    srand(time(NULL));
    alea = rand()%(5-1)+1;

    joueur = fDefineMonster(0);
    monstre = fDefineMonster(alea);



    printf("\n\n\n");
    system("PAUSE");
    system("cls");
    fAfficherCarac(monstre);
    printf("\n\n\n");
    system("PAUSE");
    system("cls");
    fAfficherCarac(joueur);
    printf("\n\n\n");
    system("PAUSE");
    system("cls");

    winner = fCombat(joueur, monstre);
    if (winner == joueur.id)
    {
        printf("Vous avez gagner !\n");
    }
    else
    {
        printf("Vous avez perdu !\n");
    }
    printf("\n\n\n");
    system("PAUSE");
    system("cls");

    return 0;
}
