#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numsec, palpite, tentativas = 0;
    numsec = rand() % 100 + 1;
    printf("Bem-vindo ao Jogo de Adivinha��o!\n");
    while (1) {
        printf("Digite seu palpite (entre 1 e 100): ");
        scanf("%d", &palpite);
        tentativas++;
        if (palpite == numsec) {
            printf("Parab�ns! Voc� acertou o n�mero em %d tentativas.\n", tentativas);
            break;
        }
        printf("Palpite %s! Tente novamente.\n", palpite > numsec ? "muito alto" : "muito baixo");
    }
    return 0;
}
