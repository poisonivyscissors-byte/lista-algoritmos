/*
 * Nome do aluno: Evelyn
 * Número do exercício: 21
 * Descrição: Importância do depurador (debugger) e exemplo de como ele ajuda a achar um erro.
 * Data de criação: 23/09/2026
 */

/*
 * IMPORTÂNCIA DO DEBUGGER
 * O depurador (ex.: gdb, ou o depurador do VS Code / Code::Blocks) permite:
 *   - executar o programa passo a passo (linha a linha);
 *   - inserir pontos de parada (breakpoints);
 *   - inspecionar/alterar o valor das variáveis durante a execução;
 *   - ver a pilha de chamadas e onde o programa "quebrou".
 * Sem ele, o programador depende apenas de printf() para "adivinhar"
 * o que acontece; com ele, observa o estado real do programa.
 *
 * EXEMPLO DE ERRO: na versão com bug abaixo, o laço usava i <= n
 * (em vez de i < n) e lia v[5], fora do vetor de 5 posições:
 *
 *     for (int i = 0; i <= n; i++) soma += v[i];   // BUG
 *
 * O resultado saía errado (soma + lixo de memória). Usando o gdb:
 *     gcc -g ex21.c -o ex21
 *     gdb ./ex21
 *     (gdb) break somaVetor          <- para na função
 *     (gdb) run
 *     (gdb) next                     <- avança linha a linha
 *     (gdb) print i                  <- mostra o índice
 *     (gdb) print v[i]               <- quando i = 5, mostra valor absurdo
 * Vendo que i chegou a 5, descobre-se que o limite do laço estava errado.
 * Abaixo está a versão CORRIGIDA (i < n).
 */
#include <stdio.h>

static int somaVetor(const int v[], int n)
{
    int soma = 0;
    for (int i = 0; i < n; i++) {   /* corrigido: i < n */
        soma += v[i];
    }
    return soma;
}

int main(void)
{
    int valores[5] = {10, 20, 30, 40, 50};
    int total = somaVetor(valores, 5);

    printf("Soma = %d (esperado: 150)\n", total);
    return 0;
}
