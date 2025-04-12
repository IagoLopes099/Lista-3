#include <iostream>

#include "GerenciadorEleitores.hpp"

int main(){

    int n;
    std::cin >> n;
    std::cin.ignore();

    std::string nome, titulo;
    int idade;

    GerenciadorEleitores gerenciador;

    for(int i =0; i < n; i++){
        std::getline(std::cin, nome);
        std::cin >> idade;
        std::cin.ignore();
        std::getline(std::cin, titulo);

        gerenciador.Cadastrar(nome, idade, titulo);
    }

    gerenciador.verificaEleitores();

    return 0;
}