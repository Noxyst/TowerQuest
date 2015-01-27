#include "main.h"

int fCombat (Carac player, Carac monstre)
{
    Carac winner;
    int choix;
    srand(time(NULL));
    int degat;
    int choixMonstre;


    while(player.vieAct >= 0 && monstre.vieAct >= 0)
    {
        // tour du joueur
        printf("Une monstre vous a attaque !\n");
        //printf("Que faire ?\n");
       // printf("1. Attaquer\n");
        //printf("2. Defendre\n");
        //printf("3. Objet");
        //scanf("%d", &choix);
        printf("\n");
        choix = 1;
        switch(choix)
        {
        case 1:
            degat = rand()%(player.degat - 1)+ 1;
            monstre.vieAct = monstre.vieAct - degat;
            printf("Vous avez infliger %d dommages au monstre !\n", degat);
            printf("Il lui reste %d pv\n\n", monstre.vieAct);
            break;

      /*  case 2:
            break;

        case 3:
            break; */

        default:
            printf("Vous n'avez pas rentre une valeur correcte !\n\n");
            break;
        }
        // tour du monstre
        //choixMonstre = rand()(3-1)+1;
        choixMonstre = 1;

        switch(choixMonstre)
        {
        case 1:
            degat = rand()%(monstre.degat - 1) + 1;
            player.vieAct = player.vieAct - degat;
            printf("Vous avez subi %d dommages !\n", degat);
            printf("Il vous reste %d pv\n\n", player.vieAct);
            break;

      /*  case 2:
            break;

        case 3:
            break; */

        default:
            printf("Vous n'avez pas rentre une valeur correcte !\n");
            break;
        }
    printf("\n\n\n");
    system("PAUSE");
    system("cls");
    }
    if (player.vieAct =! 0)
        {
            winner = player;
        }
        else
        {
            winner = monstre;
        }

    return winner.id;
}
