#ifndef ICONTA_HPP
#define ICONTA_HPP

class IConta{
public:
    virtual float saldoTotalDisponivel() = 0;
    virtual void sacar(float valor) = 0;
    virtual void depoisitar(float valor) = 0;
};


#endif