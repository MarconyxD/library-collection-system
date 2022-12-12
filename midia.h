#ifndef MIDIA_H
#define MIDIA_H

#include <string>

using namespace std;

class midia
{
	private:
		
		string estudio;
		string direcao;
		string duracao;
		string titulo;
		string cidade;
		int ano;
		string assunto;
		string cdu;
		bool alugado;
		string dataDevolucao;
		
		
	public:
		midia();
		~midia();
		
		void setEstudio(string estudio);
		string getEstudio();
		void setDirecao(string direcao);
		string getDirecao();
		void setDuracao(string duracao);
		string getDuracao();
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
		
		
		void informacoesMidia();
		
	protected:
};

#endif
