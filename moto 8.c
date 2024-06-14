#include <stdio.h>

int main() {
    float valortotal, taxa, parcelas, total;
    int numparcelas;

    printf("Digite o valor total da moto: ");
    scanf("%f", &total);
    printf("Digite o numero de parcelas desejadas: ");
    scanf("%d", &parcelas);

    taxa = 0.02;

    parcelas = (total / numparcelas) * (1 + taxa);


    total = parcelas * numparcelas;

    printf("\nValor de cada parcela: R$ %.2f\n", parcelas);
    printf("Total pago ao final do consorcio: R$ %.2f\n", total);

    return 0;
}
