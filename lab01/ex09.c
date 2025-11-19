// 9. Faça uma função que receba a altura e o raio de um cilindro circular e retorne o volume do cilindro. O volume de um cilindro circular é calculado por meio da seguinte fórmula: V =π∗raio2∗altura, onde π = 3.141592.

#include <stdio.h>
#include <math.h>

double calculaVolume(double alt, double raio);

int main()
{
    double alt, raio;

    printf("Digite a altura: ");
    scanf("%lf",&alt);

    printf("Digite o raio: ");
    scanf("%lf",&raio);
    
    printf("Volume do cilindro circular: %lf",calculaVolume(alt, raio));
}

double calculaVolume(double alt, double raio) 
{
    return 3.141592 * pow(raio, 2) * alt; 
}