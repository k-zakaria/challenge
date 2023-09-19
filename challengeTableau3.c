#include <stdio.h>
#include <stdlib.h>


int main() {
	int tab[10], i, j, aide;
	printf("donnez vous 10 nombres entiers pour trie de plus grand au plus petit.\n");
	for(i=0; i<10; i++){
		scanf("%d",&tab[i]);
	}
	for(i=0; i<9; i++){
		for(j=i+1; j<10;j++){
		if(tab[i]<=tab[j]){
			aide=tab[i];
			tab[i]=tab[j];
			tab[j]=aide	;
		}		
		}	
	}
	for(i=0;i<10;i++){
		printf("%d|",tab[i]);
	}
	
		

	return 0;
}
