// 8. Sejam a e b os catetos de um triângulo, onde a hipotenusa é obtida pela equação: hipotenusa=√a2+b2. Faça uma função que receba os valores de a e b e calcule o valor da hipotenusa através da equação.

#include <stdio.h>
#include <math.h>

double hipotenusa(double a, double b);

int main()
{
    double a, b;

    printf("Digite o valor de A: ");
    scanf("%lf",&a);

    printf("Digite o valor de B: ");
    scanf("%lf",&b);
    
    printf("Hipotenusa: %lf",hipotenusa(a,b));
}

double hipotenusa(double a, double b)
{
    return sqrt(((pow(a,2)) + (pow(b,2))));
}