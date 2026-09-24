/*
 * Nome do aluno: Evelyn
 * Número do exercício: 17
 * Descrição: Calcula o salário líquido aplicando desconto de 10% de INSS sobre o bruto.
 * Data de criação: 23/09/2026
 */

#include <stdio.h>

#define ALIQUOTA_INSS 0.10

int main(void)
{
    double bruto;

    printf("Salario bruto: R$ ");
    if (scanf("%lf", &bruto) != 1 || bruto < 0) {
        printf("Valor invalido.\n");
        return 1;
    }

    double inss = bruto * ALIQUOTA_INSS;
    double liquido = bruto - inss;

    printf("Desconto INSS (10%%): R$ %.2f\n", inss);
    printf("Salario liquido    : R$ %.2f\n", liquido);
    return 0;
}
