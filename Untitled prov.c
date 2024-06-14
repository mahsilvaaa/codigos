#include <stdio.h>
float main (){

float media, nota1, nota2, nota3, nota4;

printf ("digite a nota: ");
scanf ("%d", &nota1);

printf ("digite a nota: ");
scanf ("%d", &nota2);

printf ("digite a nota: ");
scanf ("%d", &nota3);

printf ("digite a nota: ");
scanf ("%d", &nota4);

media = (nota1+nota2+nota3+nota4) /4;

if (media  >=6.5){
printf ("você está aprovado!");

}

if (media <=6.5) {
printf ("você está reprovado.");
}
return 0;







}
