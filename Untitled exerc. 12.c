#include <stdio.h>

int main() {
    int x;

    printf("Digite um numero: ");
    scanf("%d", &x);

    for (int cont = 7; cont <= x * 200; cont += 7) {
        printf("%d ", cont);
    }
    printf("\n");

    return 0;
}
