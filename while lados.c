#include <stdio.h>

int main() {
    int lados;
    char continuar;

    do {
        printf("Digite o n�mero dos lados (3 a 6): ");
        scanf(" %d", &lados);

        switch (lados) {
            case 3:
                printf("A figura � um tri�ngulo.\n");
                break;
            case 4:
                printf("A figura � um quadrado.\n");
                break;
            case 5:
                printf("A figura � um pent�gono.\n");
                break;
            case 6:
                printf("A figura � um hex�gono.\n");
                break;
            default:
                printf("N�mero de lados inv�lido! Tente novamente.\n");
        }

        printf("Deseja tentar novamente? (s/n): ");
        scanf(" %c", &continuar);
    } while (continuar == 's' || continuar == 'S');

    return 0;
}
