#ifndef LOCALCONTROLLER_HPP
#define LOCALCONTROLLER_HPP

#include "Insumo.hpp"
#include <vector>

class LocalController{
    std::string nome;
    int tipo;
    int lasPosition;
    Insumo  *insumosArr[3];
    std::vector< Insumo *> insumosVec;

public:
    LocalController(){this->lasPosition = 0;}

    Insumo** getInsumosArray(){ return insumosArr;}

    void addInsumoArr(Insumo *insumo);
    void addInsumoVec(Insumo *insumo);

    ~LocalController(){
        std::cout << "Deletando Local" << "\n";

        for(auto i : insumosArr){
            delete i;
        }

        for(auto i : insumosVec){
            delete i;
        }
    };
};

void LocalController::addInsumoArr(Insumo *insumo){

    insumosArr[lasPosition] =  insumo;
    lasPosition ++;
}

void LocalController::addInsumoVec(Insumo *insumo){

    insumosVec.push_back(insumo);
}

#endif