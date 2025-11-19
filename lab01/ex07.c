// 7. Faça uma função que receba uma temperatura em graus Celsius e retorne-a convertida em graus Fahrenheit. A fórmula de conversão é: F=C∗(9.0/5.0)+32.0, sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.

#include <stdio.h>

double converteF(double cel);

int main()
{
    double cel;
    
    printf("Graus Celsius: ");
    scanf("%lf",&cel);

    printf("Temperatura em Fahrenheit: %.1lf",converteF(cel));
}

double converteF(double cel)
{
    return cel * (9.0/5.0) + 32.0;
}