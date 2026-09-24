/*
 * Nome do aluno: Evelyn
 * Número do exercício: 39
 * Descrição: Calcula manualmente e verifica int x = 10 + 5 * 2 / 3 - 1;.
 * Data de criação: 23/09/2026
 */

/*
 * CÁLCULO MANUAL (precedência: * e / antes de + e -, da esquerda p/ direita;
 * todos os operandos são int, então a divisão é INTEIRA):
 *   10 + 5 * 2 / 3 - 1
 *   5 * 2 = 10
 *   10 / 3 = 3      (divisão inteira, descarta 0.333...)
 *   10 + 3 - 1 = 12
 * RESULTADO: x = 12
 */
#include <stdio.h>

int main(void)
{
    int x = 10 + 5 * 2 / 3 - 1;

    printf("x = %d\n", x);   /* imprime 12 */
    return 0;
}
