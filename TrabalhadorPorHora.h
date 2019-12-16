#ifndef TRABALHADORPORHORA_H
#define TRABALHADORPORHORA_H

#include "Trabalhador.h"
#include <string>
using std::string;

class TrabalhadorPorHora : public Trabalhador
{
    public:
        TrabalhadorPorHora();
        TrabalhadorPorHora(string, double);

        double getValorDaHora();
        void setValorDaHora(double);

        double calcularPagamentoSemanal(int);
    private:
        double valorDaHora;
};

#endif // TRABALHADORPORHORA_H
