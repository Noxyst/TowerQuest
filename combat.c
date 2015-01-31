#include "main.h"

int fCombat (Carac joueur, Carac monstre)
{
    int choix;
    srand(time(NULL));
    int degat;
    int choixMonstre;

    while(joueur.vieAct > 0 && monstre.vieAct > 0)
    {
        // tour du joueur
        printf("Une monstre vous a attaque !\n");
        printf("Que faire ?\n");
        printf("1. Attaquer\n");
        //printf("2. Defendre\n");
        printf("3. Potion (+ 7 PV)\n");
        scanf("%d", &choix);
        printf("\n");
        switch(choix)
        {
        case 1:
            degat = rand()%(joueur.degat+1 - 1)+ 1;
            monstre.vieAct = monstre.vieAct - degat;
            printf("Vous avez infliger %d dommages au monstre !\n", degat);
            printf("Il lui reste %d pv\n\n", monstre.vieAct);
            break;

       /* case 2:
            break; */

        case 3:
            printf("Vous avez choisi d'utiliser une potion\n");
            if(joueur.potion != 0 && joueur.vieAct < joueur.vieMax)
            {
                joueur.vieAct = fPotion(joueur);
                if(joueur.vieAct > joueur.vieMax)
                {
                    joueur.vieAct = joueur.vieMax;
                }
                printf("Vous avez donc %d PV\n",joueur.vieAct);
                fPause();
                joueur.potion --;
            }
            else
            {
                if(joueur.vieAct > joueur.vieMax)
                {
                    printf("Mais vous avez deja votre vie au maximum !\n");
                    printf("Vous decidez donc d'attaquer a la place !\n");
                    degat = rand()%(joueur.degat+1 - 1)+ 1;
                    monstre.vieAct = monstre.vieAct - degat;
                    printf("Vous avez infliger %d dommages au monstre !\n", degat);
                    printf("Il lui reste %d pv\n\n", monstre.vieAct);
                }
                else
                {
                    printf("Mais vous n'en n'avez plus pour ce combat ! \n");
                    printf("Vous decidez donc d'attaquer a la place !\n");
                    degat = rand()%(joueur.degat+1 - 1)+ 1;
                    monstre.vieAct = monstre.vieAct - degat;
                    printf("Vous avez infliger %d dommages au monstre !\n", degat);
                    printf("Il lui reste %d pv\n\n", monstre.vieAct);
                }

            }

            break;

        case 42: // permet de sauter un combat (fonction cachée)
            monstre.vieAct = 0;
            break;

        case 24:
            joueur.vieAct = 0;
            break;

        default:
            printf("Vous n'avez pas rentre une valeur correcte !\n\n");
            break;
        }
        // tour du monstre
        //choixMonstre = rand()(3-1)+1;

        if (monstre.vieAct > 0)
        {
            choixMonstre = 1;
            switch(choixMonstre)
            {
            case 1:
                degat = rand()%(monstre.degat+1 - 1) + 1;
                joueur.vieAct = joueur.vieAct - degat;
                printf("Vous avez subi %d dommages !\n", degat);
                printf("Il vous reste %d pv\n\n", joueur.vieAct);
                break;

          /*  case 2:
                break;

            case 3:
                break; */

            default:
                printf("Vous n'avez pas rentre une valeur correcte !\n");
                break;
            }
        }

    fPause();
    }

    return joueur.vieAct;
}

int fPotion(Carac joueur)
{
    joueur.vieAct = joueur.vieAct + 7;

    return joueur.vieAct;
}

bool fEsquiveJ(Carac attaquant, Carac defenseur)
{
    int alea1;
    int alea2;
    int chanceEsq;
    int chanceTouche;
    srand(time(NULL));
    bool esquive;

    alea1 = rand()%(20)+1;
    alea2 = rand()%(20)+1;

    chanceEsq = alea1 + defenseur.esquive;

    chanceTouche = alea2 + attaquant.esquive;

    if(chanceEsq > chanceTouche)
    {
        esquive = true;
    }
    else
    {
        esquive = false;
    }

    return esquive;
}
