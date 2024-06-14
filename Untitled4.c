#include <stdio.h>

int main() {
    char operador;
    float num1, num2, resultado;

    printf("Digite a opera��o desejada (+, -, *, /): ");
    scanf(" %c", &operador);
    printf("Digite os dois n�meros: ");
    scanf("%f %f", &num1, &num2);

    if (operador == '+') {
        resultado = num1 + num2;
    } else if (operador == '-') {
        resultado = num1 - num2;
    } else if (operador == '*') {
        resultado = num1 * num2;
    } else if (operador == '/') {

        if (num2 != 0) {
            resultado = num1 / num2;
        } else {
            printf("Erro: Divis�o por zero!\n");
            return 1;
        }
    } else {
        printf("Operador inv�lido!\n");
        return 1;
    }

    printf("Resultado: %.2f\n", resultado);

    return 0;
}
