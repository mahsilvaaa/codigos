#include <stdio.h>

int main() {
    int soma = 0;
    int nota;
    float media;


    for (int cont = 1; cont <= 6; cont++) {
        printf("Digite a nota %d: ", cont);
        scanf("%d", &nota);
        soma += nota;
    }

    media = soma / 6.0;
    printf("A media das notas e: %.2f\n", media);

    if (media >= 6.0) {
        printf("O aluno esta aprovado.\n");
    } else {
        printf("O aluno esta reprovado.\n");
    }
}


