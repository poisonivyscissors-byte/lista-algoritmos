/*
 * Nome do aluno: Evelyn
 * Número do exercício: 36
 * Descrição: Lê os dados de um aluno em variáveis separadas (sem struct) e calcula a média.
 * Data de criação: 23/09/2026
 */

#include <stdio.h>

int main(void)
{
    char nome[100];
    int matricula;
    float nota1, nota2, nota3;

    printf("Nome do aluno: ");
    if (scanf(" %99[^\n]", nome) != 1) { printf("Nome invalido.\n"); return 1; }

    printf("Matricula: ");
    if (scanf("%d", &matricula) != 1 || matricula < 0) {
        printf("Matricula invalida.\n");
        return 1;
    }

    printf("Nota 1, nota 2 e nota 3: ");
    if (scanf("%f %f %f", &nota1, &nota2, &nota3) != 3 ||
        nota1 < 0 || nota1 > 10 || nota2 < 0 || nota2 > 10 ||
        nota3 < 0 || nota3 > 10) {
        printf("Notas invalidas (use 0 a 10).\n");
        return 1;
    }

    float media = (nota1 + nota2 + nota3) / 3.0f;

    printf("\nAluno    : %s\n", nome);
    printf("Matricula: %d\n", matricula);
    printf("Media    : %.2f\n", media);
    return 0;
}
