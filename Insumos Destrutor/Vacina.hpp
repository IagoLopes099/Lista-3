#ifndef VACINA_HPP
#define VACINA_HPP

#include "Insumo.hpp"

class Vacina : public Insumo{
    std::string tipo;
    int quantDoses;
    int intervalo;

public:
    Vacina(std::string nome, std::string dtvenc, std::string nomeFabri, int tipoIns, int quant, int valorUni,std::string tipo, int quantDoses, int intervalo) :
        Insumo(nome, dtvenc, nomeFabri, tipoIns , quant, valorUni),
        tipo(tipo),
        quantDoses(quantDoses),
        intervalo(intervalo) {}

    ~Vacina() override {
        std::cout << "Deletando Vacina" << "\n";
     }
};

#endif