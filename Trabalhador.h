#ifndef TRABALHADOR_H
#define TRABALHADOR_H

#include <iostream>
#include <string>
using std::string;

class Trabalhador
{
    public:
        Trabalhador();

        string getNome();
        double getSalario();

        void setNome(string);
        void setSalario(double);

        virtual double calcularPagamentoSemanal(int);
        virtual double getValorDaHora();
        virtual void setValorDaHora(double);
    protected:
        string nome;
        double salario;
};

#endif // TRABALHADOR_H
