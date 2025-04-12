#include <iostream>
#include <fstream>
#include <vector>
#include "Pessoa.hpp"

using namespace std;

void geraArquivo(string path, string data) {
    fstream fs;

    fs.open(path.c_str(), fstream::out);
    if (fs.is_open()) {
        fs.write(data.c_str(), data.size());
        fs.close();
    } else
        cout << "Nao foi possivel abrir o arquivo " << path;
}

void geraArquivos() {
    string data1 = "1\nJoao Pedro\n(83) 8888-8888\n"
                  "2\nMaria Teresa\n(83) 9999-9999\n000.000.000-00\n"
                  "2\nLuiz Pereira\n(83) 7777-7777\n111.111.111-11\n"
                  "1\nDenis Carlos\n(83) 5555-5555\n";
    string data2 = "2\nLuma Oliveira\n(83) 1111-1111\n222.222.222-22\n"
                  "2\nTercio Marquies\n(83) 2222-2222\n333.333.222-33\n"
                  "1\nJonas Luz\n(83) 3333-3333\n";
    geraArquivo("dados01.txt", data1);
    geraArquivo("dados02.txt", data2);
}

int main(){

    std::vector<Pessoa> pessoas;
    geraArquivos();

    std::string nome, linha;
    std::getline(std::cin, nome);

    fstream stream;

    stream.open(nome, ios_base::in);

    if(!stream.is_open()){
        return 1;
    }

    while (std::getline(stream, linha)) {
        int tipo = stoi(linha);

        string nome, telefone, cpf;
        std::getline(stream, nome);
        std::getline(stream, telefone);

        if (tipo == 2) {

            std::getline(stream, cpf);
            pessoas.emplace_back(tipo, nome, telefone, cpf);

        }else{

            pessoas.emplace_back(tipo, nome, telefone);
        }
    }

    for (const Pessoa& p : pessoas) {
        p.Print();
    }

    return 0;
}