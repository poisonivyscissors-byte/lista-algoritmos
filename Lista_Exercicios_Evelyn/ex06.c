/*
 * Nome do aluno: Evelyn
 * Número do exercício: 06
 * Descrição: Soma de 1 a N com for, while e fórmula matemática (reconhecimento de padrão).
 * Data de criação: 23/09/2026
 */

/*
 * ABORDAGENS:
 *   a) for   : soma = 1 + 2 + ... + N (N somas)
 *   b) while : mesma lógica, com contador controlado manualmente
 *   c) fórmula (Gauss): soma = N * (N + 1) / 2
 *
 * PADRÃO RECONHECIDO: pareando o primeiro com o último termo (1+N),
 * o segundo com o penúltimo (2+(N-1)) etc., todos os pares valem N+1 e
 * existem N/2 pares.
 *
 * EFICIÊNCIA: for e while têm custo proporcional a N (complexidade O(N));
 * a fórmula faz um número fixo de operações (O(1)), independente de N.
 * Portanto, a FÓRMULA é a abordagem mais eficiente.
 */
#include <stdio.h>

int main(void)
{
    int n;

    printf("Digite N (inteiro >= 1): ");
    if (scanf("%d", &n) != 1 || n < 1) {
        printf("Entrada invalida.\n");
        return 1;
    }

    /* a) versão original com for */
    long long somaFor = 0;
    for (int i = 1; i <= n; i++) somaFor += i;

    /* b) versão com while */
    long long somaWhile = 0;
    int i = 1;
    while (i <= n) {
        somaWhile += i;
        i++;
    }

    /* c) fórmula matemática */
    long long somaFormula = (long long)n * (n + 1) / 2;

    printf("Soma com for     : %lld\n", somaFor);
    printf("Soma com while   : %lld\n", somaWhile);
    printf("Soma com formula : %lld\n", somaFormula);
    printf("A formula e mais eficiente: O(1) contra O(N) dos lacos.\n");
    return 0;
}
