// 11. Elabore uma função que receba três notas de um aluno como parâmetros e uma letra. Se a letra for A, a função deverá calcular a média aritmética das notas do aluno; se for P, deverá calcular a média ponderada, com pesos 5, 3 e 2.

#include <stdio.h>

double media(double nota1, double nota2, double nota3, char letra);

int main()
{
    double nota1, nota2, nota3;
    char letra;

    printf("Digite a primeira nota: ");
    scanf("%lf", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%lf", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%lf", &nota3);

    printf("A ou P: ");
    scanf(" %c",&letra);

    printf("\nA media do aluno eh: %.1lf", media(nota1, nota2, nota3, letra));
}

double media(double nota1, double nota2, double nota3, char letra)
{
    if(letra == 'A')
    {
        return (nota1 + nota2 + nota3) / 3;
    }

    else if(letra == 'P')
    {
        return ((nota1 * 5) + (nota2 * 3) + (nota3 * 2)) / (5 + 3 + 2);
    }
    
    else
    {
        return 0;
    }
}