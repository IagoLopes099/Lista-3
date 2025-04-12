#include <iostream>

#include "LocalController.hpp"
#include "EPI.hpp"
#include "Medicamento.hpp"
#include "Vacina.hpp"

int main() {
    LocalController* local = new LocalController;

    
    std::string nome, dtVencimento, nomeFabricante, tipoVirus, dosagem, administracao, disponibilizacao, tipo, descricao;;
    int quantidade, valorUnitario, quantidadeDoses, intervalo;

    std::getline(std::cin, nome);
    std::cin >> quantidade >> valorUnitario;
    std::cin.ignore();
    std::getline(std::cin, dtVencimento);
    std::getline(std::cin, nomeFabricante);
    std::getline(std::cin, tipoVirus);
    std::cin >> quantidadeDoses >> intervalo;
    std::cin.ignore();

    local->addInsumoArr(new Vacina(nome, dtVencimento, nomeFabricante, 1, quantidade, valorUnitario, tipoVirus, quantidadeDoses, intervalo));
    local->addInsumoVec(new Vacina(nome, dtVencimento, nomeFabricante, 1, quantidade, valorUnitario, tipoVirus, quantidadeDoses, intervalo));
    

    std::getline(std::cin, nome);
    std::cin >> quantidade >> valorUnitario;
    std::cin.ignore();
    std::getline(std::cin, dtVencimento);
    std::getline(std::cin, nomeFabricante);
    std::getline(std::cin, dosagem);
    std::getline(std::cin, administracao);
    std::getline(std::cin, disponibilizacao);

    local->addInsumoArr(new Medicamento(nome, dtVencimento, nomeFabricante, 2, quantidade, valorUnitario, dosagem, administracao, disponibilizacao));
    local->addInsumoVec(new Medicamento(nome, dtVencimento, nomeFabricante, 2, quantidade, valorUnitario, dosagem, administracao, disponibilizacao));
     

    std::getline(std::cin, nome);
    std::cin >> quantidade >> valorUnitario;
    std::cin.ignore();
    std::getline(std::cin, dtVencimento);
    std::getline(std::cin, nomeFabricante);
    std::getline(std::cin, tipo);
    std::getline(std::cin, descricao);

    local->addInsumoArr(new EPI(nome, dtVencimento, nomeFabricante, 3, quantidade, valorUnitario, tipo, descricao));
    local->addInsumoVec(new EPI(nome, dtVencimento, nomeFabricante, 3, quantidade, valorUnitario, tipo, descricao));
    

    delete local;
    return 0;
}
//0 INDEFINIDO
//1 VACINA
//2 MEDICAMENTO
//3 EPI