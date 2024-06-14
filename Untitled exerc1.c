#include <stdio.h>

int main() {
    char operador;
    float num1, num2, resultado;

    printf("Digite a operação desejada (+, -, *, /): ");
    scanf("%c", &operador);

    printf("Digite os dois numeros: ");
    scanf("%f %f", &num1, &num2);

    if (operador == '+') {
        resultado = num1 + num2;
    } else if (operador == '-') {
        resultado = num1 - num2;
    } else if (operador == '*') {
        resultado = num1 * num2;
    } else if (operador == '/') {
        resultado = num1 / num2;

    printf("Resultado: %.2f\n", resultado);

    return 0;
}

}
