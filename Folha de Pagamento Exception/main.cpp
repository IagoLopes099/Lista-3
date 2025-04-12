#include <iostream>

#include "SistemaGerenciaFolha.hpp"
#include "Horista.hpp"
#include "Comissionado.hpp"
#include "Assalariado.hpp"

int main(){

    double max, salario;
    std::cin >> max;
    

    int matricula;
    
    std::string nome;

    SistemaGerenciaFolha sistema(max);

    for(int i = 0; i< 3 ; i++){

        std::cin.ignore();
        std::getline(std::cin, nome);
        std::cin >> matricula;
        
        if(i == 0){

            std::cin >> salario;
            Assalariado *assalariado = new Assalariado(salario);
            assalariado->setNome(nome);
            assalariado->setMatricula(matricula);
            sistema.SetFuncionarios(assalariado);

        }else if( i == 1){

            double horasTrabalhadas, valorHora;

            std::cin >> valorHora;
            std::cin >> horasTrabalhadas;

            Horista *horista = new Horista(valorHora, horasTrabalhadas);
            horista->setNome(nome);
            horista->setMatricula(matricula);
            sistema.SetFuncionarios(horista);

        }else if(i == 2){
            double vendasSemanais, percentual;

            std::cin >> vendasSemanais;
            std::cin >> percentual;
            Comissionado *comissionado = new Comissionado(vendasSemanais, percentual);
            comissionado->setNome(nome);
            comissionado->setMatricula(matricula);
            sistema.SetFuncionarios(comissionado);
        }
    }

    std::cin.ignore();



    try{
        
        for(int i =0; i< 3; i++){
            try{
                std::getline(std::cin, nome);
                std::cout << sistema.consultaSalarioFuncionario(nome) << "\n";
            }catch(const FuncionarioNaoExiste& e){
                std::cout << e.what() << "\n";
            } 
        }

        std::cout << sistema.CalcularValorTotalFolha() << "\n";
    }catch(const OrcamentoEstouradoException& e){
        std::cout << e.what() << "\n";
    }
    

    return 0;
}