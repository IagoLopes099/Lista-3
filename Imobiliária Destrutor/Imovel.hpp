#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>

class Imovel{
protected:

    std::string tipo;
    std::string disponibilidade;
    float valor;

public:

    const std::string &getTipo() const {return this->tipo;}
    const std::string &getDisponibilidade() const {return this->disponibilidade;}

    Imovel(std::string tipo, std::string disponibilidade, float valor) : 
        tipo(tipo),
        disponibilidade(disponibilidade),
        valor(valor) {}

    virtual ~Imovel(){
        std::cout << "Deletando Imovel" << "\n";
    }

    virtual void PrintInfos() = 0;

};

#endif