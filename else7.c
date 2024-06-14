#include <stdio.h>
#include <math.h>

int main() {
    int num, sort = 5, cont;

    for (cont = 0; cont < 5; cont ++ ) {
         printf("Digite o numero: ");
        scanf("%i", &num);
        if (num==sort) {
            printf("Parabens ! Voce ganhou !");
            break;
             }
        else {
            printf("Nao foi dessa vez...\n");
            }
            }
    }
