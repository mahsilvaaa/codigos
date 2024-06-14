#include <stdio.h>

int main() {
   int cont, resto;

   for (cont=0; cont<=60; cont++) {
   resto=cont%6;
   if(resto==0){
       printf("%d \n", cont);
   }
   }

return 0;

}
