/*
Nome: Guilherme Alves Vaz
RA: 216843
Turma: SI200A
*/
#include <stdio.h>

int main ()
{
    int dia,mes,ano;

    printf("Insira sua data de nascimento no formato dd-mm-aaaa:\n");
    scanf("%i-%i-%i",&dia,&mes,&ano);

    printf("Seu signo eh: \n");

    if(mes == 1)
    {
        if (dia <= 20)
        {
            printf("Capricornio\n");

        }
        else
        {
            printf("Aquario\n");
        }
    }
    if(mes == 2)
    {
        if (dia <= 20)
        {
            printf("Aquario\n");

        }
        else
        {
            printf("Peixes\n");
        }
    }
    if(mes == 3)
    {
        if (dia <= 20)
        {
            printf("Peixes\n");

        }
        else
        {
            printf("Aries\n");
        }
    }
    if(mes == 4)
    {
        if (dia <= 20)
        {
            printf("Aries\n");

        }
        else
        {
            printf("Touro\n");
        }
    }
    if(mes == 5)
    {
        if (dia <= 20)
        {
            printf("Touro\n");

        }
        else
        {
            printf("Gemeos\n");
        }
    }
    if(mes == 6)
    {
        if (dia <= 20)
        {
            printf("Gemeos\n");

        }
        else
        {
            printf("Cancer\n");
        }
    }
    if(mes == 7)
    {
        if (dia <= 20)
        {
            printf("Cancer\n");

        }
        else
        {
            printf("Leao\n");
        }
    }
    if(mes == 8)
    {
        if (dia <= 20)
        {
            printf("Leao\n");

        }
        else
        {
            printf("Virgem\n");
        }
    }
    if(mes == 9)
    {
        if (dia <= 20)
        {
            printf("Virgem\n");

        }
        else
        {
            printf("Libra\n");
        }
    }
    if(mes == 10)
    {
        if (dia <= 20)
        {
            printf("Libra\n");

        }
        else
        {
            printf("Escorpiao\n");
        }
    }
    if(mes == 11)
    {
        if (dia <= 20)
        {
            printf("Escorpiao\n");

        }
        else
        {
            printf("Sagitario\n");
        }
    }
    if(mes == 12)
    {
        if (dia <= 20)
        {
            printf("Sagitario\n");

        }
        else
        {
            printf("Capricornio\n");
        }
    }
    printf(":D");
    //158 linhas :(
    return 0;
}
