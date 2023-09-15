#include <stdio.h>
#include <stdlib.h>


int main() {
	 float F,C;
    printf("Entrez la Temperature en Fahrenheit :");
    scanf("%f",&F);
    C = (F-32)/1.8;
    printf ("Temperature en Celisius : %f \n",C);
    if (F<37)
    {
    printf("Il fait tres froid");
   	}
    else if (F>37 && F<47)
    {
    printf("Il fait froid");
	}
    else if (F>48 && F<57)
    {
    printf("Il fait chaud");
	}
    else
	{
	printf("Il fait tres chaud");
	}
	return 0;
}
