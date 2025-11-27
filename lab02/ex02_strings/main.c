#include <stdio.h>
#include "mstring.h"

int main()
{
    char a[100], b[100], c[200];

    printf("String A: ");
    fgets(a, sizeof(a), stdin) !=NULL;
    printf("String B: ");
    fgets(b, sizeof(b), stdin) !=NULL;

    // Tamanho da string
    printf("\nTamanho da string: %d\n", mstrlen(a));

    // Copiando a string A na string C
    mstrcpy(c, a);
    printf("Copia da string: %s", c); 

    // Concatenacao da string B e string C (para nao alterar a string A)
    mstrcat(c, b);
    printf("Concatenado: %s", c); 

    // Comparacao na tabela ASCII da string A e B
    printf("< 0 se a < b, 0 se igual, > 0 se a > b: %d\n", mstrcmp(a, b));

    // Transformar em maiuscula
    mstrupper(a);
    printf("String A maiuscula: %s", a);

    // Transformar em minuscula
    mstrlower(a);
    printf("String A minuscula: %s", a);

    // Contar vogais
    printf("Quantidade de vogais: %d\n", mcount_vogais(a));

    // Verificar se é palindromo
    printf("[1] eh palindromo\n[0] nao eh palindromo\n= %d\n", meh_palindromo(a));

    // String sem espaços
    mremove_espacos(a);
    printf("Sem espacos: %s", a);
}