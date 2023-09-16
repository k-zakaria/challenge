#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define maxMots 100
#define maxMotsLiens 50

int main()
{
    char mots[maxMots][maxMotsLiens];
    int nombreMots, i;

    printf("Entrez le nombre de mots : ");
    scanf("%d", &nombreMots);

    if (nombreMots > maxMots)
    {
        printf("Erreur : nombre de mots trop grand \n");
        return 1;
    }

    printf("Entrez la liste de mots : \n");
    for (i = 0; i < nombreMots; i++)
    {
        scanf("%s", mots[i]);
    }

    printf("La liste de mots dans l'ordre inverse est : ");
    for (i = nombreMots - 1; i >= 0; i--)
    {
        printf("%s ", mots[i]);
    }
    printf("\n");

    return 0;
}
