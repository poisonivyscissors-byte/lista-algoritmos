/*
 * Nome do aluno: Evelyn
 * Número do exercício: 40
 * Descrição: Usa operadores bit a bit (&, |, ^, ~, <<, >>), dobrando e dividindo um número por 2.
 * Data de criação: 23/09/2026
 */

#include <stdio.h>

int main(void)
{
    int n, mascara;

    printf("Digite um inteiro entre 0 e 1000000000: ");
    if (scanf("%d", &n) != 1 || n < 0 || n > 1000000000) {
        printf("Entrada invalida.\n");
        return 1;
    }
    printf("Digite um segundo inteiro (mascara) entre 0 e 1000000000: ");
    if (scanf("%d", &mascara) != 1 || mascara < 0 || mascara > 1000000000) {
        printf("Entrada invalida.\n");
        return 1;
    }

    printf("n & mascara  = %d\n", n & mascara);   /* E bit a bit */
    printf("n | mascara  = %d\n", n | mascara);   /* OU bit a bit */
    printf("n ^ mascara  = %d\n", n ^ mascara);   /* XOR bit a bit */
    printf("~n           = %d\n", ~n);            /* complemento (inverte os bits) */

    /* a) deslocar 1 bit à esquerda equivale a multiplicar por 2 */
    printf("a) n << 1    = %d (dobro)\n", n << 1);
    /* b) deslocar 1 bit à direita equivale a dividir por 2 (divisão inteira) */
    printf("b) n >> 1    = %d (metade)\n", n >> 1);
    return 0;
}
