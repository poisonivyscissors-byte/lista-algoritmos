/*
 * Nome do aluno: Evelyn
 * Número do exercício: 30
 * Descrição: Lê dois inteiros e calcula a divisão real usando cast para float.
 * Data de criação: 23/09/2026
 */

#include <stdio.h>

int main(void)
{
    int a, b;

    printf("Digite dois numeros inteiros: ");
    if (scanf("%d %d", &a, &b) != 2) {
        printf("Entrada invalida.\n");
        return 1;
    }
    if (b == 0) {
        printf("Erro: divisao por zero.\n");
        return 1;
    }

    printf("Divisao inteira: %d / %d = %d\n", a, b, a / b);            /* trunca */
    printf("Divisao real   : %d / %d = %.2f\n", a, b, (float)a / b);   /* cast */
    return 0;
}
