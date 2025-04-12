#ifndef FUNCIONARIO_NAO_EXISTE_EXCEPTION_HPP
#define FUNCIONARIO_NAO_EXISTE_EXCEPTION_HPP

#include <iostream>
#include <stdexcept>

class FuncionarioNaoExiste : public std::exception{

    std::string mensagem;

public:

    FuncionarioNaoExiste(const std::string &nome){
        mensagem = "FuncionarioNaoExisteException " + nome;    
    }

    const char* what() const noexcept override{
        return mensagem.c_str();
    }

};


#endif