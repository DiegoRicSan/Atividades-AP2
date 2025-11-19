// 21. Crie uma função que receba como parâmetro um valor inteiro e gere como saída n linhas com pontos de exclamação, conforme o exemplo abaixo (para n = 5):

#include <stdio.h>

void exclamacao(int n);

int main()
{
    int n;
    printf("Quantidade de linhas: ");
    scanf("%d", &n);
    exclamacao(n);
}

void exclamacao(int n)
{
    int i, j;
    for(i = 1 ; i <= n ; i++)
    {
        for(j = 0; j < i ; j++)
        {
            printf("!");
        }
        printf("\n");
    }
}