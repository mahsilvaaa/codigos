#include <stdio.h>

int main() {
    int idade;


    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade < 0) {
        printf("Idade inv�lida!\n");
    } else if (idade < 12) {
        printf("Voc� � uma crian�a.\n");
    } else if (idade < 18) {
        printf("Voc� � um adolescente.\n");
    } else if (idade < 60) {
        printf("Voc� � um adulto.\n");
    } else {
        printf("Voc� � um idoso.\n");
    }

    return 0;
}
