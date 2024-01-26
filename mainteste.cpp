#include <iostream>
#include "lista.hpp"
#include "musica.hpp"
#include <string>

int main(){

    std:: string mn = "Cruel Summer";
    std:: string art = "Taylor Swift";
    std:: string cam = "hits";

    Playlist p1 = playlist("PopMusic");
    Musica m1 = criar_musica(mn,art,cam);
    
     mn = "Starboy";
     art = "The Weeknd";
     cam = "hits";

    Musica m2 = criar_musica(mn,art,cam);
    //inserir_no_inicio(&p1,m1);
    //inserir_no_inicio(&p1,m2);
    inserir_no_fim(&p1,m2);
    mostrando_playlist(p1);
    
    //std::cout<<p1->inicio->musica->Nome_musica<<"\n";
    //std::cout<<m2.Nome_musica<<"\n";

    //mostrando_playlist(p1);
}