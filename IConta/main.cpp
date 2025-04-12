#include <iostream>
#include "ContaEspecial.hpp"
#include <vector>

int main(){

    Conta *conta;

    std::string nome;
    int numConta;
    float salarioMensal;
    float sacar, depositar;

    std::getline(std::cin , nome);
    std::cin >> numConta;
    std::cin >> salarioMensal;
    std::cin >> depositar;
    std::cin >> sacar;
    

    conta = new Conta(nome, numConta, salarioMensal);
    conta->depoisitar(depositar);
    conta->sacar(sacar);

    std::cin.ignore();
    std::getline(std::cin , nome);
    std::cin >> numConta;
    std::cin >> salarioMensal;
    std::cin >> depositar;
    std::cin >> sacar;
    
    std::cout << conta->getNome() << ", cc: " << conta->getNumConta() << ", salário " << conta->getSalario() <<
    ", saldo total disponível: R$ " << conta->saldoTotalDisponivel() << "\n";

    delete conta;

    conta = new ContaEspecial(nome, numConta, salarioMensal);

    conta->depoisitar(depositar);
    conta->sacar(sacar);
    
    std::cout << conta->getNome() << ", cc: " << conta->getNumConta() << ", salário " << conta->getSalario() <<
    ", saldo total disponível: R$ " << conta->saldoTotalDisponivel() << "\n";

    delete conta;

    return 0;
}