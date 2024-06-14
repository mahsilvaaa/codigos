#include <stdio.h>

int main() {
    float valor1, valor2, resultado;


    printf("Digite o valor inicial do investimento: ");
    scanf("%f", &valor1);
    printf("Digite o valor atual do investimento: ");
    scanf("%f", &valor2);


    resultado = valor2 - valor1;

    if (resultado > 0) {
        printf("Parabens! Você teve um lucro de R$ %.2f.\n", resultado);
    } else if (resultado < 0) {
        printf("Você teve um prejuizo de R$ %.2f.\n", -resultado);
    } else {
        printf("Você manteve seu investimento sem lucro nem prejuizo.\n");
    }

    return 0;
}
