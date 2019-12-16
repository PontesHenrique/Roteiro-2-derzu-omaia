#ifndef PEDIDO_H
#define PEDIDO_H

#include<iostream>
#include<sstream>
#include <string>

using std::string;

class Pedido
{
	public:
		Pedido(int, string, int, double);
		~Pedido();
		
		//M�TODOS SET
		void setNumeroPedido(int);
		void setDescricao(string);
		void setQuantidade(int);
		void setPreco(double);
		
		//M�TODOS GET
		int getNumeroPedido();
		string getDescricao();
		int getQuantidade();
		double getPreco();
		
		string toString();
		
	private:
		int numeroPedido;
		string descricao;
		int quantidade;
		double preco;
};

#endif
