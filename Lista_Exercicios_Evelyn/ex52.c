/*
 * Nome do aluno: Evelyn
 * Número do exercício: 52
 * Descrição: Lê 3 números e os imprime em ordem crescente sem usar arrays (apenas ifs).
 * Data de criação: 23/09/2026
 */

/*
 * LÓGICA: três comparações-trocas colocam os valores em ordem
 *   1) se a > b, troca a e b  -> o maior entre a e b fica em b;
 *   2) se b > c, troca b e c  -> o maior dos três vai para c;
 *   3) se a > b, troca a e b  -> ordena os dois restantes.
 */
#include <stdio.h>

int main(void)
{
    double a, b, c, temp;

    printf("Digite tres numeros: ");
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3) {
        printf("Entrada invalida.\n");
        return 1;
    }

    if (a > b) { temp = a; a = b; b = temp; }
    if (b > c) { temp = b; b = c; c = temp; }
    if (a > b) { temp = a; a = b; b = temp; }

    printf("Ordem crescente: %.2f, %.2f, %.2f\n", a, b, c);
    return 0;
}
