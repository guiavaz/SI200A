/*
Nome: Guilherme Alves Vaz
RA: 216843
Turma: SI200A
*/

#include <stdio.h>

int main()
{
    float A_preco, B_preco, C_preco;

    printf("Fornecedores disponíveis:\nFornecedor A\nFornecedor B\nFornecedor C\n\n");
    printf("Digite o preco de cada fornecedor, respectivamente e pressione Enter:\n");

    scanf("%f", &A_preco);
    scanf("%f", &B_preco);
    scanf("%f", &C_preco);

    if (A_preco < B_preco && A_preco < C_preco)
    {
        printf("Menor preco eh do fornecedor A: %.2f\n", A_preco);

        if (B_preco > C_preco)
        {
            printf("Maior preco eh do fornecedor B: %.2f\n", B_preco);
        }
        else
        {
            printf("Maior preco eh do fornecedor C: %.2f\n", C_preco);
        }
    }
    else if (B_preco < A_preco && B_preco < C_preco)
    {
        printf("Menor preco eh do fornecedor B: %.2f\n", B_preco);

        if (A_preco > C_preco)
        {
            printf("Maior preco eh do fornecedor A: %.2f\n", A_preco);
        }
        else
        {
            printf("Maior preco eh do fornecedor C: %.2f\n", C_preco);
        }
    }
    else
    {
        printf("Menor preco eh do fornecedor C: %.2f\n", C_preco);

        if (A_preco > B_preco)
        {
            printf("Maior preco eh do fornecedor A: %.2f\n", A_preco);
        }
        else
        {
            printf("Maior preco eh do fornecedor B: %.2f\n", B_preco);
        }
    }

    return 0;
}
