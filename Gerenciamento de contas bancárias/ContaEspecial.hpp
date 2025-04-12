#ifndef CONTAESPECIAL_HPP
#define CONTAESPECIAL_HPP

#include "ContaCorrente.hpp"

class ContaEspecial : public ContaCorrente{
public:
    ContaEspecial(){};
    ContaEspecial(std::string nomeCliente, int numConta, float salarioMensal) : 
        ContaCorrente(nomeCliente, numConta,salarioMensal)
        {this->definirLimite();}

    void definirLimite();
    void print();

    ~ContaEspecial() override {};
};

void ContaEspecial::definirLimite(){

    this->setLimte(this->getSalarioMensal() * 4);
}

void ContaEspecial::print(){
    std::cout << this->getNomeCliente() << ", cc: "<< this->getNumConta() <<", salário "<<this->getSalarioMensal() <<
    ", saldo total disponível: R$ "<<this->saldoTotalDisponivel() << "\n";
}

#endif