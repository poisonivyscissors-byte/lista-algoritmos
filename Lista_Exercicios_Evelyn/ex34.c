/*
 * Nome do aluno: Evelyn
 * Número do exercício: 34
 * Descrição: Declara a constante PI (3.14159) e calcula a área de um círculo.
 * Data de criação: 23/09/2026
 */

#include <stdio.h>

int main(void)
{
    const double PI = 3.14159;   /* constante: não pode ser alterada */
    double raio;

    printf("Raio do circulo: ");
    if (scanf("%lf", &raio) != 1 || raio < 0) {
        printf("Raio invalido.\n");
        return 1;
    }

    printf("Area = %.2f\n", PI * raio * raio);
    return 0;
}
