#include "main.h"

/*void fAfficherRegle()
{
    printf("De 8 a 12 il faut 1 points pour augmenter la caracteristique\n");
    printf("De 13 a 15 il faut 2 points pour augmenter la caracteristique\n");
    printf("De 16 a 19 il faut 3 points pour augmenter la caracteristique\n");
    printf("Pour 20 et plus il faut 4 points pour augmenter la caracteristique\n\n");
}*/

void fAfficherCarac(Carac monstre)
{
    printf("\nVoici les caracteristiques de %d\n\n",monstre.id);      //printf test pour se reperer dans l'exe
    printf("Constitution:\t%d\n", monstre.consti);
    printf("Force:\t\t%d\n", monstre.force);
    printf("Agilite:\t%d\n", monstre.agi);
    printf("Defense:\t%d\n", monstre.def);
    printf("Volonte:\t%d\n\n", monstre.vol);
    printf("Ces caracteristique donnent:\n");
    printf("Vie:\t%d\n",monstre.vieMax);
    printf("Degats:\t%d\n",monstre.degat);
   // printf("Parade (A definir):\t\t%d\n",monstre.parade);
   printf("Esquive:\t\t%d\n",monstre.esquive);
}

void fPause()
{
    printf("\n\n\n");
    system("PAUSE");
    system("cls");
}
