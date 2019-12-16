#include <iostream>
#include<string>

using namespace std;

#include "MesaDeRestaurante.h"

MesaDeRestaurante::MesaDeRestaurante()
{
	zeraPedidos();
}

void MesaDeRestaurante::zeraPedidos()
{
	for(int i = 0; i < MAX_TAM; i++){
		pedidos[i].setNumeroPedido(0);
		pedidos[i].setDescricao(" ");
		pedidos[i].setQuantidade(0);
		pedidos[i].setPreco(0);
	}
}

double MesaDeRestaurante::calculaTotal()
{
	double soma = 0;
	
	for(int i = 0; i < MAX_TAM; i++){
		soma += pedidos[i].getPreco() * pedidos[i].getQuantidade();
	}
	return soma;
}
void MesaDeRestaurante::adicionaAoPedido(Pedido pedidoFeito)
{
	for(int i = 0; i < MAX_TAM; i++){
		if(pedidoFeito.getDescricao() == pedidos[i].getDescricao()){
			pedidos[i].setQuantidade(pedidos[i].getQuantidade() + pedidoFeito.getQuantidade());
			return;
		}
	}	
		
	for(int i = 0; i < MAX_TAM; i++){
		if(pedidos[i].getNumeroPedido() == 0){
			pedidos[i] = pedidoFeito;
			break;
		}	
	}
}
