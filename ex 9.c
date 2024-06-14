#include <stdio.h>

int main() {
    float investimentoinicial, valorinvestimento;
    int meses, mes;

    printf("Digite o valor inicial do investimento em Bitcoin: ");
    scanf("%f", &investimentoinicial);
    printf("Digite o numero de meses que deseja manter o investimento: ");
    scanf("%d", &meses);

    valorinvestimento = investimentoinicial;
    printf("\nInvestimento inicial: R$ %.2f\n", investimentoinicial);
    for (mes = 1; mes <= meses; mes++) {
        valorinvestimento *= 1.10;
        printf("Valor do investimento no mes %d: R$ %.2f\n", mes, valorinvestimento);
    }


    printf("\nValor final do investimento apos %d meses: R$ %.2f\n", meses, valorinvestimento);

    return 0;
}
