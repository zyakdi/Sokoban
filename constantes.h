#ifndef CONSTANTES_H
#define CONSTANTES_H

// LE JEU FONCTIONNE SEULEMENT AVEC CES DIMENSIONS. CE SERAIT TROP DIFFICILE D'ADAPTER LE JEU A TOUTES LES DIMENSIONS ET CA N'A PAS D'INTERET. C'EST MON JEU
#define WIDTH T_ICONE*MAP_WIDTH // 14 caisses de largeur * 34 = 476 pixels
#define HEIGHT T_ICONE*MAP_HEIGHT // 14 caisses de hauteur

#define MAP_WIDTH 14
#define MAP_HEIGHT 14

// SI JE VEUX CHANGER LE PERSONNAGE, BIEN PENSER A PRENDRE UN SPRITE CARRE ET DE TAILLE EGALE A L'ICONE, ET A MODIFIER LA MACRO SI BESOIN
#define T_ICONE 34
#define T_MARIO 34

#define NB_CAISSES_MAX 15

#define VIDE 0
#define CAISSE 1
#define OBJECTIF 2
#define MUR 3
#define CAISSE_OK 4
#define PERSO 9

#define T_MAX 100

#endif // CONSTANTES_H