#ifndef __fila_hpp__
#define __fila_hpp__

#include "musica.hpp"
#include <string>

typedef struct Node
{
    musica elemento;
    Node * proximo;
}Node;

typedef struct fila
{
    Node * cabeca;
    int tamanho;
}fila;

fila * new_fila();

Node * new_node(musica m);

void insere_fila(fila * f, Node * novo);

void insere_node(Node * head, Node * novo);

void remove_fila(fila * f);

void remove_node(Node * head);

void show_fila(fila * f);

void show_node(Node * head);

#endif