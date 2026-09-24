/*
 * Nome do aluno: Evelyn
 * Número do exercício: 41
 * Descrição: Verifica se um caractere lido é uma letra minúscula.
 * Data de criação: 23/09/2026
 */

#include <stdio.h>

int main(void)
{
    char c;

    printf("Digite um caractere: ");
    if (scanf(" %c", &c) != 1) {
        printf("Entrada invalida.\n");
        return 1;
    }

    if (c >= 'a' && c <= 'z') {
        printf("'%c' e uma letra minuscula.\n", c);
    } else {
        printf("'%c' NAO e uma letra minuscula.\n", c);
    }
    return 0;
}
