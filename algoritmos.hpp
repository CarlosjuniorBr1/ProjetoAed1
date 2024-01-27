#ifndef __algoritmos_hpp__
#define __algoritmos_hpp__

#include "musica.hpp"
#include "fila.hpp"
#include <filesystem>
#include <string>

std::string* get_vetor_fila(fila * f);

void merge_fila(std::string* vetor, fila * f);

#endif
