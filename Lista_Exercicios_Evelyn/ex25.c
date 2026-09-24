/*
 * Nome do aluno: Evelyn
 * Número do exercício: 25
 * Descrição: Explica o programa que dobra um número e mostra a saída para a entrada 10.
 * Data de criação: 23/09/2026
 */

/*
 * O QUE O PROGRAMA FAZ:
 *   Pede um número inteiro ao usuário, guarda em x, calcula o DOBRO
 *   (y = x * 2) e exibe o resultado.
 *
 * SE O USUÁRIO DIGITAR 10, a saída será:
 *     Digite um numero: 10
 *     O dobro de 10 eh 20
 */
#include <stdio.h>

int main(void)
{
    int x, y;
    printf("Digite um numero: ");
    if (scanf("%d", &x) != 1) {
        printf("Entrada invalida.\n");
        return 1;
    }
    y = x * 2;
    printf("O dobro de %d eh %d\n", x, y);
    return 0;
}
