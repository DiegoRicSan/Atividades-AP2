// 15. Crie um programa que receba três valores (obrigatoriamente maiores que zero), representando as medidas dos três lados de um triângulo. Elabore funções para: 
// a) Determinar se eles lados formam um triângulo, sabendo que: 
// 1. O comprimento de cada lado de um triângulo é menor do que a soma dos outros dois lados. 
// b) Determinar e mostrar o tipo de triângulo, caso as medidas formem um triângulo. Sendo que: 
// 1. Chama-se equilátero o triângulo que tem três lados iguais; 
// 2 Denominam-se isósceles o triângulo que tem o comprimento de dois lados iguais; 
// 3 Recebe o nome de escaleno o triângulo que tem os três lados diferentes.

#include <stdio.h>

int ehTriangulo(double lado1, double lado2, double lado3);
int qualTriangulo(double lado1, double lado2, double lado3);

int main()
{
    double lado1, lado2, lado3;
    printf("Medida do lado 1: ");
    scanf("%lf", &lado1);
    printf("Medida do lado 2: ");
    scanf("%lf", &lado2);
    printf("Medida do lado 3: ");
    scanf("%lf", &lado3);
    if(ehTriangulo(lado1, lado2, lado3) == 0)
    {
        printf("Nao eh triangulo");
    }
    else
    {
        if(qualTriangulo(lado1, lado2, lado3) == 0)
        {
            printf("O triangulo eh equilatero");
        }
        else if(qualTriangulo(lado1, lado2, lado3) == 1)
        {
            printf("O triangulo eh isosceles");
        }
        else
        {
            printf("O triangulo eh escaleno");
        }
    }
}

int ehTriangulo(double lado1, double lado2, double lado3)
{
    if(lado1 < (lado2 + lado3) && lado2 < (lado1 + lado3) && lado3 < (lado1 + lado2))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int qualTriangulo(double lado1, double lado2, double lado3)
{
    if(lado1 == lado2 && lado2 == lado3)
    {
        return 0;
    }
    else if(lado1 == lado2 || lado2 == lado3 || lado1 == lado3)
    {
        return 1;
    }
    else
    {
        return 2;
    }
}