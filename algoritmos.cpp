#include "algoritmos.hpp"
#include "musica.hpp"
#include "fila.hpp"
#include <iostream>
#include <string>
#include <cstdlib>

std::string* get_vetor_fila(fila * f)
{
    if(f->tamanho == 0)
    {
        return;
    }

    int size = f->tamanho;

    std::string* vetor = NULL;
    vetor = (std::string*)malloc(sizeof(std::string)*size);

    Node * no = f->cabeca;

    for(int i = 0; i < size; i++)
    {
        vetor[i] = no->elemento.Nome_musica;

        no = no->proximo;
    }

    return vetor;
}

void ordena_vetor_fila(std::string* vetor, fila * f);