// 10. Faça uma função que receba dois números e retorne qual deles é o maior.

#include <stdio.h>

double maior(double num1, double num2);

int main()
{
    double num1, num2;
    
    printf("Digite o primeiro valor: ");
    scanf("%lf",&num1);

    printf("Digite o segundo valor: ");
    scanf("%lf",&num2);

    printf("O numero %lf eh maior",maior(num1, num2));
    
}

double maior(double num1, double num2)
{
    if(num1 > num2)
    {
        return num1;
    }
    
    else
    {
        return num2;
    }
}