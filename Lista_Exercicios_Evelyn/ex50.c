/*
 * Nome do aluno: Evelyn
 * Número do exercício: 50
 * Descrição: Calcula o IMC e exibe a classificação com estrutura de decisão encadeada (if/else if).
 * Data de criação: 23/09/2026
 */

#include <stdio.h>

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
    printf("IMC = %.2f\n", imc);

    if (imc < 18.5) {
        printf("Classificacao: Abaixo do peso\n");
    } else if (imc < 25.0) {
        printf("Classificacao: Peso normal\n");
    } else if (imc < 30.0) {
        printf("Classificacao: Sobrepeso\n");
    } else if (imc < 35.0) {
        printf("Classificacao: Obesidade grau I\n");
    } else if (imc < 40.0) {
        printf("Classificacao: Obesidade grau II\n");
    } else {
        printf("Classificacao: Obesidade grau III\n");
    }
    return 0;
}
