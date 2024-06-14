#include <stdio.h>

int main() {
    float soma = 0;
    float nota;

    for (int cont = 1; cont <= 6; cont++) {
        printf("Digite a nota: ");
        scanf("%f", &nota);
        soma += nota;
    }
    printf("A media das notas é: %.2f\n", soma / 6);

    return 0;
}
