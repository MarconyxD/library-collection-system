#include <iostream>
#include "emprestimo.h"

emprestimo::emprestimo()
{
	
	for (int i=0; i < tamLista; i++){
		listaPessoas[i] = NULL;
	}
	
}

emprestimo::~emprestimo()
{
	int tam = (int) sizeof(listaPessoas)/sizeof(listaPessoas[0]);
	
	for(int i=0; i < tam; i++){
		
		if(listaPessoas[i] == NULL)
			return;
			
		delete (listaPessoas[i]);
		listaPessoas[i] = NULL;		
	}	
}


void emprestimo::informacoesEmprestimos(){
	
	int tam = (int) sizeof(listaPessoas)/sizeof(listaPessoas[0]);
	
	for(int i=0; i < tam; i++){
		if(listaPessoas[i] != NULL)
			listaPessoas[i]->informacoesPessoa();
	}
	
}
