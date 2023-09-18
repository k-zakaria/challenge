#include <stdio.h>
#include <stdlib.h>

int main(){
    int nombre, result, modelo;
    int octal1, octal2, octal3, octal4 ;
    int hexadecimal1, hexadecimal2, hexadecimal3, hexadecimal4;
    printf("Entrez le nombre pour convertir en octal max 4 chiffres : ");
    scanf("%d", &nombre);


    result = nombre / 8;
    modelo = nombre % 8;
    octal1 = modelo;


    nombre = result;
    result = nombre / 8;
    modelo = nombre % 8;
    octal2 = modelo;


    nombre = result;
    result = nombre / 8;
    modelo = nombre % 8;
    octal3 = modelo;


    nombre = result;
    result = nombre / 8;
    modelo = nombre % 8;
    octal4 = modelo;

    printf("voila , le nombre en  octale : %d%d%d%d\n", octal4, octal3, octal2, octal1);

    //pour la valeur origine
    printf("Entrez nouveau nombre pour convertir en hexadecimal max 4 chiffres :  ");
    scanf("%d", &nombre);

    result = nombre / 16;
    modelo = nombre % 16;
    hexadecimal1 = modelo;


    nombre = result;
    result = nombre / 16;
    modelo = nombre % 16;
    hexadecimal2 = modelo;


    nombre = result;
    result = nombre / 16;
    modelo = nombre % 16;
    hexadecimal3 = modelo;


    nombre = result;
    result = nombre / 16;
    modelo = nombre % 16;
    hexadecimal4 = modelo;

//    Affichage des résultats hexadécimaux directement.
//    mais,vous voulez imprimer A au lieu de 10, B au lieu de 11, etc.
//    printf("voila , le nombre en  octale : %d%d%d%d\n", hexadecimal4, hexadecimal3, hexadecimal2, hexadecimal1);


//    Affichage des résultats hexadécimaux
    printf("Voici le nombre en hexadecimal : ");
    if(hexadecimal4 >= 10) printf("%c", 'A' + (hexadecimal4 - 10));
    else printf("%d", hexadecimal4);

    if(hexadecimal3 >= 10) printf("%c", 'A' + (hexadecimal3 - 10));
    else printf("%d", hexadecimal3);

    if(hexadecimal2 >= 10) printf("%c", 'A' + (hexadecimal2 - 10));
    else printf("%d", hexadecimal2);

    if(hexadecimal1 >= 10) printf("%c", 'A' + (hexadecimal1 - 10));
    else printf("%d", hexadecimal1);

    printf("\n");
    return 0;
}









