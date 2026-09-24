/*
 * Nome do aluno: Evelyn
 * Número do exercício: 24
 * Descrição: Reescreve o programa par/ímpar com comentários descritivos para cada bloco lógico.
 * Data de criação: 23/09/2026
 */

#include <stdio.h>

int main(void)
{
    /* Declaração da variável que guardará o número digitado */
    int n;

    /* Leitura do número informado pelo usuário */
    if (scanf("%d", &n) != 1) {
        printf("Entrada invalida");
        return 1;
    }

    /* Decisão: se o resto da divisão por 2 for 0, o número é par */
    if (n % 2 == 0)
        printf("par");      /* bloco executado quando n é par */
    else
        printf("impar");    /* bloco executado quando n é ímpar */

    /* Fim do programa com sucesso */
    return 0;
}
