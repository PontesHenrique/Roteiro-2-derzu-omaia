#ifndef PESSOA_H
#define PESSOA_H

#include <iostream>
#include <sstream>
#include <string>

using std::string;

#include "Endereco.h"

class Pessoa
{
    public:
        Pessoa();
        Pessoa(string, Endereco, string);

        string getNome();
        Endereco getEndereco();
        string getTelefone();

        void setNome(string);
        void setEndereco(Endereco);
        void setTelefone(string);

        string toString();

    private:
        string nome;
        Endereco endereco;
        string telefone;
};

#endif // PESSOA_H
