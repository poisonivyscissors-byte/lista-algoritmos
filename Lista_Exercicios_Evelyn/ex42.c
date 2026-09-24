/*
 * Nome do aluno: Evelyn
 * Número do exercício: 42
 * Descrição: Calcula o primeiro dígito verificador de um CPF a partir dos 9 primeiros dígitos.
 * Data de criação: 23/09/2026
 */

/*
 * CÁLCULO DO 1º DÍGITO VERIFICADOR:
 *   - multiplica-se cada um dos 9 dígitos por pesos de 10 até 2;
 *   - soma-se tudo;
 *   - resto = soma % 11;
 *   - dígito = 0 se resto < 2; senão 11 - resto.
 */
#include <stdio.h>
#include <string.h>

int main(void)
{
    char cpf[32];

    printf("Digite os 9 primeiros digitos do CPF (so numeros): ");
    if (scanf("%31s", cpf) != 1 || strlen(cpf) != 9) {
        printf("Entrada invalida: informe exatamente 9 digitos.\n");
        return 1;
    }

    int soma = 0;
    for (int i = 0; i < 9; i++) {
        if (cpf[i] < '0' || cpf[i] > '9') {
            printf("Entrada invalida: use apenas digitos.\n");
            return 1;
        }
        int digito = cpf[i] - '0';         /* converte caractere em número */
        soma += digito * (10 - i);         /* pesos: 10, 9, ..., 2 */
    }

    int resto = soma % 11;
    int dv1 = (resto < 2) ? 0 : 11 - resto;

    printf("Primeiro digito verificador: %d\n", dv1);
    return 0;
}
