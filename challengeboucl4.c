#include <stdio.h>
#include <stdlib.h>

int main() {
    int nbr, somme ;//, count ;
    int maxNbr ;

    printf("Entrez des nombres entre 1 et 99 pour calculer leur somme. Entrez un nombre hors de cette plage pour arrêter.\n");

    do {
        scanf("%d", &nbr);

        if (nbr > 0 && nbr < 100) {
            somme += nbr;//somme=somme+nbr
           // count++;

            if (nbr > maxNbr) {
                maxNbr = nbr;
            }
        }

    } while (nbr > 0 && nbr < 100);

    printf("La somme est %d\n", somme);

    //if (count > 0) {
        printf("Plus grand nombre: %d\n", maxNbr);
    //} else {
       // printf("Aucun nombre valide n'a été saisi.\n");
    //}

    return 0;
}
