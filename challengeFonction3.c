#include <stdio.h>
#include <stdlib.h>
int pgcd(int a, int b){
	int mod;
	if(b==0)
		return a;
	else {
		mod = a%b ;
		return pgcd(b,mod );
	}
}

int main() {
	int a, b;
	printf("entrez deux nombres pour calculer le PGCD :\n");
	scanf("%d%d",&a,&b);
	
	printf("le PGCD est %d ",pgcd(a,b));
	
	return 0;
}
