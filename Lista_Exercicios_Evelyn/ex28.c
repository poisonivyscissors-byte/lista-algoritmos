/*
 * Nome do aluno: Evelyn
 * Número do exercício: 28
 * Descrição: Calcula área e perímetro de um círculo (raio float) usando M_PI de math.h.
 * Data de criação: 23/09/2026
 */

#define _USE_MATH_DEFINES   /* necessário no Windows/MSVC para expor M_PI */
#include <stdio.h>
#include <math.h>

#ifndef M_PI                /* garantia para compiladores em modo estrito */
#define M_PI 3.14159265358979323846
#endif

int main(void)
{
    float raio;

    printf("Raio do circulo: ");
    if (scanf("%f", &raio) != 1 || raio < 0) {
        printf("Raio invalido.\n");
        return 1;
    }

    float area = (float)(M_PI * raio * raio);
    float perimetro = (float)(2 * M_PI * raio);

    printf("Area      = %.2f\n", area);
    printf("Perimetro = %.2f\n", perimetro);
    return 0;
}
