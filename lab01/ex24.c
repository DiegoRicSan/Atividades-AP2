/* 24. Escreva uma função que gera um triângulo de altura e lados n e base 2*n-1. Por exemplo, a saída para n = 6 seria:
       *    
      ***      
     *****    
    *******  
   ********* 
  ***********                                              */

#include <stdio.h>

void triangulo(int n);

int main()
{
    int n;
    printf("Tamanho do triangulo: ");
    scanf("%d", &n);
    triangulo(n);
}

void triangulo(int n)
{
    int i, j, k, count = n, ast = 1;
    for (i = count ; i > 0 ; i--)
    {
        for (j = 0; j < i - 1 ; j++)
        {
            if (j < i)
            {
                printf(" ");
            }
            
        }
        for (k = 0; k < ast; k++)
        {
            printf("*");
        }
        ast += 2;
        printf("\n");
    }
}