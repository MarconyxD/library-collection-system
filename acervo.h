#ifndef ACERVO_H
#define ACERVO_H

#include "livro.h"
#include "periodico.h"
#include "relatorio.h"
#include "midia.h"
#include "cartaz.h"
#include "mapa.h"
#include "tcc.h"

#define tamLista 10

#include <string>

using namespace std;

class acervo
{
	private:
		
		
	public:
		acervo();
		~acervo();
		
		livro* listaLivros[tamLista];
		periodico* listaPeriodicos[tamLista];
		relatorio* listaRelatorios[tamLista];
		midia* listaMidias[tamLista];
		cartaz* listaCartaz[tamLista];
		mapa* listaMapas[tamLista];
		tcc* listaTcc[tamLista];
		
		
		void informacoesAcervo();
		
	protected:
};

#endif
