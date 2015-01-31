#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED

// Ce fichier sert à la définiton de la structure.

typedef struct Carac
{
    int consti;
    int force;
    int agi;
    int def;
    int vol;
    int vieAct;
    int vieMax;
    int degat;
    int esquive;
    int parade;
    char nom[20];
    int id;
    int potion;
} Carac;

