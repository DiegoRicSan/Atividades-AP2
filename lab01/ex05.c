// 5. Faça uma função e um programa de teste para o cálculo do volume de uma esfera. Sendo que o raio é passado por parâmetro.

#include <stdio.h>
#include <math.h>

double calculoVolume(double raio);

int main()
{
    double raio;

    printf("Raio da esfera: ");
    scanf("%lf", &raio);

    printf("O volume dessa esfera eh: %lf",calculoVolume(raio));
}

double calculoVolume(double raio)
{
    return (pow(raio, 3) * 3.141592 * 4) / 3;
}