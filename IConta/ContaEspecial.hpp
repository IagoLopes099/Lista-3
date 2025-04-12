#ifndef CONTAESPECIAL_HPP
#define CONTAESPECIAL_HPP

#include "Conta.hpp"

class ContaEspecial : public Conta{
public:

    ContaEspecial(std::string nome, int numConta, float salarioMensal) : Conta(nome, numConta, salarioMensal) {this->definirLimite();};

protected:

    void definirLimite() override;
};

void ContaEspecial::definirLimite(){

    this->limite = 3*(this->salarioMensal);
}


#endif