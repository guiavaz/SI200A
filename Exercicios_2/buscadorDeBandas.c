/*
Nome: Guilherme Alves Vaz
RA: 216843
Turma: SI200A
*/
#include<stdio.h>
#include <string.h>

struct ficha
{
    char nome[20];
    char genero[15];
    int integrantes;
    int seguidores;
    int ouvintes;
    int engajamento;
};


void limparBuffer()
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF) { }
}

int main()
{
    struct ficha banda[4];
    int n=0;

    printf("Insira os dados solicitados de 5 bandas:\n\n");

    //loop para capturar os dados das bandas
    for (n=0; n<5; n++)
    {
        printf("Dados da banda %d\n",n+1);
        printf("Nome: ");
        fgets(banda[n].nome,20,stdin);

        printf("Genero: ");
        fgets(banda[n].genero,15,stdin);

        printf("Integrantes: ");
        scanf("%d",&banda[n].integrantes);

        printf("Seguidores no Twitter: ");
        scanf("%d",&banda[n].seguidores);

        printf("Ouvintes no Spotify: ");
        scanf("%d",&banda[n].ouvintes);

        banda[n].engajamento = banda[n].ouvintes + banda[n].seguidores;

        printf("n=%d\n",n); //debug

        limparBuffer(); //problemas com lixo no buffer
    }

    //loop para mostrar a banda com mais engajamento
    int maiorEngajamento=0;
    int auxIndice;
    for (n=0;n<5;n++)
    {
        if (maiorEngajamento < banda[n].engajamento)
        {
            maiorEngajamento = banda[n].engajamento;
            auxIndice = n;
        }
    }

    char busca[15];

    printf("Digite o genero musical que deseja buscar: ");
    fgets(busca,15,stdin);

    printf("\n\nBandas com o genero %s: \n\n",busca);

    for (n=0; n<5; n++)
    {
        if (strcmp(banda[n].genero, busca) == 0)
        {
            printf("%d. %s\n",n+1,banda[n].nome);
        }
    }

    printf("\n\nA banda com mais engajamento eh: %s\n\n",banda[auxIndice].nome);




    return 0;
}
