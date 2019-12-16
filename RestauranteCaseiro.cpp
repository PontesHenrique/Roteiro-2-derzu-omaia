#include <iostream>
#include<string>

using namespace std;

#include "RestauranteCaseiro.h"

RestauranteCaseiro::RestauranteCaseiro()
{
	for(int i = 0; i < MAX_TAM; i++){
		mesas[i].zeraPedidos();
	}
}

void RestauranteCaseiro::adicionaMesa(MesaDeRestaurante mesa)
{
	for(int i = 0; i < MAX_TAM; i++){
		if(mesas[i].calculaTotal() == 0){
			mesas[i] = mesa;
			break;
		}
	}
}
double RestauranteCaseiro::calculaTotalRestaurante()
{
	double total = 0;
	
	for(int i = 0; i < MAX_TAM; i++){
		total += mesas[i].calculaTotal();
	}
	return total;
}
void RestauranteCaseiro::adicionaAoPedido(Pedido pedidoFeito, int numeroMesa)
{
	if(numeroMesa >= 0 && numeroMesa < MAX_TAM)
		mesas[numeroMesa].adicionaAoPedido(pedidoFeito);
}
