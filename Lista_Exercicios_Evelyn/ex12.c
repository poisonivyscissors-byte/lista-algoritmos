/*
 * Nome do aluno: Evelyn
 * Número do exercício: 12
 * Descrição: Pseudocódigo e programa que calculam o IMC e classificam o resultado.
 * Data de criação: 23/09/2026
 */

/*
 * PSEUDOCÓDIGO
 *   INICIO
 *     LEIA peso, altura
 *     imc <- peso / (altura * altura)
 *     SE imc < 18.5 ENTAO classificacao <- "Abaixo do peso"
 *     SENAO SE imc < 25 ENTAO classificacao <- "Peso normal"
 *     SENAO SE imc < 30 ENTAO classificacao <- "Sobrepeso"
 *     SENAO SE imc < 35 ENTAO classificacao <- "Obesidade grau I"
 *     SENAO SE imc < 40 ENTAO classificacao <- "Obesidade grau II"
 *     SENAO classificacao <- "Obesidade grau III"
 *     ESCREVA imc, classificacao
 *   FIM
 */
#include <stdio.h>

/* Retorna a descrição da faixa de IMC (tabela da OMS) */
static const char *classificarImc(double imc)
{
    if (imc < 18.5) return "Abaixo do peso";
    if (imc < 25.0) return "Peso normal";
    if (imc < 30.0) return "Sobrepeso";
    if (imc < 35.0) return "Obesidade grau I";
    if (imc < 40.0) return "Obesidade grau II";
    return "Obesidade grau III";
}

int main(void)
{
    double peso, altura;

    printf("Peso (kg): ");
    if (scanf("%lf", &peso) != 1 || peso <= 0) {
        printf("Peso invalido.\n");
        return 1;
    }
    printf("Altura (m): ");
    if (scanf("%lf", &altura) != 1 || altura <= 0) {
        printf("Altura invalida.\n");
        return 1;
    }

    double imc = peso / (altura * altura);
    printf("IMC = %.2f -> %s\n", imc, classificarImc(imc));
    return 0;
}
