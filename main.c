#include <stdio.h>

// Inclua os headers das funções aqui
#include "funcao_multiplicacao.h"

int main() {
    printf("Bem-vindo ao nosso projeto de calculadora!\n");
    printf("Funcoes planejadas: Soma, Subtracao, Multiplicacao, Divisao\n\n");

    // Chamada para a função desenvolvida pelo membro do grupo
    int resultado_multiplicacao = multiplicar(7, 6);
    printf("Multiplicacao (7 * 6): %d\n", resultado_multiplicacao);

    return 0;
}
