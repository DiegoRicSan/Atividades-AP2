// 12. Escreva uma função que receba um número inteiro maior do que zero e retorne a soma de todos os seus algarismos. Por exemplo, ao número 251 corresponderá o valor 8 (2 + 5 + 1). Se o número lido não for maior do que zero, o programa terminará com a mensagem “Número inválido”.

#include <stdio.h>
#include <math.h>

int somaAlg(int num);

int main()
{
    int num;

    printf("Insira o numero: ");
    scanf("%d", &num);

    printf("A soma dos algarismos desse numero eh: %d",somaAlg(num));
}

int somaAlg(int num)
{
    int valor, casas = 0, total = 0;

    for(valor = num; valor > 0;)
    {
        valor = valor / 10;
        casas++; // assim eu descubro a quantidade de algarismso que tem
    }

    for(int i = 1; i <= casas; i++)
    {    
    valor = num / pow(10, casas - i);
    total += valor;
    num -= valor * pow(10, casas - i);
    }
    
    return total;
}