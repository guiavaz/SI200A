/*
Nomes: Guilherme Alves Vaz
RA: 216843
Nome:Patrícia Guimarães
RA: 186451
Turma: SI200A
*/
#include<stdio.h>

int verifica_primo(int num)
{
    int i=0;
    for(i=2;i<num;i++)
    {
        if(num%i ==0)
        {
            return 0;
        }
        return 1;
    }
}

int main ()
{
    int n=0;

    printf("Digite um numero:\n");
    scanf("%d",&n);

    //printf("%d",n);
    if(verifica_primo(n)==0)
    {
        printf("Nao eh Primo\n");
    }
    else
    {
        printf("Eh Primo\n");
    }

    return 0;
}
