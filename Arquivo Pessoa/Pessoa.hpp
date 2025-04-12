#ifndef PESSOA_HPP
#define PESSOA_HPP

#include <iostream>

class Pessoa{

public:
    int tipo;
    std::string nome;
    std::string telefone;
    std::string CPF;

    Pessoa(int tipo, const std::string& nome, const std::string& telefone, const std::string& CPF = "") : tipo(tipo), nome(nome), telefone(telefone), CPF(CPF) {}

    void Print() const;

    ~Pessoa(){}
};

void Pessoa::Print() const {

    if(tipo == 1){
        std::cout << nome << ", tel: " << telefone << "\n";
    }else if(tipo == 2){
        std::cout << nome << ", tel: " << telefone << ", CPF: " << CPF << "\n";
    }else{
        return;
    }
}


#endif