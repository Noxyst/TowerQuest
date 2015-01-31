#include "main.h"

/*Carac fDistribCarac(Carac player,int pointCarac)
{
    int choix;
    int possible = 0; // doit devenir un bool pour plus de practicité

    printf("\nVeuillez faire un choix:\n");
    printf("1. Constitution:\t%d\n", player.consti);
    printf("2. Force:\t\t%d\n", player.force);
    printf("3. Agilite:\t\t%d\n", player.agi);
    printf("4. Defense:\t\t%d\n", player.def);
    printf("5. Volonte:\t\t%d\n", player.vol);
    printf("6. Rien\n\n");
    printf("Que voulez vous ameliorer ?\t");
    scanf("%d", &choix);

    printf("\n");

    while(possible== 0)
    {
        switch (choix)
        {
        case 1:
            if (player.consti >= 20)
            {
                if (pointCarac >= 4)
                {
                    player.consti++;
                    pointCarac = pointCarac - 4;
                }
                else
                {
                    possible = 1;
                }
            }
            else if (player.consti >=16)
            {
                if (pointCarac >= 3)
                {
                    player.consti++;
                    pointCarac = pointCarac - 3;
                }
                else
                {
                    possible = 1;
                }
            }
            else if (player.consti >= 13)
            {
                if (pointCarac >= 2)
                {
                    player.consti++;
                    pointCarac = pointCarac - 2;
                }
                else
                {
                    possible = 1;
                }
            }
            else
            {
                player.consti++;
                pointCarac = pointCarac - 1;
            }
            break;
        case 2:
                    if (player.force >= 20)
            {
                if (pointCarac >= 4)
                {
                    player.force++;
                    pointCarac = pointCarac - 4;
                }
                else
                {
                    possible = 1;
                }
            }
            else if (player.force >=16)
            {
                if (pointCarac >= 3)
                {
                    player.force++;
                    pointCarac = pointCarac - 3;
                }
                else
                {
                    possible = 1;
                }
            }
            else if (player.force >= 13)
            {
                if (pointCarac >= 2)
                {
                    player.force++;
                    pointCarac = pointCarac - 2;
                }
                else
                {
                    possible = 1;
                }
            }
            else
            {
                player.force++;
                pointCarac = pointCarac - 1;
            }
            break;
        case 3:
                    if (player.agi >= 20)
            {
                if (pointCarac >= 4)
                {
                    player.agi++;
                    pointCarac = pointCarac - 4;
                }
                else
                {
                    possible = 1;
                }
            }
            else if (player.agi >=16)
            {
                if (pointCarac >= 3)
                {
                    player.agi++;
                    pointCarac = pointCarac - 3;
                }
                else
                {
                    possible = 1;
                }
            }
            else if (player.agi >= 13)
            {
                if (pointCarac >= 2)
                {
                    player.agi++;
                    pointCarac = pointCarac - 2;
                }
                else
                {
                    possible = 1;
                }
            }
            else
            {
                player.agi++;
                pointCarac = pointCarac - 1;
            }
            break;
        case 4:
                    if (player.def >= 20)
            {
                if (pointCarac >= 4)
                {
                    player.def++;
                    pointCarac = pointCarac - 4;
                }
                else
                {
                    possible = 1;
                }
            }
            else if (player.def >=16)
            {
                            if (pointCarac >= 3)
                {
                    player.def++;
                    pointCarac = pointCarac - 3;
                }
                else
                {
                    possible = 1;
                }
            }
            else if (player.def >= 13)
            {
                if (pointCarac >= 2)
                {
                    player.def++;
                    pointCarac = pointCarac - 2;
                }
                else
                {
                    possible = 1;
                }
            }
            else
            {
                player.def++;
                pointCarac = pointCarac - 1;
            }
            break;
        case 5:
            printf("Ce choix n'est pas encore possible desolé.\n");
             if (player.vol >= 20)
            {
                if (pointCarac >= 4)
                {
                    player.vol++;
                    pointCarac = pointCarac - 4;
                }
                else
                {
                    possible = false;
                }
            }
            else if (player.vol >=16)
            {
                            if (pointCarac >= 3)
                {
                    player.vol++;
                    pointCarac = pointCarac - 3;
                }
                else
                {
                    possible = false;
                }
            }
            else if (player.vol >= 13)
            {
                if (pointCarac >= 2)
                {
                    player.vol++;
                    pointCarac = pointCarac - 2;
                }
                else
                {
                    possible = false;
                }
            }
            else
            {
                player.vol++;
                pointCarac = pointCarac - 1;
            }
            break;
        case 6:
            possible=1;
            break;
        default:
            printf("Vous n'avez pas rentre un nombre correct !\n");
            break;
        }
    }
    printf("\n\n");

    return player;
} */
