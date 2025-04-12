#include <iostream>
#include "Imobiliaria.hpp"
#include "Casa.hpp"
#include "Apartamento.hpp"
#include "Terreno.hpp"

int main(){

    std::string tipoImovel, disponibilidade;
    float valor;

    int n,tipo;

    std::cin >> n;


    Imobiliaria *imobiliaria = new Imobiliaria;

    for(int i = 0; i<n; i++){

        std::cin >> tipo;

        switch (tipo)
        {
        case 1:{
            tipoImovel = "Casa";
            int numPavimentos, numQuartos, areaTerreno, areaConstruida;

            std::cin >> valor;
            std::cin.ignore();
            std::getline(std::cin, disponibilidade);
            std::cin >> numPavimentos;
            std::cin >> numQuartos;
            std::cin >> areaTerreno;
            std::cin >> areaConstruida;


            Casa *casa = new Casa(tipoImovel, disponibilidade, valor, numPavimentos, numQuartos, areaConstruida, areaTerreno);
            imobiliaria->addImovel(casa);

            break;
        }
        case 2:{
            tipoImovel = "Apartamento";
            int areaConstruida, numQuartos, andar, condominio, vagasGaragem;

            std::cin >> valor;
            std::cin.ignore();
            std::getline(std::cin, disponibilidade);
            std::cin >> areaConstruida;
            std::cin >> numQuartos;
            std::cin >> andar;
            std::cin >> condominio;
            std::cin >> vagasGaragem;

            Apartamento *ap = new Apartamento(tipoImovel,disponibilidade, valor, andar, numQuartos, condominio, vagasGaragem, areaConstruida);
            imobiliaria->addImovel(ap);

            break;
        }
        case 3:{
            tipoImovel = "Terreno";
            int area;
        
            std::cin >> valor;
            std::cin.ignore();
            std::getline(std::cin, disponibilidade);
            std::cin >> area;

            Terreno *terreno = new Terreno(tipoImovel,disponibilidade, valor, area);
            imobiliaria->addImovel(terreno);

            break;
        }
        default:
            break;
        }

    }

    std::string buscar;

    std::cin.ignore();
    std::getline(std::cin, buscar);

    imobiliaria->lerAtributos(buscar);

    delete imobiliaria;

    return 0;
}

//0 INDEFINIDO
//1 CASA
//2 APARTAMENTO
//3 TERRENO