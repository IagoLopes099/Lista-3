#ifndef IMOBILIARIA_HPP
#define IMOBILIARIA_HPP

#include "Imovel.hpp"
#include <vector>

class Imobiliaria{
    std::vector< Imovel * > imoveis;
public:


    void addImovel(Imovel *imovel);
    void buscarImovel(std::string busca);

    void lerAtributos(std::string atributo);

    ~Imobiliaria(){

        std::cout << "Deletando Imobiliária" << "\n";

        for(auto i : imoveis){
            delete i;
        }

    };
};

void Imobiliaria::addImovel(Imovel *imovel){

    imoveis.push_back(imovel);
}

void Imobiliaria::buscarImovel(std::string buscar){

    for(auto i : imoveis){
        if(buscar == i->getTipo() || buscar == i->getDisponibilidade()){
            i->PrintInfos();
        }
    }
}

void Imobiliaria::lerAtributos(std::string atributo){

    buscarImovel(atributo);
}


#endif