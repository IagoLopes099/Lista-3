#ifndef LIVRO_HPP
#define LIVRO_HPP

#include <iostream>

class Livro{
    std::string titulo;
    int totalPaginas;
    int quantidade;

public:
    Livro(std::string titulo, int totalPaginas) : titulo(titulo), totalPaginas(totalPaginas) {};

    const int getTotal() const;
    void Print() const ;
};

const int Livro::getTotal() const {

    return this->totalPaginas;
}

void Livro::Print() const {

    std::cout << this->titulo << ", páginas: " << this->totalPaginas <<  "\n";
}


#endif