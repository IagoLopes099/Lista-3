#include <iostream>
//#include "ContaCorrente.hpp"
#include "Poupanca.hpp"
#include "ContaEspecial.hpp"


int main(){

    Conta **contas = new Conta*[3];

    std::string nome;
    int numConta;
    float salario;
    float deposito;
    float saque[3];



    for(int i = 0; i < 3; i++){

        std::getline(std::cin, nome);
        std::cin >> numConta;
        
        if(i == 0){
            std::cin >> salario;
            std::cin >> deposito;
            std::cin >> saque[0];
            std::cin.ignore();
            contas[i] = new ContaCorrente(nome,numConta,salario);
            contas[i]->depositar(deposito);

        }else if(i == 1){
            std::cin >> salario;
            std::cin >> deposito;
            std::cin >> saque[1];
            std::cin.ignore();
            contas[i] = new ContaEspecial(nome,numConta,salario);
            contas[i]->depositar(deposito);
        }else{

            std::cin >> deposito;
            std::cin >> saque[2];
            //contas[i]->depositar(deposito);
            Poupanca *ptrPoupanca = new Poupanca(nome, numConta);
            ptrPoupanca->depositar(deposito);
            //ptrPoupanca->render(0.006);
            std::cout <<"\n" <<ptrPoupanca->getTaxaRendimento()<< ptrPoupanca->getVariacao()<<"\n"; 
            contas[i] = ptrPoupanca;
        }
        
        
    }

    for(int i =0; i< 3 ; i++){
        contas[i]->sacar(saque[i]);
        contas[i]->print();
    }

    for(int i =0 ; i< 3; i++){
        delete contas[i];
    }

    delete [] contas;

    return 0;
}