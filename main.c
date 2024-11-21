#include <stdio.h>
#include "Aluno.h"

int main() {
    aluno_t *aluno = criar_aluno();  // Cria um aluno dinamicamente

    carregar_dados_aluno(aluno);  // Carrega os dados do aluno

    exibir_dados_aluno(aluno);  // Exibe os dados do aluno

    // Verifica se o aluno foi aprovado
    if (calcular_aprovacao(aluno)) {
        printf("Aluno aprovado!\n");
    } else {
        printf("Aluno reprovado!\n");
    }

    // Libera a memória alocada
    free(aluno);

    return 0;
}
