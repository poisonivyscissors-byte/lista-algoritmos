/*
 * Nome do aluno: Evelyn
 * Número do exercício: 18
 * Descrição: Verifica, com uma única expressão lógica, se um número está no intervalo [10, 20].
 * Data de criação: 23/09/2026
 */

#include <stdio.h>

int main(void)
{
    double n;

    printf("Digite um numero: ");
    if (scanf("%lf", &n) != 1) {
        printf("Entrada invalida.\n");
        return 1;
    }

    /* Única expressão lógica: n >= 10 E n <= 20 */
    if (n >= 10 && n <= 20) {
        printf("%.2f esta no intervalo [10, 20].\n", n);
    } else {
        printf("%.2f esta FORA do intervalo [10, 20].\n", n);
    }
    return 0;
}
