#ifndef CASA_HPP
#define CASA_HPP

#include "Imovel.hpp"

class Casa : public Imovel{
protected:

    int numPavimentos;
    int numQuartos;
    int areaConstruida;
    int areaTerreno;

public:

    Casa(std::string tipo, std::string disponibilidade, float valor, int numPavimentos, int numQuartos, int areaConst, int areaTerreno) : 
        Imovel(tipo, disponibilidade, valor),
        numPavimentos(numPavimentos),
        numQuartos(numQuartos),
        areaConstruida(areaConst),
        areaTerreno(areaTerreno) {}

    void PrintInfos() override;

    ~Casa() override {
        std::cout << "Deletando Casa" << "\n";
    }
};

void Casa::PrintInfos(){

    std::cout << this->tipo << " para " << this->disponibilidade << ". " << this->numPavimentos << " pavimentos, " << this->numQuartos <<
    " quartos, " << this->areaTerreno << "m2 de área de terreno e " << this->areaConstruida << "m2 de área construída. R$ " <<
    this->valor << ".\n" ;
}

#endif