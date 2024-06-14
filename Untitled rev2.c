#include <stdio.h>

int main() {
int cont, num, soma=0;

    for(cont=1; cont<=4; cont=cont+1){
        printf ("digite o seu numero: ");
        scanf ("%d", &num);
        soma = soma + num;

        printf ("%d", soma);
    }

    return 0;
}
