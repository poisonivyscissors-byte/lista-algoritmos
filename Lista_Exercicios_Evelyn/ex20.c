/*
 * Nome do aluno: Evelyn
 * Número do exercício: 20
 * Descrição: Explica o processo de um arquivo .c até a execução (compilador, linker, código objeto, executável).
 * Data de criação: 23/09/2026
 */

/*
 * DO ARQUIVO .c À EXECUÇÃO
 *
 * 1) CÓDIGO-FONTE (.c): texto escrito pelo programador em linguagem C.
 *
 * 2) PRÉ-PROCESSADOR: trata as linhas iniciadas por '#'. Substitui
 *    #include pelo conteúdo dos cabeçalhos (ex.: stdio.h) e expande #define.
 *
 * 3) COMPILADOR (ex.: gcc): analisa a sintaxe e a semântica do código
 *    já pré-processado e o traduz para linguagem de máquina. Erros de
 *    sintaxe são apontados aqui. O resultado é o CÓDIGO OBJETO
 *    (.o ou .obj): instruções de máquina, mas ainda incompletas, pois
 *    chamadas como printf() apontam para funções que ainda não foram
 *    ligadas.
 *
 * 4) LINKER (ligador/editor de ligações): junta os arquivos objeto do
 *    programa com as bibliotecas necessárias (como a biblioteca padrão
 *    do C) e resolve as referências entre eles. Gera o EXECUTÁVEL
 *    (a.out no Linux, .exe no Windows).
 *
 * 5) EXECUÇÃO: o sistema operacional (loader) carrega o executável na
 *    memória, prepara a pilha e chama a função main. A CPU passa a
 *    executar as instruções, até main retornar.
 *
 * Comandos:  gcc -c ex20.c        (gera ex20.o)
 *            gcc ex20.o -o ex20   (liga e gera o executável)
 *            ./ex20               (executa)
 */
#include <stdio.h>

int main(void)
{
    printf("Fluxo: .c -> pre-processador -> compilador -> .o -> linker -> executavel -> execucao\n");
    return 0;
}
