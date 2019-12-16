#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include<iostream>
#include <string>

using std::string;

class Funcionario
{
    public:
        Funcionario();
        Funcionario(int, string, double);

        int getMatricula();
        string getNome();
        virtual double getSalario();
        virtual double getSalario(float);

        void setMatricula(int);
        void setNome(string);
        void setSalario(double);

    protected:
        int matricula;
        std::string nome;
        double salario;
};

#endif // FUNCIONARIO_H
