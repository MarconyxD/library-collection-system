#ifndef PERIODICO_H
#define PERIODICO_H

#include <string>

using namespace std;

class periodico
{
	private:
		
		int numEdicao;
		string editora;
		int numPaginas;
		int numCm;
		string isbn;
		string titulo;
		string cidade;
		int ano;
		string assunto;
		string cdu;
		bool alugado;
		string dataDevolucao;
		
		
	public:
		periodico();
		~periodico();
		
		void setNumEdicao(int numEdicao);
		int getNumEdicao();
		void setEditora(string editora);
		string getEditora();
		void setNumPaginas(int numPaginas);
		int getNumPaginas();
		void setNumCm(int numCm);
		int getNumCm();
		void setIsbn(string isbn);
		string getIsbn();
		void setTitulo(string titulo);
		string getTitulo();
		void setCidade(string cidade);
		string getCidade();
		void setAno(int ano);
		int getAno();
		void setAssunto(string assunto);
		string getAssunto();
		void setCdu(string cdu);
		string getCdu();
		void setAlugado(bool alugado);
		bool getAlugado();
		void setDataDevolucao(string dataDevolucao);
		string getDataDevolucao();
		
		
		void informacoesPeriodico();
		
	protected:
};

#endif
