/*
 * Nome do aluno: Evelyn
 * Número do exercício: 37
 * Descrição: Calcula x = (-b + sqrt(b² - 4ac)) / (2a) a partir de a, b e c.
 * Data de criação: 23/09/2026
 */

/* Compilar com a biblioteca matemática:  gcc ex37.c -o ex37 -lm */
#include <stdio.h>
#include <math.h>

int main(void)
{
    double a, b, c;

    printf("Digite a, b e c: ");
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3) {
        printf("Entrada invalida.\n");
        return 1;
    }
    if (a == 0) {
        printf("Erro: 'a' nao pode ser zero (divisao por zero).\n");
        return 1;
    }

    double delta = b * b - 4 * a * c;
    if (delta < 0) {
        printf("Erro: delta negativo (%.2f), nao existe raiz real.\n", delta);
        return 1;
    }

    double x = (-b + sqrt(delta)) / (2 * a);
    printf("x = %.4f\n", x);
    return 0;
}
