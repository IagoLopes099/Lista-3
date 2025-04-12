#include <iostream>
#include "Estatistica.hpp"
#include "Pedido.hpp"
#include "Livro.hpp"
#include <string.h>


int main(){
    
    int quantPedidos, quantLivros, quantidade;
    float valorUnitario;
    std::string tituloLivro;

    Estatistica< Pedido > pedidos;
    Estatistica< Livro > livros;

    
    std::cin >> quantPedidos;

    for(int i = 0; i < quantPedidos; i++){

        std::cin >> valorUnitario;
        std::cin >> quantidade;
        Pedido pedido(valorUnitario, quantidade);
        pedidos.addEl(pedido);
    }

    std::cout << "Maior: ";
    pedidos.getEl(pedidos.indexOfMaior()).Print();
    std::cout << "Menor: ";
    pedidos.getEl(pedidos.indexOfMenor()).Print();
    std::cout << "Média: " << pedidos.media() << "\n";

    
    std::cin >> quantLivros;

    
    for(int i = 0; i < quantLivros; i++){
        std::cin.ignore();
        std::getline(std::cin, tituloLivro);
        std::cin >> quantidade;

        Livro livro(tituloLivro, quantidade);
        livros.addEl(livro);
    }

    
    std::cout << "Maior: ";
    livros.getEl(livros.indexOfMaior()).Print();
    std::cout << "Menor: ";
    livros.getEl(livros.indexOfMenor()).Print();
    std::cout << "Média: " << livros.media() << "\n";

    return 0;
}
