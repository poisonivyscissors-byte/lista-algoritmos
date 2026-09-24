/*
 * Nome do aluno: Evelyn
 * Número do exercício: 33
 * Descrição: Lê 4 notas (float), calcula a média e exibe com duas casas decimais.
 * Data de criação: 23/09/2026
 */

#include <stdio.h>

#define QTD_NOTAS 4

int main(void)
{
    float nota, soma = 0.0f;

    for (int i = 1; i <= QTD_NOTAS; i++) {
        printf("Nota %d: ", i);
        if (scanf("%f", &nota) != 1 || nota < 0 || nota > 10) {
            printf("Nota invalida (use 0 a 10).\n");
            return 1;
        }
        soma += nota;
    }

    printf("Media = %.2f\n", soma / QTD_NOTAS);
    return 0;
}
