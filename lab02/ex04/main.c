#include "pessoa.h"
#include <stdio.h>

int main()
{
    char nome[50];
    int idade;
    Pessoa p;

    printf("Nome do usuario: ");
    fgets(nome, sizeof(nome), stdin) !=NULL;
    printf("Idade do usuario: ");
    scanf("%d", &idade);

    p = criarPessoa(nome);
    p.idade = idade;

    mostrarPessoa(p);
}