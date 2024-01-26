#include "fila.hpp"
#include "musica.hpp"
#include <iostream>
#include <string>

int main()
{
    fila * primeira = new_fila();
    int escolha;
    
    do
    {
        system("clear");
        std::cout << "=====================PobreFy=====================\n\n";
        std::cout << "Opcoes:\n(1) Criar/Inserir fila de reproducao\n(2) Exibir fila de reproducao\n(3) Excluir elemntos da fila\n(4) retornar\n";

        std::cin >> escolha;

        switch(escolha)
        {
            case 1:
            {  
                getchar();
                std::string artista;
                std::string caminho;
                std::string musica_nome;

               
                std::cout << "Nome :";
                getline(std::cin, musica_nome);
                std::cout << "Artista :";
                getline(std::cin, artista);
                std::cout << "Caminho :";
                getline(std::cin, caminho);

                Musica m = criar_musica(musica_nome, artista, caminho);

                Node * novo = new_node(m);

                insere_fila(primeira, novo);
                break;
            }    
            case 2:
                system("clear");
                show_fila(primeira);
                std::cout << "(1) Retornar\n";
                while(escolha != 1)
                {
                    std::cin >> escolha;
                }
                getchar();
                break;
            
            case 3:
                remove_fila(primeira);
            
            case 4:
                break;

            deafult:
                std::cout << "Opcao Invalida";
                break;
        }
    }while(escolha != 4 );

    return 0;
}