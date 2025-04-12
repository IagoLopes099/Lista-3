#ifndef MEDICAMENTO_HPP
#define MEDICAMENTO_HPP

#include "Insumo.hpp"

class Medicamento : public Insumo{
    std::string dosagem;
    std::string administracao;
    std::string disponibilizacao;

public:
    Medicamento(std::string nome, std::string dtvenc, std::string nomeFabri, int tipoIns, int quant, int valorUni ,std::string dose, std::string adm, std::string disp) :
        Insumo(nome, dtvenc, nomeFabri, tipoIns , quant, valorUni),
        dosagem(dose),
        administracao(adm),
        disponibilizacao(disp) {}

    ~Medicamento() override {
        std::cout << "Deletando Medicamento" << "\n";
    }
};

#endif