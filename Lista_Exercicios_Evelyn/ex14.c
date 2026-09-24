/*
 * Nome do aluno: Evelyn
 * Número do exercício: 14
 * Descrição: Calcula A && B, A || B, !A e A ^ B para duas variáveis booleanas (0 ou 1).
 * Data de criação: 23/09/2026
 */

#include <stdio.h>

int main(void)
{
    int a, b;

    printf("Digite A e B (0 ou 1): ");
    if (scanf("%d %d", &a, &b) != 2 ||
        (a != 0 && a != 1) || (b != 0 && b != 1)) {
        printf("Entrada invalida: use apenas 0 ou 1.\n");
        return 1;
    }

    printf("A && B = %d\n", a && b);
    printf("A || B = %d\n", a || b);
    printf("!A     = %d\n", !a);
    printf("A ^ B  = %d (ou exclusivo)\n", a ^ b);
    return 0;
}
