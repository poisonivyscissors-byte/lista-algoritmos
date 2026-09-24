/*
 * Nome do aluno: Evelyn
 * Número do exercício: 16
 * Descrição: Aprova o aluno se nota >= 7 e frequência >= 75%, usando lógica proposicional.
 * Data de criação: 23/09/2026
 */

/*
 * LÓGICA PROPOSICIONAL
 *   P: "a nota é maior ou igual a 7"
 *   Q: "a frequência é maior ou igual a 75%"
 *   Aprovado <=> P ∧ Q   (em C: P && Q)
 *
 *   P | Q | P ∧ Q
 *   V | V |   V   -> aprovado
 *   V | F |   F   -> reprovado por frequência
 *   F | V |   F   -> reprovado por nota
 *   F | F |   F   -> reprovado
 */
#include <stdio.h>

int main(void)
{
    double nota, frequencia;

    printf("Nota (0 a 10): ");
    if (scanf("%lf", &nota) != 1 || nota < 0 || nota > 10) {
        printf("Nota invalida.\n");
        return 1;
    }
    printf("Frequencia (0 a 100): ");
    if (scanf("%lf", &frequencia) != 1 || frequencia < 0 || frequencia > 100) {
        printf("Frequencia invalida.\n");
        return 1;
    }

    if (nota >= 7.0 && frequencia >= 75.0) {
        printf("Aluno APROVADO.\n");
    } else {
        printf("Aluno REPROVADO.\n");
    }
    return 0;
}
