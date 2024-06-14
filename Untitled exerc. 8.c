
#include <stdio.h>

int main() {
    int soma = 0;
    int cont;


    for (cont = 1; cont <= 100; cont++) {
        soma += cont;
    }

    printf("A soma dos numeros de 1 a 100 e: %d\n", soma);

    return 0;
}

