#include <stdio.h>

int main() {
    float v1, taxa = 7, meses, v2;

    printf("Valor do emprestimo (minimo R$100,00 e maximo R$10.000,00): \n");
    scanf("%f", &v1);

    if (v1 < 100 || v1 > 10000) {
        printf("Valor nao permitido.\n");
        return 1;
    }

    printf("Prazo de pagamento em meses (maximo 36): ");
    scanf("%f", &meses);

    if (meses < 1 || meses > 36) {
        printf("Prazo nao permitido.\n");
        return 1;
    }

    v2 = v1 * (1 + taxa * meses) / meses;
    printf("O valor final sera R$ %.2f\n", v2);

    return 0;
}

