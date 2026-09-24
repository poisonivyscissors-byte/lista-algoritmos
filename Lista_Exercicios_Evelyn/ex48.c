/*
 * Nome do aluno: Evelyn
 * Número do exercício: 48
 * Descrição: Calcula as raízes de uma equação do 2º grau tratando delta negativo, zero e positivo.
 * Data de criação: 23/09/2026
 */

/* Compilar com:  gcc ex48.c -o ex48 -lm */
#include <stdio.h>
#include <math.h>

int main(void)
{
    double a, b, c;

    printf("Digite os coeficientes a, b e c: ");
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3) {
        printf("Entrada invalida.\n");
        return 1;
    }
    if (a == 0) {
        printf("Nao e uma equacao do 2o grau (a = 0).\n");
        return 1;
    }

    double delta = b * b - 4 * a * c;

    if (delta < 0) {
        printf("Delta = %.2f: nao existem raizes reais.\n", delta);
    } else if (delta == 0) {
        double x = -b / (2 * a);
        printf("Delta = 0: uma raiz real: x = %.4f\n", x);
    } else {
        double x1 = (-b + sqrt(delta)) / (2 * a);
        double x2 = (-b - sqrt(delta)) / (2 * a);
        printf("Delta = %.2f: duas raizes reais: x1 = %.4f e x2 = %.4f\n",
               delta, x1, x2);
    }
    return 0;
}
