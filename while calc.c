#include <stdio.h>

int main() {
    char operacao;
    float n1, n2, resultado;
    char continuar;

    do {
        printf("Digite o primeiro numero: ");
        scanf("%f", &n1);

        printf("Digite o segundo numero: ");
        scanf("%f", &n2);

        printf("Digite a operacao desejada (+, -, *, /): ");
        scanf(" %c", &operacao);

        switch (operacao) {
            case '+':
                resultado = n1 + n2;
                printf("O resultado da soma eh: %.2f\n", resultado);
                break;
            case '-':
                resultado = n1 - n2;
                printf("O resultado da subtracao eh: %.2f\n", resultado);
                break;
            case '*':
                resultado = n1 * n2;
                printf("O resultado da multiplicacao eh: %.2f\n", resultado);
                break;
            case '/':
                if (n2 != 0) {
                    resultado = n1 / n2;
                    printf("O resultado da divisao eh: %.2f\n", resultado);
                } else {
                    printf("Nao e possivel dividir por zero!\n");
                }
                break;
            default:
                printf("Operacao invalida!\n");
        }

        printf("Deseja realizar outra operacao? (s/n): ");
        scanf(" %c", &continuar);
    } while (continuar == 's' || continuar == 'S');

    return 0;
}
