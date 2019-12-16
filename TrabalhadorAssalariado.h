#ifndef TRABALHADORASSALARIADO_H
#define TRABALHADORASSALARIADO_H

#include "Trabalhador.h"
#include <string>
using std::string;

class TrabalhadorAssalariado : public Trabalhador
{
    public:
        TrabalhadorAssalariado();
        TrabalhadorAssalariado(string, double);

        double calcularPagamentoSemanal(int);
};

#endif // TRABALHADORASSALARIADO_H
