#include <stdio.h>
#include <stdlib.h>

int main() {
    int nombre, i, j;

    printf("Entrez le nombre premier pour faire pyramid : ");
    scanf("%d", &nombre);

    for (i = 0; i < nombre; i++) {
        for (j = 0; j < nombre -i-1; j++) {
            printf(" ");
        }
        for(j=0;j< 2*i+1;j++){
        	printf("*");
		}
        printf("\n");
    }

    return 0;
}

