#ifndef PESSOA_H
#define PESSOA_H

#define tamLista 10

#include <string>

#include "acervo.h"

using namespace std;

class pessoa
{
	private:
		
		string nome;
		string codigoCliente;
		
	public:
		pessoa();
		~pessoa();
		
		livro* listaLivros[tamLista];
		periodico* listaPeriodicos[tamLista];
		relatorio* listaRelatorios[tamLista];
		midia* listaMidias[tamLista];
		cartaz* listaCartaz[tamLista];
		mapa* listaMapas[tamLista];
		tcc* listaTcc[tamLista];
		
		void setNome(string nome);
		string getNome();
		void setCodigoCliente(string codigoCliente);
		string getCodigoCliente();
		
		void informacoesPessoa();
		
	protected:
};

#endif
