/*
 * Nome do aluno: Evelyn
 * Número do exercício: 19
 * Descrição: Valida uma data (dia, mês, ano) considerando anos bissextos.
 * Data de criação: 23/09/2026
 */

#include <stdio.h>

/* Ano bissexto: divisível por 400, ou divisível por 4 e não por 100 */
static int ehBissexto(int ano)
{
    return (ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0);
}

/* Retorna a quantidade de dias do mês (mês já validado de 1 a 12) */
static int diasNoMes(int mes, int ano)
{
    if (mes == 2) {
        return ehBissexto(ano) ? 29 : 28;
    }
    if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
        return 30;
    }
    return 31;
}

int main(void)
{
    int dia, mes, ano;

    printf("Digite dia, mes e ano (ex.: 29 2 2024): ");
    if (scanf("%d %d %d", &dia, &mes, &ano) != 3) {
        printf("Entrada invalida.\n");
        return 1;
    }

    if (ano >= 1 && mes >= 1 && mes <= 12 &&
        dia >= 1 && dia <= diasNoMes(mes, ano)) {
        printf("%02d/%02d/%04d e uma data VALIDA.\n", dia, mes, ano);
    } else {
        printf("%02d/%02d/%04d e uma data INVALIDA.\n", dia, mes, ano);
    }
    return 0;
}
