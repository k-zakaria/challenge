#include <stdio.h>
#include <stdlib.h>
int somme (int a, int b){
	return a+b;
}
int multiplication(int a, int b){
	return a*b;
}

int main() {
	int a, b;
	printf("entre deux nombres pour calculer la somme \n");
	scanf("%d%d",&a,&b);
	printf("la somme est %d",somme(a,b));
	printf("la multiplication est %d",multiplication(a,b));
	return 0;
}
