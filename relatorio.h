#ifndef RELATORIO_H
#define RELATORIO_H

#include <string>

using namespace std;

class relatorio
{
	private:
		
		int numPaginas;
		string palavraChave1;
		string palavraChave2;
		string palavraChave3;
		string titulo;
		string autores;
		string cidade;
		int ano;
		string assunto;
		string cdu;
		bool alugado;
		string dataDevolucao;
		
		
	public:
		relatorio();
		~relatorio();
		
		void setNumPaginas(int numPaginas);
		int getNumPaginas();
		void setNumCm(int numCm);
		int getNumCm();
		void setPalavraChave1(string palavraChave1);
		string getPalavraChave1();
		void setPalavraChave2(string palavraChave2);
		string getPalavraChave2();
		void setPalavraChave3(string palavraChave3);
		string getPalavraChave3();
		void setTitulo(string titulo);
		string getTitulo();
		void setAutores(string autores);
		string getAutores();
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
		
		
		void informacoesRelatorio();
		
	protected:
};

#endif
