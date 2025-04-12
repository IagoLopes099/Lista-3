#ifndef EPI_HPP
#define EPI_HPP

#include "Insumo.hpp"

class EPI : public Insumo{
    std::string tipo;
    std::string descricao;

public:
    EPI(std::string nome, std::string dtvenc, std::string nomeFabri, int tipoIns, int quant, int valorUni,std::string tipo, std::string descricao) :
        Insumo(nome, dtvenc, nomeFabri, tipoIns , quant, valorUni), 
        tipo(tipo),
        descricao(descricao) {}

    ~EPI() override {
        std::cout << "Deletando EPI"<< "\n";
    }
};

#endif