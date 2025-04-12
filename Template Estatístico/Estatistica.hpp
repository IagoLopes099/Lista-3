#ifndef ESTATISTICA_HPP
#define ESTATISTICA_HPP

#include <vector>
#include <iostream>


template<typename T>
class Estatistica{

    std::vector< T > vec;

public:

    int indexOfMaior(){
        int maiorValor = -32768;
        int MaiorIndex = 0;

        for(int i =0; i< vec.size() ; i++){
            if(vec[i].getTotal() > maiorValor){
                maiorValor = vec[i].getTotal();
                MaiorIndex = i;
            }
        }
        return MaiorIndex;
    };

    int indexOfMenor(){
        int menorValor = 32768;
        int menorIndex = 0;

        for(int i =0; i< vec.size() ; i++){
            if(vec[i].getTotal() < menorValor){
                menorValor = vec[i].getTotal();
                menorIndex = i;
            }
        }
        return menorIndex;
    };

    float media(){
        float media = 0;
        for (int i = 0; i < vec.size(); ++i) {
            media += vec[i].getTotal();
        }

        return media / vec.size();
    };

    void addEl(T el){

        vec.push_back(el);
    };
    
    T getEl(int i){

        return vec[i];
    };
};


#endif
