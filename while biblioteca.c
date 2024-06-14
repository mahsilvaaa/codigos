#include <stdio.h>

int main() {
    int usuario, livros;
    char continuar;

    do {
        printf("Tipo de usuario (1 - aluno, 2 - professor, 3 - pesquisador ou 4 - visitante): ");
        scanf("%d", &usuario);

        switch (usuario) {
            case 1:
                printf("Voce pode tirar ate 3 livros por emprestimo.\n");
                break;
            case 2:
                printf("Voce pode tirar ate 5 livros por emprestimo.\n");
                break;
            case 3:
                printf("Voce pode tirar ate 10 livros por emprestimo.\n");
                break;
            case 4:
                printf("Voce pode tirar ate 1 livro por emprestimo.\n");
                break;
            default:
                printf("Tipo de usuario invalido.\n");
                continue;
        }

        do {
            printf("Quantidade de livros para seu emprestimo: ");
            scanf("%d", &livros);

            if ((livros > 3 && usuario == 1) || (livros > 5 && (usuario == 2 || usuario == 3)) || (livros > 1 && usuario == 4)) {
                printf("Voce selecionou emprestar %d livros, mas o limite e %d.\n", livros, (usuario == 1 ? 3 : (usuario == 2 || usuario == 3 ? 5 : 1)));
                printf("Emprestimo negado.\n");
            } else {
                printf("Emprestimo aprovado.\n");
                break;
            }
        } while (1);

        printf("Deseja pedir outro emprestimo? (s/n): ");
        scanf(" %c", &continuar);
    } while (continuar == 's' || continuar == 'S');

    printf("Obrigado por usar nosso sistema de emprestimo!\n");

    return 0;
}
