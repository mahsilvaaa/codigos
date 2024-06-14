#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numsec, palpite, tentativas = 0;
    numsec = rand() % 100 + 1;
    printf("Bem-vindo ao Jogo de Adivinhação!\n");
    while (1) {
        printf("Digite seu palpite (entre 1 e 100): ");
        scanf("%d", &palpite);
        tentativas++;
        if (palpite == numsec) {
            printf("Parabéns! Você acertou o número em %d tentativas.\n", tentativas);
            break;
        }
        printf("Palpite %s! Tente novamente.\n", palpite > numsec ? "muito alto" : "muito baixo");
    }
    return 0;
}
