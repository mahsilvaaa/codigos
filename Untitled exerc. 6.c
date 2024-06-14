#include <stdio.h>

int main() {
    int soma = 0;

    for (int cont = 1; cont <= 100; cont ++) {
        if (cont % 2 == 0) {
            soma += cont ;
        }
    }

    printf("A soma dos números pares de 1 a 100 é: %d\n", soma);

    return 0;
}
