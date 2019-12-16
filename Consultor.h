#ifndef CONSULTOR_H
#define CONSULTOR_H

#include<iostream>
#include <string>

using std::string;

#include "Funcionario.h"

class Consultor : public Funcionario
{
    public:
        Consultor();
        Consultor(int, string, double);

        double getSalario();
        double getSalario(float);
};

#endif // CONSULTOR_H
