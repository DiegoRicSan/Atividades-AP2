// Faça uma função para verificar se um número é positivo ou negativo. Sendo que o valor de retorno será 1 se positivo, -1 se negativo e 0 se for igual a 0.

#include <stdio.h>

int verif(int val);

int main()
{
    int num;

    printf("Insira o valor: ");
    scanf("%d",&num);
    
    printf("%d",verif(num));
}

int verif(int val)
{
    if(val > 0)
    {
        return 1;
    }
    else if(val < 0)
    {
        return -1;
    }
    return 0;
}