/*
 * Nome do aluno: Evelyn
 * Número do exercício: 32
 * Descrição: Troca os valores de duas variáveis com a função trocarValores (passagem por ponteiros).
 * Data de criação: 23/09/2026
 */

#include <stdio.h>

/* Recebe os ENDEREÇOS das variáveis e troca o conteúdo apontado */
void trocarValores(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(void)
{
    int x, y;

    printf("Digite dois numeros inteiros: ");
    if (scanf("%d %d", &x, &y) != 2) {
        printf("Entrada invalida.\n");
        return 1;
    }

    printf("Antes : x = %d, y = %d\n", x, y);
    trocarValores(&x, &y);              /* passagem por referência (endereços) */
    printf("Depois: x = %d, y = %d\n", x, y);
    return 0;
}
