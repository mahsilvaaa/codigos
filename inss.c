#include <stdio.h>

int main() {
    float salario, liquido;
    const float faixas_IR[5] = {1903.98, 2826.65, 3751.05, 4664.68};
    const float aliquotas_IR[5] = {0, 0.075, 0.15, 0.225, 0.275};
    const float faixas_INSS[4] = {1100.0, 2203.48, 3305.22, 6433.57};
    const float aliquotas_INSS[4] = {0.075, 0.09, 0.12, 0.14};

    printf("Digite o salário bruto do funcionário: ");
    scanf("%f", &salario);

    float desconto_INSS = 0;
    for (int i = 0; i < 4; i++) {
        if (salario <= faixas_INSS[i]) {
            desconto_INSS += salario * aliquotas_INSS[i];
            break;
        } else {
            desconto_INSS += faixas_INSS[i] * aliquotas_INSS[i];
            salario -= faixas_INSS[i];
        }
    }

    float desconto_IR = 0;
    salario -= desconto_INSS;
    for (int i = 0; i < 5; i++) {
        if (salario <= faixas_IR[i]) {
            desconto_IR += salario * aliquotas_IR[i];
            break;
        } else {
            desconto_IR += faixas_IR[i] * aliquotas_IR[i];
            salario -= faixas_IR[i];
        }
    }

    liquido = salario - desconto_IR;
    printf("Salário líquido do funcionário: R$%.2f\n", liquido);

    return 0;
}
