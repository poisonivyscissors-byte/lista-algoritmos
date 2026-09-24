/*
 * Nome do aluno: Evelyn
 * Número do exercício: 54
 * Descrição: Lê duas strings e verifica se são iguais com strcmp().
 * Data de criação: 23/09/2026
 */

#include <stdio.h>
#include <string.h>

int main(void)
{
    char s1[100], s2[100];

    printf("Primeira string: ");
    if (fgets(s1, sizeof(s1), stdin) == NULL) { printf("Entrada invalida.\n"); return 1; }
    s1[strcspn(s1, "\n")] = '\0';

    printf("Segunda string : ");
    if (fgets(s2, sizeof(s2), stdin) == NULL) { printf("Entrada invalida.\n"); return 1; }
    s2[strcspn(s2, "\n")] = '\0';

    /* strcmp retorna 0 quando as strings são idênticas */
    if (strcmp(s1, s2) == 0) {
        printf("As strings sao IGUAIS.\n");
    } else {
        printf("As strings sao DIFERENTES.\n");
    }
    return 0;
}
