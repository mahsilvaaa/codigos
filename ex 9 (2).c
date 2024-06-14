#include <stdio.h>
int main () {

    float soma, media, numeros[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (int i = 0; i <10; i++){
        soma = soma + numeros[i];
        media = soma / 10;

    }
    printf ("%f\n", media);

return 0;
}

