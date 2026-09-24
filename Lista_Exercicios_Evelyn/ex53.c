/*
 * Nome do aluno: Evelyn
 * Número do exercício: 53
 * Descrição: Verifica se um ano é bissexto.
 * Data de criação: 23/09/2026
 */

#include <stdio.h>

int main(void)
{
    int ano;

    printf("Digite um ano: ");
    if (scanf("%d", &ano) != 1 || ano < 1) {
        printf("Ano invalido.\n");
        return 1;
    }

    /* divisível por 400, ou divisível por 4 e não por 100 */
    if (ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0)) {
        printf("%d e um ano BISSEXTO.\n", ano);
    } else {
        printf("%d NAO e um ano bissexto.\n", ano);
    }
    return 0;
}
