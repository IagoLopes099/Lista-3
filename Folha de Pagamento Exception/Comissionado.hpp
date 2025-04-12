#ifndef COMISSIONADO_HPP
#define COMISSIONADO_HPP

#include "Funcionario.hpp"

class Comissionado : public Funcionario{

    double vendasSemanais;
    double percentualComissao;

public:

    Comissionado(double vendasSemanais, double percentualComissao) :
        vendasSemanais(vendasSemanais),
        percentualComissao(percentualComissao) {};

    double CalcularSalario() override;
};

double Comissionado::CalcularSalario(){


    return vendasSemanais * percentualComissao;
}

#endif