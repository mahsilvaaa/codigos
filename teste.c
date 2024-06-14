#include <stdio.h>

int main() {
    float v1, taxa = 7, meses, v2;

    printf("Valor do emprestimo (minimo R$100,00 e maximo R$10.000,00): \n");
    scanf("%f", &v1);

    printf("Prazo de pagamento em meses (maximo 36): ");
    scanf("%f", &meses);

    v2 = v1 * (1 + taxa * meses)/meses;

    printf("O valor final será R$ %.2f\n", v2);

    return 0;
}
