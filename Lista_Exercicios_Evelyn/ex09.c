/*
 * Nome do aluno: Evelyn
 * Número do exercício: 09
 * Descrição: Desenha um quadrado de asteriscos e abstrai a lógica na função desenhaQuadrado(int lado).
 * Data de criação: 23/09/2026
 */

#include <stdio.h>

/* Desenha um quadrado cheio de asteriscos com o lado informado */
void desenhaQuadrado(int lado)
{
    for (int linha = 0; linha < lado; linha++) {
        for (int coluna = 0; coluna < lado; coluna++) {
            printf("* ");
        }
        printf("\n");
    }
}

int main(void)
{
    int lado;

    printf("Tamanho do lado (1 a 50): ");
    if (scanf("%d", &lado) != 1 || lado < 1 || lado > 50) {
        printf("Lado invalido.\n");
        return 1;
    }
    desenhaQuadrado(lado);
    return 0;
}
