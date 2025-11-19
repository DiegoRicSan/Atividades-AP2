// 20. Escreva uma função para determinar a quantidade de números primos abaixo de N.

#include <stdio.h>

int primos(int n);

int main()
{
    int n;
    printf("Digite um valor: ");
    scanf("%d", &n);
    printf("Quantidade de numeros primos abaixo de %d: %d", n, primos(n));
}
int primos(int n)
{
    int i, count = 0, valor = n - 1;
    int primo = 0;
    for(; valor >= 2 ; valor--)
    {
        primo = 1;
        for(i = 2; i < valor; i++)
        {
            if(valor % i == 0)
            {
                primo = 0;
                break;
            }
        }
        if(primo == 1)
        {
            count++;
        }
    }
    return count;
}