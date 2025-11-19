// Crie uma função que recebe como parâmetro um número inteiro e devolve o seu dobro.

#include <stdio.h>

int dobro(int valor);

int main()
{
    int num;
    
    printf("Digite um numero: ");
    scanf("%d", &num);
    printf("O dobro do valor %d eh %d", num, dobro(num));
    return 0;
}

int dobro(int valor)
{
    return (valor * 2);
}
