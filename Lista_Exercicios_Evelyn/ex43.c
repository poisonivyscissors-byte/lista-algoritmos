/*
 * Nome do aluno: Evelyn
 * Número do exercício: 43
 * Descrição: Calculadora simples com operação lida como caractere e switch-case.
 * Data de criação: 23/09/2026
 */

#include <stdio.h>

int main(void)
{
    double a, b;
    char operacao;

    printf("Digite o primeiro numero: ");
    if (scanf("%lf", &a) != 1) { printf("Entrada invalida.\n"); return 1; }
    printf("Digite o segundo numero: ");
    if (scanf("%lf", &b) != 1) { printf("Entrada invalida.\n"); return 1; }
    printf("Operacao (+, -, *, /): ");
    if (scanf(" %c", &operacao) != 1) { printf("Entrada invalida.\n"); return 1; }

    switch (operacao) {
        case '+':
            printf("%.2f + %.2f = %.2f\n", a, b, a + b);
            break;
        case '-':
            printf("%.2f - %.2f = %.2f\n", a, b, a - b);
            break;
        case '*':
            printf("%.2f * %.2f = %.2f\n", a, b, a * b);
            break;
        case '/':
            if (b == 0) {
                printf("Erro: divisao por zero.\n");
                return 1;
            }
            printf("%.2f / %.2f = %.2f\n", a, b, a / b);
            break;
        default:
            printf("Operacao invalida.\n");
            return 1;
    }
    return 0;
}
