/*
 * Nome do aluno: Evelyn
 * Número do exercício: 01
 * Descrição: Pseudocódigo de 'lavar um carro' e implementação com três sub-rotinas (enxaguar, ensaboar, secar).
 * Data de criação: 23/09/2026
 */

/*
 * PSEUDOCÓDIGO - Lavar um carro
 *
 * INICIO
 *     separar materiais (balde, água, shampoo, esponja, panos)
 *     enxaguarCarro()                      // remove poeira e sujeira solta
 *     PARA cada parte do carro (teto, capô, portas, porta-malas) FACA
 *         ensaboarParte(parte)             // esponja + shampoo
 *     FIM PARA
 *     enxaguarCarro()                      // retira o sabão
 *     secarCarro()                         // pano macio
 *     guardar materiais
 * FIM
 *
 * PARTES ABSTRAÍDAS EM SUB-ROTINAS (FUNÇÕES):
 *   1) enxaguarCarro()  - usada DUAS vezes (antes e depois do sabão);
 *   2) ensaboarCarro()  - contém a repetição sobre as partes do carro;
 *   3) secarCarro()     - etapa final, independente das outras.
 * Abstrair evita repetir código e permite reutilizar/alterar cada etapa
 * sem mexer no restante do algoritmo.
 */
#include <stdio.h>

void enxaguarCarro(void)
{
    printf("  -> Enxaguando o carro com agua.\n");
}

void ensaboarCarro(void)
{
    const char *partes[] = {"teto", "capo", "portas", "porta-malas"};
    int total = (int)(sizeof(partes) / sizeof(partes[0]));

    for (int i = 0; i < total; i++) {
        printf("  -> Ensaboando: %s\n", partes[i]);
    }
}

void secarCarro(void)
{
    printf("  -> Secando o carro com pano macio.\n");
}

int main(void)
{
    printf("Separando balde, shampoo, esponja e panos...\n");
    printf("1) Primeiro enxague:\n");
    enxaguarCarro();
    printf("2) Ensaboar:\n");
    ensaboarCarro();
    printf("3) Enxague final:\n");
    enxaguarCarro();
    printf("4) Secagem:\n");
    secarCarro();
    printf("Carro limpo! Guardando os materiais.\n");
    return 0;
}
