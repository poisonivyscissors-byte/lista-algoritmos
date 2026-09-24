/*
 * Nome do aluno: Evelyn
 * Número do exercício: 07
 * Descrição: Controla um semáforo (Verde 30s, Amarelo 5s, Vermelho 25s) repetindo o ciclo.
 * Data de criação: 23/09/2026
 */

#include <stdio.h>

#ifdef _WIN32
#include <windows.h>
#define ESPERAR_SEGUNDOS(s) Sleep((s) * 1000)
#else
#include <unistd.h>
#define ESPERAR_SEGUNDOS(s) sleep(s)
#endif

#define TEMPO_VERDE    30
#define TEMPO_AMARELO   5
#define TEMPO_VERMELHO 25

/* Exibe a fase e, se não estiver em modo rápido, espera a duração real */
static void executarFase(const char *cor, int duracao, int modoRapido)
{
    printf("Sinal %-8s por %2d segundos\n", cor, duracao);
    fflush(stdout);
    if (!modoRapido) {
        ESPERAR_SEGUNDOS(duracao);
    }
}

int main(void)
{
    int ciclos, modoRapido;

    printf("Quantos ciclos deseja simular? ");
    if (scanf("%d", &ciclos) != 1 || ciclos < 1) {
        printf("Entrada invalida.\n");
        return 1;
    }
    printf("Modo rapido, sem esperar o tempo real (1-sim, 0-nao)? ");
    if (scanf("%d", &modoRapido) != 1 || (modoRapido != 0 && modoRapido != 1)) {
        printf("Entrada invalida.\n");
        return 1;
    }

    /* O ciclo Verde -> Amarelo -> Vermelho se repete */
    for (int c = 1; c <= ciclos; c++) {
        printf("--- Ciclo %d ---\n", c);
        executarFase("VERDE",    TEMPO_VERDE,    modoRapido);
        executarFase("AMARELO",  TEMPO_AMARELO,  modoRapido);
        executarFase("VERMELHO", TEMPO_VERMELHO, modoRapido);
    }
    return 0;
}
