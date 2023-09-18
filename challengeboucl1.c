#include <stdio.h>
#include <stdlib.h>


int main() {
	int nombre, i, result;
	printf("Entre un nombre entre 1 et 10 : ");
	scanf("%d",&nombre);
	
	for(i=0;i<=10;i++){
		result=i*nombre;
		printf("%d*%d=%d\n",i,nombre,result);
	}
	return 0;
}
