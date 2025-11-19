// 17. Faça uma função que receba dois números inteiros positivos por parâmetro e retorne a soma dos N números inteiros existentes entre eles.

#include <stdio.h>

int somaN(int num1, int num2);

int main()
{
    int num1, num2;
    printf("Digite o primeiro valor: ");
    scanf("%d",&num1);
    printf("Digite o segundo valor: ");
    scanf("%d",&num2);
    printf("A soma dos valores entre %d e %d eh: %d", num1, num2, somaN(num1, num2));
}

int somaN(int num1, int num2)
{
    int count, soma = 0, lim;
    if(num1 > num2)
    {
        count = num2;
        lim = num1;
    }
    else
    {
        count = num1;
        lim = num2;
    }
    for(count += 1;count < lim; count++)
    {
        soma += count;
    }
    return soma;
}
