// 16. Faça uma função chamada desenha_linha. Ele deve desenhar uma linha na tela usando uma sequência de símbolos de igual (Ex.: ========). A função recebe por parâmetro quantos sinais de igual serão mostrados.

#include <stdio.h>

void desenha_linhas(int quant);

int main()
{
    int quant;
    printf("Quantos sinais: ");
    scanf("%d", &quant);
    desenha_linhas(quant);
}

void desenha_linhas(int quant)
{
    for(;quant > 0; quant--)
    {
        printf("=");
    }
}