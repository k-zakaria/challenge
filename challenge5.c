#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int x1, x2, y1, y2;
    double distance;

    printf("Entrez les coordonnées de X\n");
    
    printf("Entrez x1:\n");
    scanf("%d", &x1);
    
    printf("Entrez x2:\n");
    scanf("%d", &x2);

    printf("Entrez les coordonnées de Y\n");
    
    printf("Entrez y1:\n");
    scanf("%d", &y1);
    
    printf("Entrez y2:\n");
    scanf("%d", &y2);

    // Calcul de la distance
    distance = sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));

    printf("La distance entre les deux points est: %f\n", distance);

    return 0;
}

