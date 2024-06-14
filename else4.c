#include <stdio.h>
#include <math.h>

int main() {
    int num1, num2, num3;

    printf("Digite o primeiro numero: ");
    scanf("%i", &num1);

    printf("Digite o segundo numero: ");
    scanf("%i", &num2);

    printf("Digite o terceiro numero: ");
    scanf("%i", &num3);

    if (num1>num2>num3){
        printf("%i", num1);
    }
    else if (num1<num2<num3) {
        printf("%i", num3);
        }

        else if (num1<num2>num3) {
            printf("%i", num2);
        }
        }
