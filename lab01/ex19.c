// 19. Faça uma função que receba um número inteiro positivo n e calcule o seu fatorial, n!.

#include <stdio.h>

int fatorial(int n);

int main()
{
    int n;
    printf("Digite o valor: ");
    scanf("%d", &n);
    if(n < 0)
    {
        printf("Invalido, valor deve ser positivo");
    }
    else
    {
        printf("%d! = %d", n, fatorial(n));
    }
}

int fatorial(int n)
{
    int total = 1; 
        for(; n > 0; n--)
        {
            total *= n;
        }
    return total;
}