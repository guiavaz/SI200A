/*
Nome: Guilherme Alves Vaz
RA: 216843
Turma: SI200A
*/
#include<stdio.h>
#include<string.h>

//sem matriz, pois já estava fazendo o programa, mas a lógica seria a mesma usada aqui
struct ficha
{
    char cidade[20];
    float despesa;
};

int main ()
{
    int n=0, x=0;
    struct ficha ficha[50];

    printf("Insira a quantidade total de cidades visitadas:\n");
    scanf("%i",&n);

    //loop para captura do nome das cidades e despesa
    for (x=0;x<n;x++)
    {
        printf("Digite o nome da cidade:\n");
        scanf("%s",&ficha[x].cidade);

        printf("Insira o valor total gasto na viagem:\n");
        scanf("%f",&ficha[x].despesa);
    }

    //loop para somar o valor total da viagem
    float total=0;

    for (x=0; x<n; x++)
    {
        total=total + ficha[x].despesa;
    }

    //loop para verificar cidade mais cara
    float maiorDespesa=0;
    int maiorAux=0;

    for(x=0; x<n; x++)
    {
        if (maiorDespesa < ficha[x].despesa)
        {
            maiorDespesa = ficha[x].despesa;
            maiorAux = x;
        }
    }

    //loop para verificar cidade mais barata
    float menorDespesa=ficha[0].despesa;
    int menorAux=0;

    for(x=0; x<n; x++)
    {
        if (menorDespesa > ficha[x].despesa)
        {
            menorDespesa = ficha[x].despesa;
            menorAux = x;
        }
    }


    printf("A cidade mais cara eh: %s\n", ficha[maiorAux].cidade);
    printf("A cidade mais barata eh: %s\n", ficha[menorAux].cidade);
    printf("O total gasto foi de: %.2f", total);

    return 0;

}
