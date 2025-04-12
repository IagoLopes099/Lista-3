#ifndef TERRENO_HPP
#define TERRENO_HPP

#include "Imovel.hpp"

class Terreno : public Imovel{
protected:
    int areaTerreno;

public:
    Terreno(std::string tipo, std::string disponibilidade, float valor, int areaTerreno) : 
        Imovel(tipo, disponibilidade, valor),
        areaTerreno(areaTerreno) {}

    void PrintInfos() override;

    ~Terreno() override {
        std::cout << "Deletando Terreno" << "\n";
    }
};

void Terreno::PrintInfos(){

    std::cout << this->tipo << " para " << this->disponibilidade << ". " << this->areaTerreno << "m2 de área de terreno. R$ " << this->valor << ".\n";
}

#endif