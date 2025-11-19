// 18. Faça uma função que receba por parâmetro dois valores inteiros x e z. Calcule e retorne o resultado de xz para o programa principal. Atenção não utilize nenhuma função pronta de exponenciação.

#include <stdio.h>

int potencia(int x, int z);

int main()
{
    int x, z;
    printf("Digite o primeiro valor: ");
    scanf("%d", &x);
    printf("Digite o segundo valor: ");
    scanf("%d", &z);
    printf("%d^%d = %d", x, z, potencia(x, z));
}

int potencia(int x, int z)
{
    int count, total = 1;
    for(count = 1; count <= z; count++)
    {
        total *= x;
    }  
    return total;
}