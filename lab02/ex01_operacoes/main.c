#include <stdio.h>
#include "operacoes.h"

int main()
{
    int a, b;
    char op; 
    
    do
    {  
        printf("[1] Soma\n[2] Subtracao\n[3] Multiplicacao\n[4] Divisao\n\n");
        scanf("%c", &op);
        
        printf("\nDigite o primeiro valor: ");
        scanf("%d", &a);
        printf("Digite o segundo valor: ");
        scanf("%d", &b);
    
        if (op == '1')
        {
            printf("\n%d + %d = %d", a, b, soma(a, b));
        }
        else if (op == '2')
        {
            printf("\n%d - %d = %d", a, b, subtrai(a, b));
        }
        else if (op == '3')
        {
            printf("\n%d * %d = %d", a, b, multiplica(a, b));
        }
        else if (op == '4')
        {
           printf("\n%d / %d = %d", a, b, divide(a, b));
        }
        else
        {
            printf("\nErro\n\n");
        }
    } while (op != '1' && op != '2' && op != '3' && op != '4');

}