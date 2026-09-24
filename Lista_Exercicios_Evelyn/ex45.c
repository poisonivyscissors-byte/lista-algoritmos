/*
 * Nome do aluno: Evelyn
 * Número do exercício: 45
 * Descrição: Calcula c = a++ + --b com a = 5 e b = 10 e mostra os valores finais.
 * Data de criação: 23/09/2026
 */

/*
 * ANÁLISE (a = 5, b = 10):
 *   a++  -> pós-incremento: usa 5 na soma e depois a vira 6;
 *   --b  -> pré-decremento: b vira 9 antes e usa 9 na soma;
 *   c = 5 + 9 = 14.
 * VALORES FINAIS: a = 6, b = 9, c = 14
 */
#include <stdio.h>

int main(void)
{
    int a = 5, b = 10;
    int c = a++ + --b;

    printf("a = %d, b = %d, c = %d\n", a, b, c);
    return 0;
}
