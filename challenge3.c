#include <stdio.h>
#include <stdlib.h>



int main() {
	int a, somme=0, moyenne ,i;
	for(i=0;i<4;i++){
	printf("entrez les nombres ");
	scanf("%d",&a);
	somme = somme + a;
	moyenne = somme /4;
	}
	printf("la somme est : %d\n",somme);
	printf("la moyenne est : %d",moyenne);	
	return 0;
}
