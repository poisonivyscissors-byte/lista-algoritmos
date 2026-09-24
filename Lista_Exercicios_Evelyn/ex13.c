/*
 * Nome do aluno: Evelyn
 * Número do exercício: 13
 * Descrição: Lê três números e verifica se estão em ordem crescente ou decrescente (operadores lógicos).
 * Data de criação: 23/09/2026
 */

#include <stdio.h>

int main(void)
{
    double a, b, c;

    printf("Digite tres numeros: ");
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3) {
        printf("Entrada invalida.\n");
        return 1;
    }

    if (a < b && b < c) {
        printf("Os numeros estao em ordem CRESCENTE.\n");
    } else if (a > b && b > c) {
        printf("Os numeros estao em ordem DECRESCENTE.\n");
    } else {
        printf("Os numeros NAO estao em ordem crescente nem decrescente.\n");
    }
    return 0;
}
