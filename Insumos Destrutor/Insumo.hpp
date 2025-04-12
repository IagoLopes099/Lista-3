#ifndef INSUMO_HPP
#define INSUMO_HPP

#include <iostream>

class Insumo{
protected:
    std::string nome;
    std::string dtVencimento;
    std::string nomeFabricante;
    int tipoInsumo;
    int quantidade;
    int valorUnitario;
    
public:
    Insumo(std::string nome, std::string dtvencimento, std::string nomeFabricante, int tipoInsumo, int quant, int valorUni) : 
        nome(nome),
        dtVencimento(dtVencimento),
        nomeFabricante(nomeFabricante),
        tipoInsumo(tipoInsumo),
        quantidade(quant),
        valorUnitario(valorUni) {}

    virtual ~Insumo(){
        std::cout << "Deletando Insumos" << "\n";
    }
};


#endif