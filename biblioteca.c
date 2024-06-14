#include <stdio.h>

int main() {
    int menu;
    long long int cpf;
    int codigoLivro;


    do {
        printf("Seja bem vindo a nossa biblioteca!!\n");
        printf("Aqui esta o nosso menu:\n");
        printf("1 - lista de livros.\n");
        printf("2 - Nosso contato.\n");
        printf("3 - Nossos horarios de funcionamento.\n");
        printf("4 - Documentos necessarios para cadastro.\n");
        printf("O que deseja saber: ");
        scanf("%d", &menu);

        switch (menu) {
            case 1:
                printf("Aqui está a lista de livros disponiveis.\n");
                printf("1 - O Código Da Vinci.\n");
                printf("2 - E Assim Que Acaba.\n");
                printf("3 - Verity.\n");
                break;

            case 2:
                printf("Contato da biblioteca:\n");
                printf("Telefone: 14 98765-4321\n");
                printf("E-mail: bibliotecadosol@gmail.com\n");
                break;

            case 3:
                printf("Segunda a sexta estamos disponíveis das 07:00h as 13:00h.\n");
                break;

            case 4:
                printf("Os documentos necessários para fazer empréstimos são somente o CPF.\n");
                break;

            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    } while (menu < 1 || menu > 4);

    printf("Digite o CPF do cliente: ");
    scanf("%d", &cpf);

    printf("Digite o código do livro: ");
    scanf("%d", &codigoLivro);

    printf ("Emprestimo concluido. \n");
    printf ("CPF: %d \n", cpf);
    printf ("Codigo d livro do emprestimo: %d \n", codigoLivro);



    return 0;
}
