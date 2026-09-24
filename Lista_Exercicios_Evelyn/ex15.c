/*
 * Nome do aluno: Evelyn
 * Número do exercício: 15
 * Descrição: Lê um número e informa se é par ou ímpar, validando que a entrada seja um inteiro.
 * Data de criação: 23/09/2026
 */

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <ctype.h>

int main(void)
{
    char linha[64];
    char *fim;
    long valor;

    printf("Digite um numero inteiro: ");
    if (fgets(linha, sizeof(linha), stdin) == NULL) {
        printf("Nenhuma entrada lida.\n");
        return 1;
    }

    /* strtol converte o texto e informa onde parou (fim) */
    errno = 0;
    valor = strtol(linha, &fim, 10);
    while (isspace((unsigned char)*fim)) fim++; /* ignora espaços/\n finais */

    /* Inválido se: nada convertido, sobrou texto (ex.: "3.5", "abc") ou estourou */
    if (fim == linha || *fim != '\0' || errno == ERANGE) {
        printf("Entrada invalida: digite apenas um numero inteiro.\n");
        return 1;
    }

    if (valor % 2 == 0) {
        printf("%ld e PAR.\n", valor);
    } else {
        printf("%ld e IMPAR.\n", valor);
    }
    return 0;
}
