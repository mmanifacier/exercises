#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int rejouer(int choixRejouer)
{
    printf ("Voulez vous rejouer ?\n");

    printf ("1 pour Oui\n");
    printf ("2 pour Non\n");

    scanf ("%d", &choixRejouer);

    return choixRejouer;
}

int jeu(int nombreMystere)
{
    int nombreSaisi, compteurCoup=1;
    
    do // si la réponse est mauvaise
    {
        printf ("Quel est le nombre ?\n");
        scanf ("%d", &nombreSaisi);

        if (nombreSaisi<nombreMystere)
        {
            printf ("C'est plus !\n");
            compteurCoup++ ;
        }

        if (nombreSaisi>nombreMystere)
        {
            printf ("C'est moins!\n");
            compteurCoup++ ;
        }
    }
    while (nombreSaisi != nombreMystere);

    // si la réponse est la bonne
    if (nombreSaisi == nombreMystere)
    {
        printf ("Bravo, vous avez trouve le nombre mystere en %d tentatives !!!\n\n", compteurCoup);
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

int main()
{
    int nombreMystere, choixModeDeJeu, compteurPartie=1, jouer=1, erreur=0, choixRejouer;
    const int MAX = 100, MIN = 1;
    
    printf ("Bienvenue sur Le Nombre Mystere !\n\n");

    while (jouer==1)
    {
        do //boucle erreur choix du mode de jeu
        {
            //choix du mode de jeu
            choixModeDeJeu = modeDeJeu(choixModeDeJeu);
            erreur=0;

            switch (choixModeDeJeu)
            {
            case 1:
                srand(time(NULL));
                nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;
                break;

            case 2:
                printf ("Le premier joueur choisi un nombre mystere\n\n");
                scanf ("%d", &nombreMystere);
                printf ("Au tour du second joueur de trouver le nombre mystere !\n\n");
                break;
            
            default:
                printf ("Erreur lors de la selection\n\n");
                erreur=1;
                break;
            }
        }
        while (erreur==1);

        jeu(nombreMystere);

        do // boucle en cas d'erreur de saisie du joueur
        {
            choixRejouer = rejouer(choixRejouer);

            switch (choixRejouer) // choix de rejouer ou non
            {
            case 1 :
                printf ("Vous avez choisi de rejouer, bonne chance !\n\n");
                compteurPartie++;
                erreur = 0;
                jouer = 1;
                break;
            
            case 2 :
                printf ("Vous avez fait %d parties, au revoir !\n\n", compteurPartie);
                erreur = 0;
                jouer = 0;
                break;

            default:
                printf ("Erreur lors de la selection\n\n");
                erreur = 1;
                break;
            }
        }
        while (erreur == 1);
    }
}