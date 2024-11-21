#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Aluno.h"

aluno_t *criar_aluno() {
    aluno_t *aluno = (aluno_t *)malloc(sizeof(aluno_t));  // Aloca memória para o aluno
    if (aluno == NULL) {
        printf("Erro ao alocar memória!\n");
        exit(1);  // Finaliza o programa em caso de falha na alocação de memória
    }
    return aluno;
}

void carregar_dados_aluno(aluno_t *aluno) {
    printf("Digite o nome do aluno: ");
    fgets(aluno->nome, 100, stdin);
    aluno->nome[strcspn(aluno->nome, "\n")] = '\0';  // Remove a quebra de linha do nome

    printf("Digite o número de faltas do aluno: ");
    scanf("%d", &aluno->faltas);

    printf("Digite a nota do aluno: ");
    scanf("%f", &aluno->nota);
}

void exibir_dados_aluno(aluno_t *aluno) {
    printf("\nDados do aluno:\n");
    printf("Nome: %s\n", aluno->nome);
    printf("Faltas: %d\n", aluno->faltas);
    printf("Nota: %.2f\n", aluno->nota);
}

int calcular_aprovacao(aluno_t *aluno) {
    int total_aulas = 100;  // Considerando 100 aulas no total
    float porcentagem_faltas = ((float)aluno->faltas / total_aulas) * 100;

    if (aluno->nota >= 6.0 && porcentagem_faltas <= 25.0) {
        return 1;  // Aprovado
    }
    return 0;  // Reprovado
}
