/*
 * Nome do aluno: Evelyn
 * Número do exercício: 27
 * Descrição: Declara e lê variáveis int, double, char e string, exibindo-as em seguida.
 * Data de criação: 23/09/2026
 */

#include <stdio.h>

int main(void)
{
    int inteiro;
    double decimal;
    char caractere;
    char texto[100];

    printf("Digite um numero inteiro: ");
    if (scanf("%d", &inteiro) != 1) { printf("Entrada invalida.\n"); return 1; }

    printf("Digite um numero decimal: ");
    if (scanf("%lf", &decimal) != 1) { printf("Entrada invalida.\n"); return 1; }

    printf("Digite um caractere: ");
    if (scanf(" %c", &caractere) != 1) { printf("Entrada invalida.\n"); return 1; }

    printf("Digite uma frase: ");
    /* " %99[^\n]" ignora espaços iniciais, lê até o fim da linha e limita a 99 caracteres */
    if (scanf(" %99[^\n]", texto) != 1) { printf("Entrada invalida.\n"); return 1; }

    printf("\nInteiro  : %d\n", inteiro);
    printf("Decimal  : %.4f\n", decimal);
    printf("Caractere: %c\n", caractere);
    printf("String   : %s\n", texto);
    return 0;
}
