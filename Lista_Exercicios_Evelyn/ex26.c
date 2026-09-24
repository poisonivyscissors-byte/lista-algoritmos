/*
 * Nome do aluno: Evelyn
 * Número do exercício: 26
 * Descrição: Importância de nomes significativos: exemplo com nomes ruins reescrito com nomes melhores.
 * Data de criação: 23/09/2026
 */

/*
 * POR QUE USAR NOMES SIGNIFICATIVOS?
 *   - o código vira "documentação": quem lê entende a intenção;
 *   - facilita manutenção, correção de erros e trabalho em equipe;
 *   - reduz a necessidade de comentários e a chance de usar a variável errada.
 *
 * EXEMPLO COM NOMES RUINS:
 *     int f(int a, int b)
 *     {
 *         int c = a * b / 2;
 *         return c;
 *     }
 *     // O que f calcula? O que são a, b e c?
 *
 * REESCRITO COM NOMES MELHORES (abaixo): areaTriangulo, base, altura, area.
 */
#include <stdio.h>

static double areaTriangulo(double base, double altura)
{
    double area = base * altura / 2.0;
    return area;
}

int main(void)
{
    double base, altura;

    printf("Base e altura do triangulo: ");
    if (scanf("%lf %lf", &base, &altura) != 2 || base < 0 || altura < 0) {
        printf("Entrada invalida.\n");
        return 1;
    }
    printf("Area do triangulo = %.2f\n", areaTriangulo(base, altura));
    return 0;
}
