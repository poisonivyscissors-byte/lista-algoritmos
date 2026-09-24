/*
 * Nome do aluno: Evelyn
 * Número do exercício: 55
 * Descrição: Menu de operações matemáticas (soma, subtração, multiplicação, divisão) com switch-case.
 * Data de criação: 23/09/2026
 */

#include <stdio.h>

int main(void)
{
    int opcao;
    double a, b;

    printf("===== MENU =====\n");
    printf("1 - Soma\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    printf("Escolha uma opcao: ");
    if (scanf("%d", &opcao) != 1 || opcao < 1 || opcao > 4) {
        printf("Opcao invalida.\n");
        return 1;
    }

    printf("Digite dois numeros: ");
    if (scanf("%lf %lf", &a, &b) != 2) {
        printf("Entrada invalida.\n");
        return 1;
    }

    switch (opcao) {
        case 1:
            printf("Resultado: %.2f\n", a + b);
            break;
        case 2:
            printf("Resultado: %.2f\n", a - b);
            break;
        case 3:
            printf("Resultado: %.2f\n", a * b);
            break;
        case 4:
            if (b == 0) {
                printf("Erro: divisao por zero.\n");
                return 1;
            }
            printf("Resultado: %.2f\n", a / b);
            break;
    }
    return 0;
}
