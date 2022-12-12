#ifndef EMPRESTIMO_H
#define EMPRESTIMO_H

#define tamLista 10

#include <string>

#include "pessoa.h"

using namespace std;

class emprestimo
{
	private:
		
		
	public:
		emprestimo();
		~emprestimo();
		
		pessoa* listaPessoas[tamLista];
		
		void informacoesEmprestimos();
		
	protected:
};

#endif
