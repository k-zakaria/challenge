#include <stdio.h>
#include <stdlib.h>


int main() {
	int tab[10], i, gelem,pelem;
	printf("entrez les elements de tableau\n");
	for(i=0; i<10;i++){
		scanf("%d",&tab[i]);
	}
	for(i=0;i<10;i++){
		if (tab[i]>=tab[i+1])
			gelem=tab[i];
		else
			pelem=tab[i];
	}
	printf("l'element %d est plus grands\n ",gelem);
	printf("l'element %d est plus petite ",pelem);

	
	return 0;
}
