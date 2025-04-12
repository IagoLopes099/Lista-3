#ifndef ELEITOR_HPP
#define ELEITOR_HPP

#include <iostream>

class Eleitor{
private:
    std::string nome;
    int idade;
    std::string tituloDeEleitor;
public:
    Eleitor(){};
    Eleitor(std::string nome, int idade, std::string titulo) : nome(nome), idade(idade), tituloDeEleitor(titulo) {};

    std::string getNome() const {return nome;}
    int getIdade() const {return idade;}

    void setNome(const std::string nome){ this->nome = nome;}
    void setIdade(const int idade){this->idade = idade;}

    
};



#endif