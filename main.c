#include <stdio.h>

// Inclua os headers das funções aqui
#include "funcao_soma.h"

int main() {
    printf("Bem-vindo ao nosso projeto de calculadora!\n");
    printf("Funcoes planejadas: Soma, Subtracao, Multiplicacao, Divisao\n\n");

    // Chamada para a função desenvolvida pelo membro do grupo
    int resultado_soma = somar(10, 5);
    printf("Soma (10 + 5): %d\n", resultado_soma);

    return 0;
}
