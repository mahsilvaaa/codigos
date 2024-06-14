
#include <stdio.h>

float main (){
    float cont, fatorial, n;
        printf("Digite um numero: ");
        scanf("%f",&n);

        float cont, fatorial;
         for(cont = &n; cont >= 1; cont--){
        fatorial = fatorial * cont;
    }
    printf ("%f", fatorial);

        return 0;
