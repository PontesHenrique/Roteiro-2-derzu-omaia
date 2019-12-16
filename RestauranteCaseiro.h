#ifndef RESTAURANTECASEIRO_H
#define RESTAURANTECASEIRO_H
#include<iostream>
#include <string>

#include "MesaDeRestaurante.h"

#define MAX_TAM 100

using std::string;

class RestauranteCaseiro
{
	public:
		RestauranteCaseiro();
		
		void adicionaMesa(MesaDeRestaurante);
		double calculaTotalRestaurante();
		void adicionaAoPedido(Pedido, int);
		
	private:
		MesaDeRestaurante mesas[MAX_TAM];
};

#endif
