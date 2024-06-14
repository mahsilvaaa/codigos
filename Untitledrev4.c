#include <stdio.h>

int main(){
int cont, inicio, fim;

printf ("determine o inicio: ");
scanf ("%d", &inicio);

printf ("determine o fim: ");
scanf ("%d", &fim);

for (cont=inicio; cont>=fim ; cont=cont -1 ){
   printf("%d \n" , cont);

   }

   return 0;
 }
