#ifndef MESADERESTAURANTE_H
#define MESADERESTAURANTE_H

#include<iostream>
#include <string>

#include "Pedido.h"

#define MAX_TAM 100

using std::string;

class MesaDeRestaurante
{
	public:
		MesaDeRestaurante();
		
		double calculaTotal();
		void zeraPedidos();
		void adicionaAoPedido(Pedido);
		
	private:
		Pedido pedidos[MAX_TAM];
};

#endif
