// 14. Faça uma função que receba a distância em Km e a quantidade de litros de gasolina consumidos por um carro em um percurso, calcule o consumo em Km/l e escreva uma mensagem de acordo com a tabela abaixo: 
// CONSUMO   |  (Km/l)   |   MENSAGEM 
// menor que |     8     | Venda o carro! 
// entre     |   8 e 14  | Econômico! 
// maior que |     14    | Super econômico!

#include <stdio.h>

int calculo(double km, double l);

int main()
{
    double km, l;

    printf("Distancia em kms: ");
    scanf("%lf", &km);

    printf("Gasolina consumida: ");
    scanf("%lf", &l);
    
    switch (calculo(km, l))
    {
    case 0:
        printf("Venda o carro!");
        break;
    case 1:
        printf("Economico!");
        break;
    case 2:
        printf("Super economico!");
        break;
    default:
        printf("Erro, valor invalido");
        break;
    }
}

int calculo(double km, double l)
{
    if(km/l < 8)
    {
        return 0;
    }
    else if(km/l >=8 && km/l <=14)
    {
        return 1;
    }
    else if(l == 0)
    {
        return -1;
    }
    else
    {
        return 2;
    }
}