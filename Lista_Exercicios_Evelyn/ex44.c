/*
 * Nome do aluno: Evelyn
 * Número do exercício: 44
 * Descrição: Avalia e explica a expressão (5 > 3) && (2 == 2) || !(10 < 5).
 * Data de criação: 23/09/2026
 */

/*
 * AVALIAÇÃO PASSO A PASSO:
 *   (5 > 3)   -> 1 (verdadeiro)
 *   (2 == 2)  -> 1
 *   (10 < 5)  -> 0, então !(10 < 5) -> 1
 *   Precedência: && vem antes de ||
 *   (1 && 1) || 1  ->  1 || 1  ->  1
 * SAÍDA: 1
 */
#include <stdio.h>

int main(void)
{
    /* Expressão original: (5 > 3) && (2 == 2) || !(10 < 5)
     * Parênteses extras deixam explícita a precedência (&& antes de ||)
     * e evitam o aviso do compilador; o resultado é idêntico. */
    printf("%d\n", ((5 > 3) && (2 == 2)) || !(10 < 5));
    return 0;
}
