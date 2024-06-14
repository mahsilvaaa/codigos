#include <stdio.h>

int main(){
    char palavra1[100],palavra2[100];
    int tam1, tam2;

    printf("escreva uma palavra: ");
    scanf("%s", &palavra1);
    printf("escreva uma palavra: ");
    scanf("%s", &palavra2);

    tam1 = strlen(palavra1);
    tam2 = strlen(palavra2);

    if (tam1 == tam2){
        printf("palavras com o mesmo numero de letras \n");
    }
    else{
         printf("palavras com letras diferentes \n");
    }
}
