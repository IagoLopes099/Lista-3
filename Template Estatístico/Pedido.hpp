#ifndef PEDIDO_HPP
#define PEDIDO_HPP

#include <iostream>

class Pedido{
    float valorUnitario;
    int quantidade;

public:
    Pedido(float valorUni, int quant) : valorUnitario(valorUni), quantidade(quant) {};

    const float getTotal() const;
    void Print() const ;
    
};

const float Pedido::getTotal() const {

    return this->quantidade * this->valorUnitario;
}

void Pedido::Print() const {

    std::cout << "R$ " << this->valorUnitario << ", quant: " << this->quantidade << ", total: R$ " << this->getTotal() << "\n";
}



#endif