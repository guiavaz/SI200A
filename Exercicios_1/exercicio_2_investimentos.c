/*
Nome: Guilherme Alves Vaz
RA: 216843
Turma: SI200A
*/

#include <stdio.h>

/* Função para calcular potencia sem a biblioteca math */
float power(float base, int exponente)
{
    float result = 1.0;
    for (int i = 0; i < exponente; i++)
    {
        result *= base;
    }
    return result;
}

int main()
{
    int tempo;
    float montante, capital;
    double taxa = 0.0;  // inicializando variável, pois estava retornando segmentation fault

    printf("Insira os dados solicitados:\n\n");

    printf("Tempo: ");
    scanf("%i", &tempo);

    printf("Capital investido: ");
    scanf("%f", &capital);

    printf("Taxa de juros ao ano: ");
    scanf("%lf", &taxa);

    /*
        Fórmula dos juros compostos:
        Montante = Capital * (1 + taxa)^tempo
    */
    float aux;
    float juros;

    taxa = taxa / 100.0 + 1.0;
    aux = power(taxa, tempo);
    montante = capital * aux;
    juros = montante - capital;

    printf("Montante final: %.2f\n", montante);
    printf("Juros: %.2f\n", juros);

    return 0;
}
