#include <stdio.h>

int main() {
    int valeur1, valeur2;
    int somme;

    printf("Entrez la première valeur : ");
    scanf("%d", &valeur1);

    printf("Entrez la deuxième valeur : ");
    scanf("%d", &valeur2);

   somme = valeur1 + valeur2;

    if (valeur1 == valeur2) {
        somme = 3 * somme;
        printf("Les deux valeurs sont identiques, le triple de leur somme est : %d\n", somme);
    } else {
        printf("La somme des deux valeurs est : %d\n", somme);
    }

    return 0;
}
