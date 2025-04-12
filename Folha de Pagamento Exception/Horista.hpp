#ifndef HORISTA_HPP
#define HORISTA_HPP

#include "Funcionario.hpp"

class Horista : public Funcionario{

    double salarioPorHora;
    double horasTrabalhadas;

public:
    Horista(double salarioHora, double horasTrabalhadas) : 
        salarioPorHora(salarioHora),
        horasTrabalhadas(horasTrabalhadas) {};

    double CalcularSalario() override;


};

double Horista::CalcularSalario(){

    if(horasTrabalhadas < 40){
        return (salarioPorHora * horasTrabalhadas) * 4;
    }
    
    double resto = horasTrabalhadas - 40;

    return (salarioPorHora * 40 + (salarioPorHora * (resto * 1.5))) * 4;
}

#endif