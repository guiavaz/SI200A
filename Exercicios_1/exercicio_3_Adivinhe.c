/*
Nome: Guilherme Alves Vaz
RA: 216843
Turma: SI200A
*/
#include <stdio.h>

int main()
{
    int numero = 10;
    int entrada;
    int i = 0; // inicializando variável, pois estava quebrando o código

    printf("Digite um numero entre 1 e 50:\n");
    scanf("%i", &entrada);

    while (i < 4)
    {
        if (entrada == numero)
        {
            printf("Voce acertou!\n");
            break;
        }
        else if (entrada < numero)
        {
            printf("A entrada eh menor que o numero\n");
            if (entrada + 3 == numero || entrada + 2 == numero || entrada + 1 == numero)
            {
                printf("Chegou perto!\n");
            }
            scanf("%i", &entrada);
        }
        else if (entrada > numero)
        {
            printf("A entrada eh maior que o numero\n");

            if (entrada - 3 == numero || entrada - 2 == numero || entrada - 1 == numero)
            {
                printf("Chegou perto!\n");
            }

            scanf("%i", &entrada);
        }
        i++;
    }

    return 0;
}
