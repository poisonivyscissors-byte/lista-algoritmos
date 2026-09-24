/*
 * Nome do aluno: Evelyn
 * Número do exercício: 35
 * Descrição: Exibe o tamanho em bytes de int, float, double, char e ponteiro para int com sizeof.
 * Data de criação: 23/09/2026
 */

#include <stdio.h>

int main(void)
{
    printf("int      : %zu bytes\n", sizeof(int));
    printf("float    : %zu bytes\n", sizeof(float));
    printf("double   : %zu bytes\n", sizeof(double));
    printf("char     : %zu bytes\n", sizeof(char));
    printf("int *    : %zu bytes\n", sizeof(int *));
    return 0;
}
