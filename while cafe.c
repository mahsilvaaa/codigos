#include <stdio.h>

int main() {
    char continuar;

    do {
        int cafe;
        char tamanho;
        float preco, resultado;

        do {
            printf("Escolha o cafe (1 - cafe expresso, 2 - cappuccino, 3 - latte): ");
            scanf("%d", &cafe);

            switch (cafe) {
                case 1:
                    preco = 3.00;
                    printf("O valor do cafe expresso e R$%.2f.\n", preco);
                    break;
                case 2:
                    preco = 4.00;
                    printf("O valor do cafe cappuccino e R$%.2f.\n", preco);
                    break;
                case 3:
                    preco = 5.00;
                    printf("O valor do cafe latte e R$%.2f.\n", preco);
                    break;
                default:
                    printf("Opcao invalida.\n");
            }
        } while (cafe < 1 || cafe > 3);

        do {
            printf("Escolha o tamanho do copo (P - pequeno, M - medio, G - grande): ");
            scanf(" %c", &tamanho);

            switch (tamanho) {
                case 'P':
                case 'p':
                    resultado = preco * 1;
                    printf("O valor total e R$%.2f.\n", resultado);
                    break;
                case 'M':
                case 'm':
                    resultado = preco * 2;
                    printf("O valor total e R$%.2f.\n", resultado);
                    break;
                case 'G':
                case 'g':
                    resultado = preco * 3;
                    printf("O valor total e R$%.2f.\n", resultado);
                    break;
                default:
                    printf("Opcao de tamanho invalida.\n");
            }
        } while (tamanho != 'P' && tamanho != 'p' && tamanho != 'M' && tamanho != 'm' && tamanho != 'G' && tamanho != 'g');

        printf("Deseja pedir outro cafe? (s/n): ");
        scanf(" %c", &continuar);
    } while (continuar == 's' || continuar == 'S');

    printf("Obrigado por comprar conosco!\n");

    return 0;
}
