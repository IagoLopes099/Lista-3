#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>

class Funcionario{

    std::string nome;
    int matricula;
    //float salario;

public:

    virtual double CalcularSalario() = 0;

    std::string getNome() const {return nome;}
    int getMatricula() const {return matricula;}
    //float getSalario() const {return salario;}

    void setNome(std::string nome){ this->nome = nome;}
    void setMatricula(int matricula){this->matricula = matricula;}

};


#endif