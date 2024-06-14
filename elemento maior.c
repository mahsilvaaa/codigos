#include <stdio.h>

int main(){

    int numeros [] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int maior = numeros[0];

    for (int i = 1; i < 10; i++) {
        if (numeros[i] % 2 == 0) {// vai verificando pelo indice o maior numero
             printf ("%d\n", numeros[i]);
        }
    }


    return 0;

    }
