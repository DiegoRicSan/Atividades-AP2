// 6. Faça uma função que receba 3 números inteiros como parâmetro, representando horas, minutos e segundos, e os converta em segundos.

#include <stdio.h>

int converteSegundos(int hor, int min, int seg);

int main()
{
    int hor, min, seg;

    printf("Digite a hora: ");
    scanf("%d",&hor);

    printf("Digite a minutos: ");
    scanf("%d",&min);

    printf("Digite os segundos: ");
    scanf("%d",&seg);
    
    printf("Equivale a %d segundos",converteSegundos(hor,min,seg));
}

int converteSegundos(int hor, int min, int seg)
{
    return (hor * 3600) + (min * 60) + seg; 
}