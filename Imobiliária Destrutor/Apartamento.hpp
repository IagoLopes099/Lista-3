#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP

#include "Imovel.hpp"   

class Apartamento : public Imovel{
protected:
    
    int andar;
    int numQuartos;
    float valorCondominio;
    int vagasGaragem;
    int area;

public:
    Apartamento(std::string tipo, std::string disponibilidade, float valor, int andar,int numQuartos, float valorCondominio, 
        int vagasGaragem, int area) : 
        Imovel(tipo, disponibilidade, valor),
        andar(andar),
        numQuartos(numQuartos),
        valorCondominio(valorCondominio),
        vagasGaragem(vagasGaragem),
        area(area) {}

    void PrintInfos() override;
    
    ~Apartamento() override {
        std::cout << "Deletando Apartamento" << "\n";
    }
};

void Apartamento::PrintInfos(){

    std::cout << this->tipo << " para " << this->disponibilidade << ". " << this->area << "m2 de área, " << this->numQuartos << " quartos, " <<
    this->andar << " andar(es), " << this->valorCondominio << " de condomínio, " << this->vagasGaragem << " vaga(s) de garagem. R$ " << this->valor <<
    ".\n";    
}

#endif