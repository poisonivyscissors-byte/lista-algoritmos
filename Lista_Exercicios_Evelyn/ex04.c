/*
 * Nome do aluno: Evelyn
 * Número do exercício: 04
 * Descrição: Simula uma fila de banco: pergunta quantas pessoas há e chama cada senha.
 * Data de criação: 23/09/2026
 */

#include <stdio.h>

int main(void)
{
    int pessoas;

    printf("Quantas pessoas estao na fila? ");
    if (scanf("%d", &pessoas) != 1 || pessoas < 0) {
        printf("Entrada invalida.\n");
        return 1;
    }

    if (pessoas == 0) {
        printf("Fila vazia. Nenhuma senha a chamar.\n");
        return 0;
    }

    /* Repetição: uma chamada para cada pessoa da fila */
    for (int senha = 1; senha <= pessoas; senha++) {
        printf("Senha %d\n", senha);
    }
    printf("Fila encerrada.\n");
    return 0;
}
