/*
 * Nome do aluno: Evelyn
 * Número do exercício: 03
 * Descrição: Decomposição de 'organizar a biblioteca' e automação da catalogação com repetição.
 * Data de criação: 23/09/2026
 */

/*
 * DECOMPOSIÇÃO DO PROBLEMA "organizar a biblioteca de uma empresa":
 *   1. Levantar/contar todos os livros existentes;
 *   2. Definir critérios de classificação (área, autor, título);
 *   3. Atribuir um código único a cada livro;
 *   4. Registrar os dados de cada livro no catálogo;
 *   5. Definir a estante/prateleira de cada livro;
 *   6. Guardar os livros nos locais definidos;
 *   7. Conferir o catálogo final.
 *
 * REPETIÇÃO NA CATALOGAÇÃO: as etapas 3, 4 e 5 são idênticas para cada
 * livro. Com centenas de livros, escrevemos o procedimento UMA vez e o
 * repetimos com um laço (for), variando apenas o contador i. Assim o
 * computador cataloga 10 ou 1000 livros com o mesmo código.
 */
#include <stdio.h>
#include <string.h>

#define MAX_LIVROS 1000
#define LIVROS_POR_ESTANTE 10

/* Lê uma linha de texto, removendo o '\n' final. */
static void lerLinha(char *destino, size_t tamanho)
{
    if (fgets(destino, (int)tamanho, stdin) != NULL) {
        destino[strcspn(destino, "\n")] = '\0';
    } else {
        destino[0] = '\0';
    }
}

int main(void)
{
    int total;
    char titulo[100];

    printf("Quantos livros deseja catalogar (1 a %d)? ", MAX_LIVROS);
    if (scanf("%d", &total) != 1 || total < 1 || total > MAX_LIVROS) {
        printf("Quantidade invalida.\n");
        return 1;
    }
    getchar(); /* consome o '\n' deixado pelo scanf */

    for (int i = 1; i <= total; i++) {
        printf("Titulo do livro %d: ", i);
        lerLinha(titulo, sizeof(titulo));

        int estante = (i - 1) / LIVROS_POR_ESTANTE + 1;
        printf("  CATALOGADO -> Codigo: LIV-%04d | Titulo: %s | Estante: %d\n",
               i, titulo, estante);
    }
    printf("Catalogacao concluida: %d livros.\n", total);
    return 0;
}
