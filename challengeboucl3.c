#include <stdio.h>
#include <stdlib.h>

int main() {
    int nombre, i;
    int premier;
    

    printf("Entrez le nombre pour savoir premier ou non : ");
    scanf("%d", &nombre);

    for (i = 2; i < nombre; i++) {
        if(nombre % i ==0){
        	premier = 1;
			break;
		}
    }
    if(premier==1)
    	printf("%d n'est pas premier ",nombre);
    else 
    	printf("%d est premier ",nombre);

    return 0;
}

