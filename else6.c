#include <stdio.h>
#include<math.h>

int main() {
    float saque, dep, cons, banco, saldo = 1000;
    printf("Ola seja bem-vindo ao Banco Pan, para saque digite 1, para depositar digite 2 e para consultar saldo digite 3: ");
    scanf("%f", &banco);

    if (banco==1){
        printf("Digite o valor que deseja sacar R$ ");
        scanf("%f", &saque);
        saldo = saldo - saque;
        printf("Saldo R$ %f", saldo);
    }
    else if (banco==2) {
        printf("Digite o valor que deseja depositar R$ ");
        scanf("%f", &dep);
        saldo = saldo + dep;
        printf("Saldo R$ %f", saldo);
    }

    else if (banco==3) {
        printf("Seu saldo e R$ %.2f\n", saldo);
    }
    }
