#ifndef ALUNO_H
#define ALUNO_H

typedef struct Aluno {
    char nome[100];
    int faltas;
    float nota;
} aluno_t;

aluno_t *criar_aluno();
void carregar_dados_aluno(aluno_t *aluno);
void exibir_dados_aluno(aluno_t *aluno);
int calcular_aprovacao(aluno_t *aluno);

#endif
