#ifndef FIGURASGEOMETRICAS_H
#define FIGURASGEOMETRICAS_H

#include <iostream>
#include <string>
using std::string;

class FigurasGeometricas
{
    public:
        FigurasGeometricas();
        virtual ~FigurasGeometricas();

        string getNome();

        virtual double CalcularArea() = 0;
    protected:
        std::string nome;
};

#endif // FIGURASGEOMETRICAS_H
