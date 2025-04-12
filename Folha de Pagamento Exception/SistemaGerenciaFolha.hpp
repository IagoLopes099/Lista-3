#ifndef SISTEMA_GERENCIA_FOLHA_HPP
#define SISTEMA_GERENCIA_FOLHA_HPP

#include "Funcionario.hpp"
#include <vector>
#include "OrcamentoEstouradoException.hpp"
#include "FuncionarioNaoExisteException.hpp"

class SistemaGerenciaFolha{
    std::vector< Funcionario * > funcionarios;
    double valorMaximo;

public:
    SistemaGerenciaFolha(){};
    SistemaGerenciaFolha(double valorMaximo) : valorMaximo(valorMaximo) {};

    void SetFuncionarios(Funcionario *funcionario);
    double CalcularValorTotalFolha();
    double consultaSalarioFuncionario(std::string &nome);


};

void SistemaGerenciaFolha::SetFuncionarios(Funcionario *funcionario){

    //lol Muito facil isso
    funcionarios.push_back(funcionario);
}

double SistemaGerenciaFolha::CalcularValorTotalFolha(){

    double total = 0;

    for(auto f : funcionarios){
        
        total += f->CalcularSalario();
    }

    if(total > valorMaximo){
        throw OrcamentoEstouradoException(total);

    }

    return total;
}

double SistemaGerenciaFolha::consultaSalarioFuncionario(std::string &nome){

    for(auto f : funcionarios){

        if(nome == f->getNome()){
            return f->CalcularSalario();
        }
    }

    throw FuncionarioNaoExiste(nome);

}


#endif