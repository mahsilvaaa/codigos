#include <stdio.h>

int main() {
    float v1, taxa, anos, v2;

    printf("Valor inicial do investimento: ");
    scanf("%f", &v1);

    printf("Taxa de juros anual: ");
    scanf("%f", &taxa);

    printf("Numero de anos: ");
    scanf("%f", &anos);

    v2 = v1 * (1 + taxa / 100 * anos);

    printf("O valor final será R$ %.2f\n", v2);

    return 0;
}

