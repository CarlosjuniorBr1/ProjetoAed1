#include "fila.hpp"
#include "musica.hpp"
#include <string>
#include <cstdlib>
#include <iostream>

fila * new_fila()
{
    fila * f = NULL;
    f = (fila*)malloc(sizeof(fila));

    f->cabeca = NULL;
    f->tamanho = 0;

    return f;
}

Node * new_node(musica m)
{
    Node * n = NULL;
    n = (Node*)malloc(sizeof(Node));

    n->elemento = m;
    n->proximo = NULL;

    return n;
}

void insere_fila(fila * f, Node * novo)
{
    if(!f)
    {
        return;
    }

    if(f->tamanho == 0)
    {
        f->cabeca = novo;
        f->tamanho++;
        return;
    }

    insere_node(f->cabeca, novo);

    f->tamanho++;

    return;
}

void insere_node(Node * head, Node * novo)
{
    if(head->proximo == NULL)
    {
        head->proximo = novo;
        novo->proximo = NULL;
        return;
    }

    insere_node(head->proximo, novo);
    
}

void remove_fila(fila * f)
{
    if(f->tamanho == 0)
    {
        std::cout << "A sua Fila ja esta vazia!\n";
        return;
    } else
    {
        Node * atual = f->cabeca;

        f->cabeca = f->cabeca->proximo;

        std::cout << atual->elemento.Nome_musica <<" Removido com Sucesso!\n";

        free(atual);

        f->tamanho--;

        if (f->tamanho == 0)
        {
            f->cabeca = NULL;
        }
    }
}

void remove_node(Node * head)
{
    if(head->proximo == NULL)
    {
        free(head);
        return;
    }

    Node * seguinte = head->proximo;
    free(head);
    remove_node(seguinte);
}

void show_fila(fila * f)
{
    if(f->tamanho == 0)
    {
        std::cout << "Que pena, parece que sua Lista esta vazia\nConsidere adicionar o melhor som para o seu momento\n";
        return;
    }

    std::cout << "Sua lista possui: " << f->tamanho << " Musicas\n";

    show_node(f->cabeca);
}

void show_node(Node * head)
{
    std::cout<<"========================================\n";
    std::cout << "\u2606 " << head->elemento.Nome_musica << "\nPor: " << head->elemento.Nome_artista << "\n";

    if(head->proximo)
    {
        show_node(head->proximo);
        return;
    }

    std::cout<<"========================================\n";

}