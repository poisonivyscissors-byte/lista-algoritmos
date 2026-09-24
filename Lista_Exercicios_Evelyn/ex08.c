/*
 * Nome do aluno: Evelyn
 * Número do exercício: 08
 * Descrição: Jogo de adivinhação (1 a 100) com dicas de 'maior' ou 'menor'.
 * Data de criação: 23/09/2026
 */

/*
 * ALGORITMO
 *   1. O computador sorteia um número secreto entre 1 e 100.
 *   2. REPITA (estrutura de repetição: do...while)
 *        - ler o palpite do usuário;
 *        - SE palpite < secreto  ENTÃO dica "maior"
 *          SENAO SE palpite > secreto ENTÃO dica "menor"
 *          SENAO acertou;                    (estrutura de decisão: if/else if)
 *        - contar a tentativa;
 *      ATE que o palpite seja igual ao número secreto.
 *   3. Exibir o total de tentativas.
 *
 * REPETIÇÃO: necessária porque não se sabe quantas tentativas serão
 * feitas; o laço só termina quando a condição de acerto for verdadeira.
 * DECISÃO: compara o palpite ao número secreto para escolher a dica.
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int secreto, palpite, tentativas = 0;

    srand((unsigned int)time(NULL));
    secreto = rand() % 100 + 1;

    printf("Pensei em um numero de 1 a 100. Tente adivinhar!\n");

    do {
        printf("Seu palpite: ");
        if (scanf("%d", &palpite) != 1) {
            printf("Entrada invalida. Encerrando.\n");
            return 1;
        }
        if (palpite < 1 || palpite > 100) {
            printf("Digite um numero entre 1 e 100.\n");
            continue; /* nao conta como tentativa */
        }
        tentativas++;

        if (palpite < secreto) {
            printf("Dica: o numero e MAIOR.\n");
        } else if (palpite > secreto) {
            printf("Dica: o numero e MENOR.\n");
        } else {
            printf("Acertou em %d tentativa(s)!\n", tentativas);
        }
    } while (palpite != secreto);

    return 0;
}
