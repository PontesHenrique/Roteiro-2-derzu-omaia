#include <iostream>
#include<string>

using namespace std;

#include "Pedido.h"

Pedido::Pedido(int numeroPedidoDigitado, string descricaoDigitado, int quantidadeDigitado, double precoDigitado)
{
	setNumeroPedido(numeroPedidoDigitado);
	setDescricao(descricaoDigitado);
	setQuantidade(quantidadeDigitado);
	setPreco(precoDigitado);
}

Pedido::~Pedido()
{
	
}

void Pedido::setNumeroPedido(int numeroPedidoDigitado)
{
	if(numeroPedidoDigitado < 0){
		numeroPedido = 1;	
	}else{
		numeroPedido = numeroPedidoDigitado;
	}
}
void Pedido::setDescricao(string descricaoDigitado)
{
	if(descricaoDigitado == ""){
		descricao = "Falta descricao";
	}else{
		descricao = descricaoDigitado;
	}
	
}
void Pedido::setQuantidade(int quantidadeDigitado)
{
	if(quantidadeDigitado < 0){
		quantidade = 1;
	}else{
		quantidade = quantidadeDigitado;
	}
	
}
void Pedido::setPreco(double precoDigitado)
{
	if(precoDigitado < 0){
		preco = 0;
	}else{
		preco = precoDigitado;
	}
}

string Pedido::toString()
{
	stringstream imprime;
	
	imprime << "Numero do Pedido: " << numeroPedido << "\nDescricao: " << descricao << "\nQuantidade: " << quantidade << "\nPreco R$: " << preco << endl;
	
	return imprime.str();
}

int Pedido::getNumeroPedido()
{
	return numeroPedido;
}
string Pedido::getDescricao()
{
	return descricao;
}
int Pedido::getQuantidade()
{
	return quantidade;
}
double Pedido::getPreco()
{
	return preco;
}
