#include <stdio.h>
#include <stdlib.h>


int main() {
    char caractere;

    printf("Entrez un caract�re : ");
    scanf(" %c", &caractere);

    switch (caractere) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("%c est une voyelle.\n", caractere);
            break;
        default:
            printf("%c n'est pas une voyelle.\n", caractere);
            break;
    }

����return�0;
}
