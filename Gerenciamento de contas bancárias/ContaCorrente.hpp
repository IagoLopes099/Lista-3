#ifndef CONTACORRENTE_HPP
#define CONTACORRENTE_HPP

#include "Conta.hpp"

class ContaCorrente : public Conta{
public:
    ContaCorrente(){}
    ContaCorrente(std::string nomeCliente, int numConta, float salarioMensal) : 
        Conta(nomeCliente, numConta),
        salarioMensal(salarioMensal) {this->definirLimite();}

    void definirLimite();
    void sacar(float valor);
    float saldoTotalDisponivel();

    void print() override;

    float getSalarioMensal() const {return this->salarioMensal;}
    float getLimite() const {return this->limite;}

    void setSalarioMensal(float salarioMensal){this->salarioMensal = salarioMensal;}
    void setLimte(float limite){this->limite = limite;}

    ~ContaCorrente() override {}

protected:

    float salarioMensal;
    float limite;
};

void ContaCorrente::definirLimite(){

    this->setLimte(this->getSalarioMensal() * 2);
}

void ContaCorrente::sacar(float valor){

    if(valor > (this->getSaldo() + this->limite)){
        std::cout << "Saldo insuficiente" << "\n";
        return;
    }

    this->setSaldo(this->getSaldo() - valor);
}

float ContaCorrente::saldoTotalDisponivel(){

    return this->getSaldo() + this->getLimite();
}

void ContaCorrente::print(){

    std::cout << this->getNomeCliente() << ", cc: "<< this->getNumConta() <<", salário "<<this->getSalarioMensal() <<
    ", saldo total disponível: R$ "<<this->saldoTotalDisponivel() << "\n";
}

#endif