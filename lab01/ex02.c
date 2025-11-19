// Faça uma função que receba a data atual (dia, mês e ano em inteiro) e exiba-a na tela no formato textual por extenso. Ex.: Data: 18/11/2022, Imprimir: 18 de novembro de 2022.

#include <stdio.h>

void data(int dia, int mes, int ano);

int main()
{
    int dia, mes, ano;

    printf("Dia: ");
    scanf("%d", &dia);
    printf("Mes: ");
    scanf("%d", &mes);
    printf("Ano: ");
    scanf("%d", &ano);
    
    data(dia,mes,ano);
}

void data(int dia, int mes, int ano)
{
    char meses[12][20] = {"Janeiro", "Fevereiro", "Marco", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};
    printf("%d de %s de %d\n", dia, meses[mes-1], ano);
    return;
}