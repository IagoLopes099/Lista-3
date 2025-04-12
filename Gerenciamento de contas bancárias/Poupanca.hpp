#ifndef POUPANCA_HPP
#define POUPANCA_HPP

#include "Conta.hpp"

class Poupanca : public Conta{
public:
    Poupanca(){}
    Poupanca(std::string nomeCliente, int numConta) : 
        Conta(nomeCliente, numConta) {}

    float render(float taxaRendimento);
    //void sacar(float valor);
    void sacar(float valor) override; 
    void print() override;

    float getVariacao() {return this->variacao;}
    float getTaxaRendimento() const {return this->taxaRendimento;}

    void setVariacao(){
        this->variacao = (this->getSaldo() * getTaxaRendimento());
    }
    void setTaxaRendimento(float taxarRendimento){this->taxaRendimento = taxaRendimento;}

    ~Poupanca() override {};
private:
    float variacao;
    float taxaRendimento;

};

float Poupanca::render(float taxaRedimento){
    this->setTaxaRendimento(taxaRedimento);
    this->setVariacao();
    this->setSaldo( this->getSaldo() + (taxaRedimento * this->getSaldo()));
    return getVariacao();
}

void Poupanca::sacar(float valor){

    if(valor > this->getSaldo()){
        std::cout << "Saldo insuficiente" << "\n";
        return;
    }

    this->setSaldo(this->getSaldo() - valor);
}

void Poupanca::print(){
    std::cout << this->getNomeCliente() << ", cc: "<< this->getNumConta()  <<", saldo total disponível: R$ "<< (this->getSaldo()+(this->getSaldo()*0.006)) << "\n";
}

#endif