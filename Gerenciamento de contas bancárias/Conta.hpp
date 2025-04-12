#ifndef CONTA_HPP
#define CONTA_HPP

#include <iostream>

class Conta{
public:
    Conta(){};
    Conta(std::string nomeCliente, int numConta) : 
        nomeCliente(nomeCliente),
        numConta(numConta){};

    virtual void sacar(float valor) = 0; //ABSTRATO PURO
    void depositar(int valor);
    virtual void print() = 0;

    std::string getNomeCliente() const {return this->nomeCliente;} 
    int getNumConta() const {return this->numConta;}
    float getSaldo() const {return this->saldo;}

    void setNomeCliente(const std::string nome){this->nomeCliente = nome;}
    void setNumConta(const int numConta){this->numConta = numConta;}
    void setSaldo(const float saldo);

    virtual ~Conta(){};
private:

    std::string nomeCliente;
    int numConta;
    float saldo;
};

void Conta::setSaldo(const float saldo){

    if(saldo < 0){
        return;
    }

    this->saldo = saldo;
}

void Conta::depositar(int valor){

    setSaldo(valor);    
}


#endif