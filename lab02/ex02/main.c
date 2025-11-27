#include <stdio.h>
#include "mstring.h"

int main()
{
    char a[100], b[100];

    printf("String A: ");
    fgets(a, sizeof(a), stdin) !=NULL;
    printf("String B: ");
    fgets(b, sizeof(b), stdin) !=NULL;

    printf("\nTamanho da string: %d\n", mstrlen(a));

    mstrcpy(b, a); //ta alterando o b e ferrando o resto do codigo
    printf("Copia da string: %s\n", b); 
    
    mstrcat(b, a); //ta concatenando o a e ferrando o resto do codigo
    printf("Concatenado: %s", a); 

    printf("<0 se a<b, 0 se igual, >0 se a>b: %d\n", mstrcmp(a, b));

    mstrupper(a);
    printf("String A maiuscula: %s", a);
}