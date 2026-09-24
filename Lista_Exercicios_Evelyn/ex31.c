/*
 * Nome do aluno: Evelyn
 * Número do exercício: 31
 * Descrição: Lê o nome completo com fgets e imprime uma saudação personalizada.
 * Data de criação: 23/09/2026
 */

#include <stdio.h>
#include <string.h>

int main(void)
{
    char nome[100];

    printf("Digite seu nome completo: ");
    if (fgets(nome, sizeof(nome), stdin) == NULL) {
        printf("Nenhuma entrada lida.\n");
        return 1;
    }
    nome[strcspn(nome, "\n")] = '\0';   /* remove o '\n' que o fgets mantém */

    if (nome[0] == '\0') {
        printf("Nome vazio.\n");
        return 1;
    }
    printf("Ola, %s! Seja bem-vindo(a)!\n", nome);
    return 0;
}
