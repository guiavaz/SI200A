/*
Nomes: Guilherme Alves Vaz
RA: 216843
Nome: Patrícia Guimarães
RA: 186451
Turma: SI200A
*/
#include <stdio.h>
#include <stdlib.h>

// vetor de float
float media(float *idades, int alunos)
{
    float media = 0;
    float somaIdades = 0;
    for (int i = 0; i < alunos; i++)
    {
        somaIdades += idades[i];
    }
    media = somaIdades / alunos;
    return media;
}

int main()
{
    int qtdAlunos = 0;
    float *idades;
    printf("Insira o número de alunos:\n");
    scanf("%d", &qtdAlunos);

    idades = (float *)malloc(qtdAlunos * sizeof(float));

    printf("Digite a idade de cada aluno:\n");

    for (int i = 0; i < qtdAlunos; i++)
    {
        scanf("%f", &idades[i]);
    }

    float valorMedia = media(idades, qtdAlunos);

    printf("Media das idades: %.2f\n", valorMedia);

    // Liberar a memória alocada
    free(idades);

    return 0;
}
