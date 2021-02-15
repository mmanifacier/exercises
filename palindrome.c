#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>
#include <stdbool.h>

// Ecrire un algorithme qui vas nous dire si un mot est un palindrome.

int main()
{
    printf("Mot a tester\n");
    char saisie [30];
    bool pali;

    scanf("%s", &saisie);

    for (int i = 0, j = strlen(saisie)-1; i <= j; i++, j--)
    {
        pali = (saisie[i] != saisie[j]) ? false : true;
    }

    (pali == true) ? printf("Le mot %s est un palindrome\n", saisie) : printf("Le mot %s pas un palindrome\n", saisie);
}