#ifndef TRIANGULO_H
#define TRIANGULO_H

#include "FigurasGeometricas.h"

class Triangulo : public FigurasGeometricas
{
    public:
        Triangulo();
        Triangulo(double, double);

        double getBase();
        double getAltura();

        void setBase(double);
        void setAltura(double);

        double CalcularArea();
    private:
        double base;
        double altura;
};

#endif // TRIANGULO_H
