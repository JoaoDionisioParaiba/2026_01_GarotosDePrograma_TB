#include <stdio.h>

// Inclua os headers das funções aqui
#include "funcao_subtracao.h"

int main() {
    printf("Bem-vindo ao nosso projeto de calculadora!\n");
    printf("Funcoes planejadas: Soma, Subtracao, Multiplicacao, Divisao\n\n");

    // Chamada para a função desenvolvida pelo membro do grupo
    int resultado_subtracao = subtrair(20, 8);
    printf("Subtracao (20 - 8): %d\n", resultado_subtracao);

    return 0;
}
