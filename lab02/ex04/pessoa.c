#include <stdio.h>
#include "pessoa.h"
#include "string.h"

Pessoa criarPessoa(char nome[])
{
    Pessoa p;
    strcpy(p.nome, nome);
    return p;
}

void mostrarPessoa(Pessoa p)
{
    printf("\nNome: %s", p.nome);
    printf("Idade: %d\n", p.idade);
}   