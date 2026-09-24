/*
 * Nome do aluno: Evelyn
 * Número do exercício: 46
 * Descrição: Converte temperatura de Fahrenheit para Celsius: C = (F - 32) * 5/9.
 * Data de criação: 23/09/2026
 */

#include <stdio.h>

int main(void)
{
    double fahrenheit, celsius;

    printf("Temperatura em Fahrenheit: ");
    if (scanf("%lf", &fahrenheit) != 1) {
        printf("Entrada invalida.\n");
        return 1;
    }

    celsius = fahrenheit;   /* atribuição simples */
    celsius -= 32;          /* atribuição composta: C = F - 32 */
    celsius *= 5.0 / 9.0;   /* atribuição composta: C = C * 5/9 (usa 5.0 para não truncar) */

    printf("%.2f F = %.2f C\n", fahrenheit, celsius);
    return 0;
}
