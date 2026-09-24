/*
 * Nome do aluno: Evelyn
 * Número do exercício: 56
 * Descrição: Simula um login: acesso concedido se usuário for 'admin' e senha '1234'.
 * Data de criação: 23/09/2026
 */

#include <stdio.h>
#include <string.h>

int main(void)
{
    char usuario[50], senha[50];

    printf("Usuario: ");
    if (scanf("%49s", usuario) != 1) { printf("Entrada invalida.\n"); return 1; }
    printf("Senha  : ");
    if (scanf("%49s", senha) != 1) { printf("Entrada invalida.\n"); return 1; }

    if (strcmp(usuario, "admin") == 0 && strcmp(senha, "1234") == 0) {
        printf("Acesso concedido. Bem-vindo, %s!\n", usuario);
    } else {
        printf("Acesso negado: usuario ou senha incorretos.\n");
    }
    return 0;
}
