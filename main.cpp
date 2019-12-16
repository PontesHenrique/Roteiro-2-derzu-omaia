#include <iostream>

#include "TrabalhadorPorHora.h"
#include "TrabalhadorAssalariado.h"

using namespace std;

int main()
{
    Trabalhador *t1 = new TrabalhadorPorHora("Maria Jusefina da Silva", 34);
    Trabalhador *t2 = new TrabalhadorAssalariado("Cleniudes da Silva Costa", 4500);

    cout << "Nome: " << t1->getNome() << "\nPagamento semanal: " << t1->calcularPagamentoSemanal(60) << "\nSalario: " << t1->getSalario() << endl << endl;

    cout << "Nome: " << t2->getNome() << "\nPagamento semanal: " << t2->calcularPagamentoSemanal(40) << "\nSalario: " << t2->getSalario() << endl;
   
   delete(t1);
   delete(t2);

    return 0;
}
