/*
 * Nome do aluno: Evelyn
 * Número do exercício: 10
 * Descrição: Troco com o menor número de moedas (1, 5, 10, 25 centavos) usando algoritmo guloso.
 * Data de criação: 23/09/2026
 */

/*
 * DECOMPOSIÇÃO:
 *   1. Ler o valor do troco em centavos;
 *   2. Escolher a maior moeda que ainda cabe no valor restante;
 *   3. Descobrir quantas dessas moedas cabem (divisão inteira);
 *   4. Subtrair do troco (resto da divisão) e repetir com a próxima moeda;
 *   5. Exibir a quantidade de cada moeda e o total.
 *
 * ESTRATÉGIA GULOSA: em cada passo, toma-se a decisão localmente ótima
 * (a maior moeda possível). Para o sistema {25, 10, 5, 1} essa estratégia
 * produz o menor número de moedas. (Em sistemas arbitrários o guloso
 * pode falhar; ex.: moedas {1, 3, 4} para o valor 6.)
 */
#include <stdio.h>

int main(void)
{
    const int moedas[] = {25, 10, 5, 1};
    const int qtdTipos = (int)(sizeof(moedas) / sizeof(moedas[0]));
    int troco, totalMoedas = 0;

    printf("Troco em centavos: ");
    if (scanf("%d", &troco) != 1 || troco < 0) {
        printf("Valor invalido.\n");
        return 1;
    }

    for (int i = 0; i < qtdTipos; i++) {
        int quantidade = troco / moedas[i];
        troco = troco % moedas[i];
        if (quantidade > 0) {
            printf("%d moeda(s) de %d centavo(s)\n", quantidade, moedas[i]);
            totalMoedas += quantidade;
        }
    }
    printf("Total de moedas: %d\n", totalMoedas);
    return 0;
}
