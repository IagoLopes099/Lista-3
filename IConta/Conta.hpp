#ifndef CONTA_HPP
#define CONTA_HPP

#include "IConta.hpp"
#include <iostream>

class Conta : public IConta{
public:

    Conta(std::string nome, int numConta, float salarioMensal) : 
        nomeCliente(nome),
        numConta(numConta),
        salarioMensal(salarioMensal),
        saldo(0)
        {
            this->definirLimite();
        };

    ~Conta(){};

    
    float saldoTotalDisponivel();
    void sacar(float valor);
    void depoisitar(float valor);
    std::string getNome() const {return nomeCliente;}
    int getNumConta() const {return numConta;}
    float getSalario() const {return salarioMensal;}

protected:

    virtual void definirLimite();
    std::string nomeCliente;
    int numConta;
    float salarioMensal;
    float saldo;
    float limite;
};

float Conta::saldoTotalDisponivel(){ 

    return (this->saldo + this->limite);
}

void Conta::sacar(float valor){

    (valor <= saldoTotalDisponivel()) ? saldo-=valor : false;  
}

void Conta::depoisitar(float valor){

    this->saldo += valor;
}

void Conta::definirLimite(){

    this->limite = 2*(this->salarioMensal);
}

#endif