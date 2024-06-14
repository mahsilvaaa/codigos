#include <stdio.h>

int main() {
    int numero;
    printf("Digite um numero entre 2 e 9: ");
    scanf("%d", &numero);

    for (int i = 0; i <= 300; i += numero) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}
