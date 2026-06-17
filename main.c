#include <stdio.h>

// Inclua os headers das funções aqui
#include "funcao_divisao.h"

int main() {
    printf("Bem-vindo ao nosso projeto de calculadora!\n");
    printf("Funcoes planejadas: Soma, Subtracao, Multiplicacao, Divisao\n\n");

    // Chamada para a função desenvolvida pelo membro do grupo
    float resultado_divisao = dividir(100.0, 4.0);
    printf("Divisao (100.0 / 4.0): %.2f\n", resultado_divisao);

    return 0;
}
