#ifndef CIRCULO_H
#define CIRCULO_H

#include "FigurasGeometricas.h"

class Circulo : public FigurasGeometricas
{
    public:
        Circulo();
        Circulo(double);

        double getRaio();
        void setRaio(double);

        double CalcularArea();
    private:
        double raio;
};

#endif // CIRCULO_H
