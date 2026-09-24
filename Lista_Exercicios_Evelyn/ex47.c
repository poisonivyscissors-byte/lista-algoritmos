/*
 * Nome do aluno: Evelyn
 * Número do exercício: 47
 * Descrição: Calcula o novo salário com aumento de 20%, 10% ou 5% conforme a faixa salarial.
 * Data de criação: 23/09/2026
 */

#include <stdio.h>

int main(void)
{
    double salario, percentual;

    printf("Salario atual: R$ ");
    if (scanf("%lf", &salario) != 1 || salario < 0) {
        printf("Salario invalido.\n");
        return 1;
    }

    if (salario < 1000) {
        percentual = 20;
    } else if (salario <= 2000) {
        percentual = 10;
    } else {
        percentual = 5;
    }

    double novoSalario = salario * (1 + percentual / 100.0);
    printf("Aumento de %.0f%%\n", percentual);
    printf("Novo salario: R$ %.2f\n", novoSalario);
    return 0;
}
