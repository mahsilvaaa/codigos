#include <stdio.h>

int main() {
    float idade, dolar, taxa = 0.20;

    printf("Digite sua idade atual: ");
    scanf("%f", &idade);

    printf("Digite a idade de aposentadoria desejada: ");
    scanf("%f", &desejada);


    if (real != 0) {
        dolar = real * taxa;
        printf("Valor em d�lares: $%.2f\n", dolar);
    }
    else if (dolar != 0) {
        real = dolar / taxa;
        printf("Valor em reais: R$%.2f\n", real);
    }
    else {
        printf("Valores inv�lidos.\n");
    }

    return 0;
}
