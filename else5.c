#include <stdio.h>
#include<math.h>
#include <string.h>

int main() {
    char str1[100];
    float notaa,nota1a, nota2a, mediaa, nota1f, nota2f, mediaf, nota1q, nota2q, mediaq;
    printf("As materia sao: Arte, Fisica e Quimica.\n");

      printf("Digite a nota 1 em Arte: ");
      scanf("%f", &nota1a);
      printf("Digite a nota 2 e Arte: ");
      scanf("%f", &nota2a);

      mediaa = (nota1a+nota2a)/2;

      printf("Media em Arte: %f\n", mediaa);

       printf("Digite a nota 1 em Fisica: ");
      scanf("%f", &nota1f);
      printf("Digite a nota 2 e Fisica: ");
      scanf("%f", &nota2f);

      mediaf = (nota1f+nota2f)/2;

      printf("Media em Fisica: %f\n", mediaf);

       printf("Digite a nota 1 em Quimica: ");
      scanf("%f", &nota1q);
      printf("Digite a nota 2 e Quimica: ");
      scanf("%f", &nota2q);

      mediaq = (nota1a+nota2a)/2;

      printf("Media em Quimica: %f\n", mediaq);

   if (mediaa<=6) {
        printf("Reprovado em Arte.\n");
   }
   else {
    printf("Aprovado em Arte.\n");
   }

   if (mediaf<=6) {
        printf("Reprovado em Fisica.\n");
   }
   else {
    printf("Aprovado em Fisica.\n");
   }

   if (mediaq<=6) {
        printf("Reprovado em Quimica.\n");
   }
   else {
    printf("Aprovado em Quimica.\n");
   }
}
