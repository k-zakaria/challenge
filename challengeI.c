#include <stdio.h>
#include <stdlib.h>

int main() {
    int nombre;
    
    // Demande � l'utilisateur d'entrer un nombre
    printf("Entrez un nombre : ");
    scanf("%d", &nombre);

    // V�rifie si le nombre est pair ou impair
    if (nombre % 2 == 0) {
        printf("Le nombre est pair.\n");
    } else {
        printf("Le nombre est impair.\n");
    }
return 0;����
}
