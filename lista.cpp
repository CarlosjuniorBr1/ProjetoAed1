#include <iostream>
#include <cstdlib>
#include <string>
#include "musica.hpp"
#include "lista.hpp"


//criando novo node
Node * criar_node(Musica musica){
    Node * novo = NULL;
    novo = (Node*)malloc(sizeof(Node));
    novo->musica = musica;
    novo->proximo = NULL;
    return novo;
}
//cria a playlist(lista)
Playlist playlist(std::string titulo){
    Playlist playlist;
    //playlist = (Playlist*) malloc(sizeof(Playlist));
    playlist.inicio = NULL;
    playlist.titulo = titulo;
    playlist.tamanho = 0;
    return playlist;
}
//insert musica no inico
void inserir_no_inicio(Playlist * playlist, Musica musica){
    Node * novo = criar_node(musica);
    if(novo){
        novo->proximo = playlist->inicio;
        playlist->inicio = novo;
        playlist->tamanho +=1;
        std::cout<<"\u2605 Musica inserida com sucesso\n";
    }else{
        std::cout<<"infelizmente ocorreu um erro ao inserir\n";
    }
}
//insert musica no fim;
void inserir_no_fim(Playlist * playlist, Musica  musica){
    Node * novo = criar_node(musica);
    Node * aux;
    if(novo){
        //é o primeiro
        if(playlist->inicio == NULL){
            playlist->inicio = novo;
            playlist->tamanho+=1;
        }else{
            aux = playlist->inicio; 
            while(aux->proximo){
                aux = aux->proximo;
            }
            aux->proximo = novo;
            playlist->tamanho++;
            std::cout<<"\u2605 Musica inserida com sucesso\n";

        }

    }else{
        std::cout<<"infelizmente ocorreu um erro ao inserir\n";
    }
}   
//insert musica no meio
void inseir_no_meio(Playlist * playlist, Musica musica, std::string nome_musica){
    Node * novo = criar_node(musica);
    Node * aux;
    if(novo){
        //é o primeiro
        if(playlist->inicio == NULL){
            novo->proximo = NULL;
            playlist->inicio = novo;
            playlist->tamanho+=1;
        }
        else{
            aux = playlist->inicio;
            while(aux->musica.Nome_musica != nome_musica && aux->proximo){
              aux =  aux->proximo;
            }

            novo->proximo = aux->proximo;
            aux->proximo = novo;
            playlist->tamanho+=1;
        }
    }
}
//deleta playlist
void deleta_playlist(Playlist * playlist){}

//exibindo playlist
void mostrando_playlist(Playlist playlist){
   
   Node *no  = playlist.inicio;
   std::cout<<"Listando músicas da playlist: "<<playlist.titulo;
   system("clear");
   std::cout<<"\n--------------------------------------------------------------------------------------------\n\n";
  while(no){
    std::cout<<"\u2606 "<<no->musica.Nome_musica<<" "<<no->musica.Nome_artista<<"\n";
    no = no->proximo;
  }

  std::cout<<"\n\n";
}