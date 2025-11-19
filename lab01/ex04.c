// Faça uma função para verificar se um número é um quadrado perfeito. Um quadrado perfeito é um número inteiro não negativo que pode ser expresso como o quadrado de outro número inteiro. Ex.: 1, 4, 9

#include <stdio.h>
#include <math.h>

int quadrado(int num);

int main()
{
    int num;

    printf("Digite um valor: ");
    scanf("%d",&num);
    
    if (quadrado(num) == 1)
    {
        printf("Eh um quadrado perfeito");
    }

    else if (quadrado(num) == 0)
    {
        printf("Nao eh um quadrado perfeito");
    }
}

int quadrado(int num)
{
    if(num < 0)
    {
        return 0;
    }

    if(num >= 0)
    {
        double raiz;
        raiz = sqrt(num);

        if((int)raiz * (int)raiz == num)
        {
            return 1;
        }
        
        else
        {
            return 0;
        }
    }
    return 0;
}