// 13. Faça uma função que receba dois valores numéricos e um símbolo. Este símbolo representará a operação que se deseja efetuar com os números. Se o símbolo for ‘+’ deverá ser realizada uma adição, se for ‘–‘ uma subtração, se for ‘*’ uma multiplicação e se for ‘/’ será efetuada uma divisão.

#include <stdio.h>

double resultado(double num1, double num2, char oper);

int main()
{
    double num1, num2;
    char oper;

    printf("Digite o primeiro valor: ");
    scanf("%lf", &num1);

    printf("Digite o segundo valor: ");
    scanf("%lf", &num2);

    printf("Operacao: ");
    scanf(" %c", &oper);

    printf("%.2lf %c %.2lf = %.2lf", num1, oper, num2, resultado(num1, num2, oper));
}

double resultado(double num1, double num2, char oper)
{
    switch (oper)
    {
    case '+':
        return num1 + num2;
        break;
    case '-':
        return num1 - num2;
        break;
    case '/':
        return num1 / num2;
        break;
    case '*':
        return num1 * num2;
        break;
    default:
        return '0';
        break;
    }
}
