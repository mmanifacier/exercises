#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    printf ("=== Menu ===\n\n");
    printf ("1. Royal Cheese\n");
    printf ("2. Mc Deluxe\n");
    printf ("3. Mc Bacon\n");
    printf ("4. Big Mac\n");

    printf ("Votre choix?\n");
    int choixMenu =0;
    scanf ("%d", &choixMenu);

    switch (choixMenu)
    {
    case 1:
        printf ("Vous avez choisi Royal Cheese !\n");
        break;
    case 2:
        printf ("Vous avez choisi Mc Deluxe !\n");
        break;
    case 3:
        printf ("Vous avez choisi Mc Bacon !\n");
        break;
    case 4:
        printf ("Vous avez choisi Big Mac !\n");
        break;
    default:
        printf ("Erreur lors de la selection\n");
        break;
    }

    printf ("\n\n");

    return 0;
}