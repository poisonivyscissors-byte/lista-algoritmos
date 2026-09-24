/*
 * Nome do aluno: Evelyn
 * Número do exercício: 29
 * Descrição: Demonstra escopo de variáveis: x local em função e x local em main.
 * Data de criação: 23/09/2026
 */

/*
 * O QUE ACONTECE:
 *   A função funcaoComX declara seu próprio x (10) e main declara outro
 *   x (5). São variáveis DIFERENTES, em endereços de memória diferentes,
 *   e cada uma só existe dentro do bloco onde foi declarada. Imprimem-se
 *   ambos sem conflito: 5 em main e 10 na função.
 *
 * ESCOPO: é a região do programa em que um identificador é visível.
 *   - Variável LOCAL: visível só dentro da função/bloco onde nasceu e
 *     destruída ao final dele.
 *   - Uma variável com o mesmo nome em outro escopo NÃO afeta a primeira;
 *     dentro de um bloco interno, um x novo "esconde" (shadowing) o
 *     x do bloco externo.
 */
#include <stdio.h>

static void funcaoComX(void)
{
    int x = 10;
    printf("Dentro da funcao: x = %d\n", x);
}

int main(void)
{
    int x = 5;

    printf("Em main (antes)  : x = %d\n", x);
    funcaoComX();
    printf("Em main (depois) : x = %d (nao foi alterado pela funcao)\n", x);

    {   /* bloco interno: novo escopo */
        int x = 99;
        printf("Bloco interno    : x = %d (esconde o x de main)\n", x);
    }
    printf("Em main (fim)    : x = %d\n", x);
    return 0;
}
