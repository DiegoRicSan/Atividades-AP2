#include <stdio.h>
#include "conversor.h"

//• 1 – Converter Celsius → Fahrenheit • 2 – Converter Fahrenheit → Celsius • 0 – Sair

int main()
{
    int opc;
    float c, f;
    do
    {
        printf("[1] - Converter Celsius > Fahrenheit\n[2] - Converter Fahrenheit > Celsius\n[0] - Sair\n\n");
        scanf("%d", &opc);

        switch (opc)
        {
        case 1:
            printf("\nValor em Celsius: ");
            scanf("%f", &c);
            printf("\n%.1f C = %.1f F\n\n", c, celsius_fahrenheit(c));
            break;

        case 2:
            printf("\nValor em Fahrenheit: ");
            scanf("%f", &f);
            printf("\n%.1f F = %.1f C\n\n", f, fahrenheit_celsius(f));
            break;

        default:
            break;
        }
    } while (opc !=0);   
}