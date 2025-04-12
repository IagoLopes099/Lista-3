#ifndef GERENCIADORELEITORES_HPP
#define GERENCIADORELEITORES_HPP

#include "Eleitor.hpp"
#include <vector>
#include <stdexcept>

class GerenciadorEleitores{
private:
    int tamanho, posicao;
    Eleitor **eleitores = new Eleitor*[tamanho];

    //Se quiser usar com vector (muito mais simples)
    //std::vector <Eleitor *> eleitores2;  

    void verificaMenoridade(Eleitor *eleitor){

        if(eleitor->getIdade() < 16){
            throw std::overflow_error("Eleitor "+ eleitor->getNome() +" não pode ser cadastrado");
        }
    };

    void verificaPendenciaIdade(Eleitor *eleitor){

        if(eleitor->getIdade() > 20){
            throw std::overflow_error("Eleitor "+ eleitor->getNome() +" com pendência");
        }
    };
    
public:
    GerenciadorEleitores(){
        this->tamanho = 0;
        this->posicao = 0;
    }

    GerenciadorEleitores(int tamanho){
        this->tamanho = tamanho;
        this->posicao = 0;
    }

    void Cadastrar(std::string nome, int idade, std::string titulo);

    void verificaEleitores();

    ~GerenciadorEleitores(){

        

        for(int i =0 ; i < tamanho; i++){
            delete eleitores[i];
        }

        delete [] eleitores;
    }
};


void GerenciadorEleitores::Cadastrar(std::string nome, int idade, std::string titulo){

    Eleitor *eleitor = new Eleitor(nome, idade, titulo);
    
    int newTamanho = tamanho + 1;

    Eleitor **newSizeEletiores = new Eleitor*[newTamanho];

    if(tamanho != 0){
        for(int i =0 ; i < newTamanho ; i++){
            newSizeEletiores[i] = eleitores[i];
        }
    
    }
    
    delete [] eleitores;

    eleitores = newSizeEletiores;

    eleitores[posicao] = eleitor;
    posicao++;
    tamanho ++;

    //Se quiser usar com vector (muito mais simples)
    //eleitores2.push_back(eleitor);



}

void GerenciadorEleitores::verificaEleitores(){
    
    for(int i = 0; i < tamanho ; i++){
        try{

            verificaMenoridade(eleitores[i]);
            verificaPendenciaIdade(eleitores[i]);

        }catch(std::overflow_error &errorMenorIdade){
            std::cout << errorMenorIdade.what() << "\n";
        }
    }
}




#endif