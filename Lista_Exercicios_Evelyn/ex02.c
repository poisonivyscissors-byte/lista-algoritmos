/*
 * Nome do aluno: Evelyn
 * Número do exercício: 02
 * Descrição: Lê N e imprime os N primeiros termos da sequência de Fibonacci, identificando o padrão.
 * Data de criação: 23/09/2026
 */

/*
 * Sequência: 1, 1, 2, 3, 5, 8, 13, ...
 *
 * PADRÃO: os dois primeiros termos valem 1 e, a partir do terceiro,
 * cada termo é a SOMA dos dois anteriores:  F(n) = F(n-1) + F(n-2).
 *
 * PADRÃO DE REPETIÇÃO: a cada iteração do laço, imprimimos o termo
 * atual e "deslizamos" a janela de dois valores (anterior, atual):
 *      proximo  = anterior + atual
 *      anterior = atual
 *      atual    = proximo
 */
#include <stdio.h>

int main(void)
{
    int n;

    printf("Quantos termos deseja ver (1 a 90)? ");
    if (scanf("%d", &n) != 1 || n < 1 || n > 90) {
        printf("Entrada invalida. Informe um inteiro entre 1 e 90.\n");
        return 1;
    }

    long long anterior = 1, atual = 1;

    for (int i = 1; i <= n; i++) {
        printf("%lld", anterior);
        printf(i < n ? ", " : "\n");

        long long proximo = anterior + atual;
        anterior = atual;
        atual = proximo;
    }
    return 0;
}
