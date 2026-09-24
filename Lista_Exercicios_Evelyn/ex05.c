/*
 * Nome do aluno: Evelyn
 * Número do exercício: 05
 * Descrição: Aplicação dos quatro pilares do pensamento computacional a um sistema de recomendação de filmes.
 * Data de criação: 23/09/2026
 */

/*
 * OS QUATRO PILARES APLICADOS A UM SISTEMA DE RECOMENDAÇÃO DE FILMES
 *
 * 1) DECOMPOSIÇÃO: dividir o problema em partes menores:
 *      - coletar as preferências do usuário (gêneros, notas dadas);
 *      - manter o catálogo de filmes (título, gênero, nota média);
 *      - filtrar os filmes candidatos;
 *      - ordenar/selecionar os melhores;
 *      - exibir as recomendações.
 *
 * 2) RECONHECIMENTO DE PADRÕES: usuários que gostaram de filmes de um
 *    gênero tendem a gostar de outros do mesmo gênero; usuários com
 *    histórico parecido costumam gostar dos mesmos filmes. O sistema
 *    procura essas regularidades no histórico.
 *
 * 3) ABSTRAÇÃO: ignorar detalhes irrelevantes (cor do cartaz, duração
 *    exata) e manter só o essencial: gênero, nota média, avaliações do
 *    usuário. Cada filme vira um pequeno conjunto de dados.
 *
 * 4) ALGORITMOS: sequência finita de passos: para cada filme do catálogo,
 *    SE o gênero for o preferido E a nota média >= 4.0, ENTÃO recomendar.
 *
 * O programa abaixo é uma versão simplificada dessa ideia.
 */
#include <stdio.h>

#define QTD_FILMES 6

/* Abstração: converte o código do gênero em nome */
static const char *nomeGenero(int genero)
{
    switch (genero) {
        case 1:  return "Acao";
        case 2:  return "Comedia";
        case 3:  return "Drama";
        default: return "Desconhecido";
    }
}

/* Algoritmo de recomendação: filtra por gênero e nota mínima */
static int recomendar(int generoPreferido, const char *titulos[],
                      const int generos[], const double notas[], int n)
{
    int encontrados = 0;
    for (int i = 0; i < n; i++) {
        if (generos[i] == generoPreferido && notas[i] >= 4.0) {
            printf("  * %s (nota %.1f)\n", titulos[i], notas[i]);
            encontrados++;
        }
    }
    return encontrados;
}

int main(void)
{
    const char *titulos[QTD_FILMES] = {
        "Noite Sem Fim", "Riso Solto", "Cartas ao Vento",
        "Perseguicao Total", "Feriado em Familia", "Silencio do Mar"
    };
    const int generos[QTD_FILMES] = {1, 2, 3, 1, 2, 3};
    const double notas[QTD_FILMES] = {4.5, 3.2, 4.8, 3.9, 4.1, 4.0};
    int preferido;

    printf("Genero preferido (1-Acao, 2-Comedia, 3-Drama): ");
    if (scanf("%d", &preferido) != 1 || preferido < 1 || preferido > 3) {
        printf("Genero invalido.\n");
        return 1;
    }

    printf("Recomendacoes de %s:\n", nomeGenero(preferido));
    if (recomendar(preferido, titulos, generos, notas, QTD_FILMES) == 0) {
        printf("  Nenhum filme com nota alta neste genero.\n");
    }
    return 0;
}
