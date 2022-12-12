#include <iostream>
#include "acervo.h"

acervo::acervo()
{
	
	for (int i=0; i < tamLista; i++){
		listaLivros[i] = NULL;
	}
	
	for (int i=0; i < tamLista; i++){
		listaPeriodicos[i] = NULL;
	}
	
	for (int i=0; i < tamLista; i++){
		listaRelatorios[i] = NULL;
	}
	
	for (int i=0; i < tamLista; i++){
		listaMidias[i] = NULL;
	}
	
	for (int i=0; i < tamLista; i++){
		listaCartaz[i] = NULL;
	}
	
	for (int i=0; i < tamLista; i++){
		listaMapas[i] = NULL;
	}
	
	for (int i=0; i < tamLista; i++){
		listaTcc[i] = NULL;
	}
}

acervo::~acervo()
{
	
	int tam = (int) sizeof(listaLivros)/sizeof(listaLivros[0]);
	
	for(int i=0; i < tam; i++){
		
		if(listaLivros[i] == NULL)
			return;
			
		delete (listaLivros[i]);
		listaLivros[i] = NULL;		
	}	
	
	int tam2 = (int) sizeof(listaPeriodicos)/sizeof(listaPeriodicos[0]);
	
	for(int i=0; i < tam2; i++){
		
		if(listaPeriodicos[i] == NULL)
			return;
			
		delete (listaPeriodicos[i]);
		listaPeriodicos[i] = NULL;		
	}	
	
	int tam3 = (int) sizeof(listaRelatorios)/sizeof(listaRelatorios[0]);
	
	for(int i=0; i < tam3; i++){
		
		if(listaRelatorios[i] == NULL)
			return;
			
		delete (listaRelatorios[i]);
		listaRelatorios[i] = NULL;		
	}	
	
	int tam4 = (int) sizeof(listaMidias)/sizeof(listaMidias[0]);
	
	for(int i=0; i < tam4; i++){
		
		if(listaMidias[i] == NULL)
			return;
			
		delete (listaMidias[i]);
		listaMidias[i] = NULL;		
	}	
	
	int tam5 = (int) sizeof(listaCartaz)/sizeof(listaCartaz[0]);
	
	for(int i=0; i < tam5; i++){
		
		if(listaCartaz[i] == NULL)
			return;
			
		delete (listaCartaz[i]);
		listaCartaz[i] = NULL;		
	}	
	
	int tam6 = (int) sizeof(listaMapas)/sizeof(listaMapas[0]);
	
	for(int i=0; i < tam6; i++){
		
		if(listaMapas[i] == NULL)
			return;
			
		delete (listaMapas[i]);
		listaMapas[i] = NULL;		
	}	
	
	int tam7 = (int) sizeof(listaTcc)/sizeof(listaTcc[0]);
	
	for(int i=0; i < tam7; i++){
		
		if(listaTcc[i] == NULL)
			return;
			
		delete (listaTcc[i]);
		listaTcc[i] = NULL;		
	}	
}


void acervo::informacoesAcervo(){
	
	cout << "		------------------ Informacoes do acervo ------------------" << endl;
	
	int tam = (int) sizeof(listaLivros)/sizeof(listaLivros[0]);
	int tam2 = (int) sizeof(listaPeriodicos)/sizeof(listaPeriodicos[0]);
	int tam3 = (int) sizeof(listaRelatorios)/sizeof(listaRelatorios[0]);
	int tam4 = (int) sizeof(listaMidias)/sizeof(listaMidias[0]);
	int tam5 = (int) sizeof(listaCartaz)/sizeof(listaCartaz[0]);
	int tam6 = (int) sizeof(listaMapas)/sizeof(listaMapas[0]);
	int tam7 = (int) sizeof(listaTcc)/sizeof(listaTcc[0]);
	
	for(int i=0; i < tam; i++){
		if(listaLivros[i] != NULL)
			listaLivros[i]->informacoesLivro();
	}
	
	for(int i=0; i < tam2; i++){
		if(listaPeriodicos[i] != NULL)
			listaPeriodicos[i]->informacoesPeriodico();
	}
	
	for(int i=0; i < tam3; i++){
		if(listaRelatorios[i] != NULL)
			listaRelatorios[i]->informacoesRelatorio();
	}
	
	for(int i=0; i < tam4; i++){
		if(listaMidias[i] != NULL)
			listaMidias[i]->informacoesMidia();
	}
	
	for(int i=0; i < tam5; i++){
		if(listaCartaz[i] != NULL)
			listaCartaz[i]->informacoesCartaz();
	}
	
	for(int i=0; i < tam6; i++){
		if(listaMapas[i] != NULL)
			listaMapas[i]->informacoesMapa();
	}
	
	for(int i=0; i < tam7; i++){
		if(listaTcc[i] != NULL)
			listaTcc[i]->informacoesTcc();
	}
	
	cout << "		-----------------------------------------------------------" << endl << endl;
	
}
