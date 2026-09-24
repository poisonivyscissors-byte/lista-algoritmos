/*
 * Nome do aluno: Evelyn
 * Número do exercício: 51
 * Descrição: Exibe o dia da semana (1 a 7) com switch-case, validando números fora do intervalo.
 * Data de criação: 23/09/2026
 */

#include <stdio.h>

int main(void)
{
    int dia;

    printf("Digite o numero do dia da semana (1 a 7): ");
    if (scanf("%d", &dia) != 1) {
        printf("Entrada invalida.\n");
        return 1;
    }

    switch (dia) {
        case 1: printf("Domingo\n");       break;
        case 2: printf("Segunda-feira\n"); break;
        case 3: printf("Terca-feira\n");   break;
        case 4: printf("Quarta-feira\n");  break;
        case 5: printf("Quinta-feira\n");  break;
        case 6: printf("Sexta-feira\n");   break;
        case 7: printf("Sabado\n");        break;
        default:
            printf("Numero invalido: use um valor de 1 a 7.\n");
            return 1;
    }
    return 0;
}
