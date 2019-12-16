#include "TrabalhadorAssalariado.h"
#include <string>
using std::string;

TrabalhadorAssalariado::TrabalhadorAssalariado()
{
    nome = " ";
    salario = 0;
}
TrabalhadorAssalariado::TrabalhadorAssalariado(string nome, double salario){
    setNome(nome);
    setSalario(salario);
}

double TrabalhadorAssalariado::calcularPagamentoSemanal(int horas){
    return salario / 4;
}
