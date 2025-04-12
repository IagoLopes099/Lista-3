#ifndef ORCAMENTO_ESTOURADO_EXCEPTION_HPP
#define ORCAMENTO_ESTOURADO_EXCEPTION_HPP

#include <iostream>
#include <stdexcept>
#include <string.h>
#include <sstream>

class OrcamentoEstouradoException : public std::exception{
    
    std::string mensagem;

public:

    OrcamentoEstouradoException(double const &salarios){
        
        std::ostringstream stream;
        stream.precision(0);
        stream << std::fixed << salarios;

        mensagem = "OrcamentoEstouradoException " + stream.str();
    }

    const char* what() const noexcept override{
        return mensagem.c_str();
    }

};

#endif