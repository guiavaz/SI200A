/*
Nomes: Guilherme Alves Vaz
RA: 216843
Nome:Patrícia Guimarães
RA: 186451
Turma: SI200A
*/
#include<stdio.h>

void soma_produto (int a, int b, int *soma, int *produto)
{
    *soma = a + b;
    *produto = a * b;
}

int main ()
{
    int s=0, p=0;

    soma_produto(2, 5, &s, &p);

    printf("Soma %d Produto %d", s, p);

    return 0;
}
