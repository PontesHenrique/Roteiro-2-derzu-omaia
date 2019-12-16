#ifndef ENDERECO_H
#define ENDERECO_H

#include <iostream>
#include <sstream>
#include <string>

using std::string;

class Endereco
{
    public:
        Endereco();
        Endereco(int, string, string, string, string, string);

        int getNumero();
        string getRua();
        string getBairro();
        string getEstado();
        string getCidade();
        string getCep();

        void setNumero(int);
        void setRua(string);
        void setBairro(string);
        void setEstado(string);
        void setCidade(string);
        void setCep(string);

        string toString();
    private:
        int numero;
        string rua;
        string bairro;
        string estado;
        string cidade;
        string cep;
};

#endif // ENDERECO_H
