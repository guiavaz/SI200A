/*
Nome: Guilherme Alves Vaz
RA: 216843
Turma: SI200A
*/
#include <stdio.h>

int saoAnagramas(const char *palavra1, const char *palavra2) {
    int contagem1[26] = {0};
    int contagem2[26] = {0};

    //loop para contagem das ocorrências de letras na primeira palavra
    for (int i = 0; i < 20 && palavra1[i] != '\0'; i++) {
        contagem1[palavra1[i] - 'a']++;
    }

    //loop para contagem das ocorrências de letras na segunda palavra
    for (int i = 0; i < 20 && palavra2[i] != '\0'; i++) {
        contagem2[palavra2[i] - 'a']++;
    }

    //loop  para verificar se as contagens de ocorrências são iguais para todas as letras
    for (int i = 0; i < 26; i++) {
        if (contagem1[i] != contagem2[i]) {
            return 0;
        }
    }

    return 1;
}

int main() {
    char palavra1[21], palavra2[21];

    printf("Digite a primeira palavra: ");
    scanf("%s", palavra1);

    printf("Digite a segunda palavra: ");
    scanf("%s", palavra2);

    if (saoAnagramas(palavra1, palavra2)) {
        printf("As palavras sao anagramas.\n");
    } else {
        printf("As palavras nao sao anagramas.\n");
    }

    return 0;
}
