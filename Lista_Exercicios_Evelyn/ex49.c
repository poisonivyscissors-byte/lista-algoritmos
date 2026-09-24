/*
 * Nome do aluno: Evelyn
 * Número do exercício: 49
 * Descrição: Converte uma nota de 0 a 100 em conceito (A, B, C, D ou F) com if/else if.
 * Data de criação: 23/09/2026
 */

#include <stdio.h>

int main(void)
{
    double nota;

    printf("Nota (0 a 100): ");
    if (scanf("%lf", &nota) != 1 || nota < 0 || nota > 100) {
        printf("Nota invalida.\n");
        return 1;
    }

    char conceito;
    if (nota >= 90)      conceito = 'A';
    else if (nota >= 80) conceito = 'B';
    else if (nota >= 70) conceito = 'C';
    else if (nota >= 60) conceito = 'D';
    else                 conceito = 'F';

    printf("Conceito: %c\n", conceito);
    return 0;
}
