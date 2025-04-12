#ifndef ASSALARIADO_HPP
#define ASSALARIADO_HPP

#include "Funcionario.hpp"

class Assalariado : public Funcionario {

    double salario;

public:
    Assalariado(double salario): salario(salario) {}

    double CalcularSalario() override;


};

double Assalariado::CalcularSalario(){

    return salario;
}

#endif