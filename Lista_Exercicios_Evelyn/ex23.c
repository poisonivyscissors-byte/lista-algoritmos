/*
 * Nome do aluno: Evelyn
 * Número do exercício: 23
 * Descrição: Mostra a saída de um programa com a, a++ e ++a e explica o resultado.
 * Data de criação: 23/09/2026
 */

/*
 * SAÍDA DO PROGRAMA:
 *     5
 *     5
 *     7
 *
 * EXPLICAÇÃO:
 *   1) printf("%d\n", a);    -> a vale 5, imprime 5.
 *   2) printf("%d\n", a++);  -> PÓS-incremento: usa o valor atual (5) na
 *                               expressão e só depois incrementa; imprime 5
 *                               e a passa a valer 6.
 *   3) printf("%d\n", ++a);  -> PRÉ-incremento: incrementa antes de usar
 *                               (a = 7) e imprime 7.
 */
#include <stdio.h>

int main(void)
{
    int a = 5;
    printf("%d\n", a);    /* 5 */
    printf("%d\n", a++);  /* 5 (a vira 6 depois) */
    printf("%d\n", ++a);  /* 7 (a vira 7 antes) */
    return 0;
}
