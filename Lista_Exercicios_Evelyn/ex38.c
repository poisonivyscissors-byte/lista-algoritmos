/*
 * Nome do aluno: Evelyn
 * Número do exercício: 38
 * Descrição: Reescreve um if/else de maioridade usando o operador ternário (? :).
 * Data de criação: 23/09/2026
 */

#include <stdio.h>

int main(void)
{
    int idade;

    printf("Idade: ");
    if (scanf("%d", &idade) != 1 || idade < 0) {
        printf("Idade invalida.\n");
        return 1;
    }

    /* Versão original:
     *   if (idade >= 18) printf("Maior de idade");
     *   else             printf("Menor de idade");
     */
    printf("%s\n", (idade >= 18) ? "Maior de idade" : "Menor de idade");
    return 0;
}
