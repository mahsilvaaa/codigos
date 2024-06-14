#include <stdio.h>

int main() {
    int lados;
    char continuar;

    do {
        printf("Digite o número dos lados (3 a 6): ");
        scanf(" %d", &lados);

        switch (lados) {
            case 3:
                printf("A figura é um triângulo.\n");
                break;
            case 4:
                printf("A figura é um quadrado.\n");
                break;
            case 5:
                printf("A figura é um pentágono.\n");
                break;
            case 6:
                printf("A figura é um hexágono.\n");
                break;
            default:
                printf("Número de lados inválido! Tente novamente.\n");
        }

        printf("Deseja tentar novamente? (s/n): ");
        scanf(" %c", &continuar);
    } while (continuar == 's' || continuar == 'S');

    return 0;
}
