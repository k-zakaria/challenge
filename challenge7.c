#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, inverse;
    printf("entrez les chiffres pour l'inverse (max 3 chiffres) : ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Entrez un nombre positif.\n");
        return 1;
    }

    if (n < 10)
    {
        printf("%d\n", n);
    }
    else if (n < 100)
    {
        inverse = (n % 10) * 10 + (n / 10);
        printf("%d\n", inverse);
    }
    else if (n < 1000)
    {
        inverse = (n % 10) * 100 + ((n / 10) % 10) * 10 + (n / 100);
        printf("%d\n", inverse);
    }
    else
    {
        printf("Le nombre est trop grand.\n");
    }

    return 0;
}

