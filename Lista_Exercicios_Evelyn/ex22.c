/*
 * Nome do aluno: Evelyn
 * Número do exercício: 22
 * Descrição: Corrige o código com erro de sintaxe e de semântica (divisão por zero em printf).
 * Data de criação: 23/09/2026
 */

/*
 * CÓDIGO ORIGINAL:
 *     #include <stdio.h>
 *     int main()
 *     {
 *         printf("O resultado é %d", 10 / 0);
 *         return 0;
 *     }
 *
 * ERRO DE SEMÂNTICA (o principal): 10 / 0 é uma divisão por zero. O código
 * é aceito pelo compilador (que apenas emite o aviso "division by zero"),
 * mas em execução o comportamento é indefinido (geralmente o programa é
 * encerrado com "Floating point exception"). A lógica do programa está
 * errada, mesmo sendo "escrita corretamente".
 *
 * PROBLEMAS DE ESCRITA / SINTAXE E BOAS PRÁTICAS:
 *   - Um erro de sintaxe típico seria esquecer o ';' ou o fecha-aspas
 *     (ex.: printf("...", 10 / 0) sem ';'), que o compilador recusaria.
 *   - A saída não termina em '\n' (a linha não é finalizada);
 *   - O caractere acentuado 'é' dentro da string pode aparecer errado em
 *     alguns terminais (problema de codificação);
 *   - main() deve ser declarada como int main(void).
 *
 * CORREÇÃO: dividir por um valor lido do usuário e testar se o divisor
 * é diferente de zero antes de dividir.
 */
#include <stdio.h>

int main(void)
{
    int dividendo = 10, divisor;

    printf("Digite o divisor: ");
    if (scanf("%d", &divisor) != 1) {
        printf("Entrada invalida.\n");
        return 1;
    }

    if (divisor == 0) {
        printf("Erro: divisao por zero nao e permitida.\n");
        return 1;
    }

    printf("O resultado e %d\n", dividendo / divisor);
    return 0;
}
