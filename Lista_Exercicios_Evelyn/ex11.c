/*
 * Nome do aluno: Evelyn
 * Número do exercício: 11
 * Descrição: Pseudocódigo e programa que convertem reais em dólares a partir da taxa de câmbio.
 * Data de criação: 23/09/2026
 */

/*
 * PSEUDOCÓDIGO
 *   INICIO
 *     ESCREVA "Valor em reais:"
 *     LEIA reais
 *     ESCREVA "Taxa de câmbio (quantos reais valem 1 dólar):"
 *     LEIA taxa
 *     SE taxa <= 0 ENTAO
 *         ESCREVA "Taxa inválida"
 *     SENAO
 *         dolares <- reais / taxa
 *         ESCREVA dolares
 *     FIM SE
 *   FIM
 */
#include <stdio.h>

int main(void)
{
    double reais, taxa;

    printf("Valor em reais: ");
    if (scanf("%lf", &reais) != 1 || reais < 0) {
        printf("Valor invalido.\n");
        return 1;
    }
    printf("Taxa de cambio (quantos reais valem 1 dolar): ");
    if (scanf("%lf", &taxa) != 1 || taxa <= 0) {
        printf("Taxa invalida.\n");
        return 1;
    }

    double dolares = reais / taxa;
    printf("R$ %.2f equivalem a US$ %.2f\n", reais, dolares);
    return 0;
}
