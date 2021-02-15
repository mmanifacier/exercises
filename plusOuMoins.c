#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <stdbool.h>

#include "plusOuMoins.h"

int main() //fonction principale
{
    int nombreMystere, choixModeDeJeu, choixDifficulte, compteurPartie=1, choixRejouer;
    bool jouer=true, erreur=false;
    int MAX, MIN=1;

    printf("Bienvenue sur le nombre mystère! \n\n");

    while (jouer==true)
    {
        do //boucle erreur choix du mode de jeu
        {
            //choix du mode de jeu
            choixModeDeJeu = modeDeJeu(choixModeDeJeu);

            switch (choixModeDeJeu)
            {
            case 1:
                
                erreur=false;
                break;

            case 2:
                printf ("Le premier joueur choisi un nombre mystere entre 1 et 100\n\n");
                scanf ("%d", &nombreMystere);
                printf ("Au tour du second joueur de trouver le nombre mystere !\n\n");
                erreur=false;
                break;
            
            default:
                printf ("Erreur lors de la selection\n\n");
                erreur=true;
                break;
            }
        }
        while (erreur==true);
        
        do
        {
            choixDifficulte = difficulte(choixDifficulte);

            switch (choixDifficulte)
            {
            case 1:
                /* code */
                break;
            
            case 2:
                break;

            case 3:

                break;
            
            default:
                break;
            }
        }
        while (erreur==true);
    }   
}

int modeDeJeu(int choixModeDeJeu)
{
    printf ("Souhaitez vous jouer en solo ou en duo ?\n");
    printf ("Tapez 1 pour le mode solo.\n");
    printf ("Tapez 2 pour le mode duo.\n");

    scanf ("%d", &choixModeDeJeu);

    return choixModeDeJeu;
}

int difficulte(int choixDifficulte)
{
    printf("Choississez votre niveau de difficulte.");
    printf("Lvl 1: nombre entre 0 et 100, pas de limites de coups.");
    printf("Lvl 2: Nombre entre 0 et 200, pas de limites de coups.");
    printf("Lvl 3: Nombre entre 0 et 100, 5 chances maximun.");

    scanf("%d", &choixDifficulte);

    return choixDifficulte;
}