#include <iostream>
#include <string>
#include <locale>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <algorithm>
#include <cctype>

#include "emprestimo.h"
#include "pessoa.h"
#include "acervo.h"
#include "livro.h"
#include "periodico.h"
#include "relatorio.h"
#include "midia.h"
#include "cartaz.h"
#include "mapa.h"
#include "tcc.h"

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int quantidadePessoas;
	int opcao = 999;
	int contadorUsuarios = 2;
	int contadorLivros = 1;
	int contadorPeriodicos = 1;
	int contadorRelatorios = 1;
	int contadorMidias = 1;
	int contadorCartaz = 1;
	int contadorMapas = 1;
	int contadorTcc = 1;
	int contadorEmprestimoLivro = 0;
	int contadorEmprestimoPeriodico = 0;
	int contadorEmprestimoRelatorio = 0;
	int contadorEmprestimoMidia = 0;
	int contadorEmprestimoCartaz = 0;
	int contadorEmprestimoMapa = 0;
	int contadorEmprestimoTcc = 0;
	int contadorUsuarioEncontrado = 0;
	bool confereVetorUsuarios[10] = {true,true,false,false,false,false,false,false,false,false};
	bool confereVetorLivros[10] = {true,false,false,false,false,false,false,false,false,false};
	bool confereVetorPeriodicos[10] = {true,false,false,false,false,false,false,false,false,false};
	bool confereVetorRelatorios[10] = {true,false,false,false,false,false,false,false,false,false};
	bool confereVetorMidias[10] = {true,false,false,false,false,false,false,false,false,false};
	bool confereVetorCartaz[10] = {true,false,false,false,false,false,false,false,false,false};
	bool confereVetorMapas[10] = {true,false,false,false,false,false,false,false,false,false};
	bool confereVetorTcc[10] = {true,false,false,false,false,false,false,false,false,false};
	
	emprestimo *emprestimo1 = new emprestimo;
	acervo *acervo1 = new acervo;
	
	setlocale(LC_ALL, "portuguese");
	system ("chcp 1252 > nul");
	
	
	pessoa *pessoa1 = new pessoa;
	pessoa1->setNome("Maria");
	pessoa1->setCodigoCliente("00001");
		
	emprestimo1->listaPessoas[0] = pessoa1;
	
	pessoa *pessoa2 = new pessoa;
	pessoa2->setNome("Pedro");
	pessoa2->setCodigoCliente("00002");
		
	emprestimo1->listaPessoas[1] = pessoa2;
	
	livro *livro1 = new livro;
	livro1->setTitulo("As trancas do rei careca");
	livro1->setAutores("J. K. Rowling");
	livro1->setCidade("Tangamandapio");
	livro1->setAno(2012);
	livro1->setNumEdicao(1);
	livro1->setEditora("Azul");
	livro1->setNumPaginas(362);
	livro1->setNumCm(30);
	livro1->setIsbn("12-9623-123-9");
	livro1->setAssunto("Cronicas de um rei");
	livro1->setPalavraChave1("Rei");
	livro1->setPalavraChave2("Cronicas");
	livro1->setPalavraChave3("Careca");
	livro1->setCdu("123.12:123.12");
	livro1->setAlugado(false);
	livro1->setDataDevolucao("");
	
	acervo1->listaLivros[0] = livro1;
	
	periodico *periodico1 = new periodico;
	periodico1->setTitulo("Revista de Tecnologia: Um novo amanha");
	periodico1->setCidade("Floripa");
	periodico1->setAno(2008);
	periodico1->setNumEdicao(56);
	periodico1->setEditora("Futuro");
	periodico1->setNumPaginas(190);
	periodico1->setNumCm(40);
	periodico1->setIsbn("09-1254-837-1");
	periodico1->setAssunto("Tecnologia");
	periodico1->setCdu("018.98:323.78");
	periodico1->setAlugado(false);
	periodico1->setDataDevolucao("");
	
	acervo1->listaPeriodicos[0] = periodico1;
	
	relatorio *relatorio1 = new relatorio;
	relatorio1->setTitulo("Desenvolvimento de um onibus espacial para Marte");
	relatorio1->setAutores("M. O. L. Marcony");
	relatorio1->setCidade("Divinopolis");
	relatorio1->setAno(2020);
	relatorio1->setNumPaginas(182);
	relatorio1->setAssunto("Viagem espacial");
	relatorio1->setPalavraChave1("Espacial");
	relatorio1->setPalavraChave2("Marte");
	relatorio1->setPalavraChave3("Engenharia");
	relatorio1->setCdu("341.11:900.22");
	relatorio1->setAlugado(false);
	relatorio1->setDataDevolucao("");
	
	acervo1->listaRelatorios[0] = relatorio1;
	
	midia *midia1 = new midia;
	midia1->setTitulo("Tres tigres tristes");
	midia1->setEstudio("Start");
	midia1->setDirecao("Steven Spielberg");
	midia1->setCidade("Hollywood");
	midia1->setAno(2008);
	midia1->setDuracao("1 hora e 50 minutos");
	midia1->setAssunto("Tigres tristes");
	midia1->setCdu("121.99:387.08");
	midia1->setAlugado(false);
	midia1->setDataDevolucao("");
	
	acervo1->listaMidias[0] = midia1;
	
	cartaz *cartaz1 = new cartaz;
	cartaz1->setTitulo("Mural do dia da Independencia");
	cartaz1->setAutores("Dom Pedro I, Dom Pedro II");
	cartaz1->setCidade("Rio de Janeiro");
	cartaz1->setAno(1822);
	cartaz1->setNumCm(220);
	cartaz1->setAssunto("Independendia");
	cartaz1->setPalavraChave1("Mural");
	cartaz1->setPalavraChave2("Comemoracao");
	cartaz1->setPalavraChave3("Festividade");
	cartaz1->setCdu("091.39:512.33");
	cartaz1->setAlugado(false);
	cartaz1->setDataDevolucao("");
	
	acervo1->listaCartaz[0] = cartaz1;
	
	mapa *mapa1 = new mapa;
	mapa1->setTitulo("Colecao de Mapas de Narnia");
	mapa1->setAutores("Rei Pedro, Rainha Lucia");
	mapa1->setCidade("Narnia");
	mapa1->setAno(1950);
	mapa1->setNumEdicao(2);
	mapa1->setEditora("Vida selvagem");
	mapa1->setNumPaginas(192);
	mapa1->setNumCm(42);
	mapa1->setIsbn("99-9999-999-9");
	mapa1->setAssunto("Mapas de Narnia");
	mapa1->setPalavraChave1("Mapas");
	mapa1->setPalavraChave2("Narnia");
	mapa1->setPalavraChave3("Colecao");
	mapa1->setCdu("111.11:111.11");
	mapa1->setAlugado(false);
	mapa1->setDataDevolucao("");
	
	acervo1->listaMapas[0] = mapa1;
	
	tcc *tcc1 = new tcc;
	tcc1->setTitulo("Aplicacao de metodos logisticos de IA em uma fabrica de robos gigantes");
	tcc1->setAutores("M. O. L. Marcony");
	tcc1->setCidade("Divinopolis");
	tcc1->setAno(2021);
	tcc1->setNumPaginas(182);
	tcc1->setAssunto("Metodos logisticos de IA");
	tcc1->setPalavraChave1("IA");
	tcc1->setPalavraChave2("Logistica");
	tcc1->setPalavraChave3("Producao");
	tcc1->setCdu("730.20:114.42");
	tcc1->setAlugado(false);
	tcc1->setDataDevolucao("");
	
	acervo1->listaTcc[0] = tcc1;
		
		
	
	cout << "		------------------ SISTEMA ACERVO BIBLIOTECA -----------------" << endl;
	
	while (opcao != 0){
		cout << "\nOpcoes:\n1- Adicionar usuario\n2- Imprimir lista de usuarios\n3- Deletar usuario\n4- Adicionar item ao acervo\n5- Imprimir todo o acervo\n6- Realizar busca no acervo\n7- Deletar item do acervo\n8- Realizar emprestimo\n9- Realizar devolucao\n0- Sair\n";
		cin >> opcao;
	
	
		if (opcao == 1){
			
			pessoa *pessoa3 = new pessoa;
		
			cin.clear();
			fflush(stdin);
			string nome;
			cout << "Entre com o nome do novo usuario: ";
			getline(cin, nome);
			pessoa3->setNome(nome);
			cin.clear();
			fflush(stdin);
			cout << endl;
		
			string codigoCliente;
			cout << "Entre com o codigo de usuario de " << pessoa3->getNome() << ": ";
			cin >> codigoCliente;
			pessoa3->setCodigoCliente(codigoCliente);
			cin.clear();
			fflush(stdin);
			cout << endl;
			
			for (int j=0; j<10; j++){
				if (!confereVetorUsuarios[j]){
					emprestimo1->listaPessoas[j] = pessoa3;
					confereVetorUsuarios[j] = true;
					break;
				}
			}

			contadorUsuarios++;
		}
		
		else if (opcao == 2){
			emprestimo1->informacoesEmprestimos();
		}
		
		else if (opcao == 3){
			string deletar;
			cout << "Digite o codigo do usuario a ser deletado: ";
			cin >> deletar;
			
			for (int j=0; j<contadorUsuarios; j++){
				if (emprestimo1->listaPessoas[j]->getCodigoCliente() == deletar){
					cout << "Usuario deletado com sucesso!" << endl;
					emprestimo1->listaPessoas[j] = NULL;
					confereVetorUsuarios[j] = false;
					contadorUsuarios--;
				}
			}
		}
		
		else if (opcao == 4){
			int auxAdicaoAcervo = 0;
			
			cout << "Qual tipo de material gostaria de adicionar ao acervo?" << endl;
			cout << "1- Livro\n2- Periodico\n3- Relatorio\n4- Midia\n5- Cartaz\n6- Mapa\n7- TCC\n0- Voltar" << endl;
			cin >> auxAdicaoAcervo;
			
			if (auxAdicaoAcervo == 1){
				livro *livro2 = new livro;
				
				string titulo;
				cin.clear();
				fflush(stdin);	
				cout << "Entre com o titulo: ";
				getline(cin, titulo);
				livro2->setTitulo(titulo);
				cin.clear();
				fflush(stdin);
				cout << endl;
				
				string autores;
				cout << "Entre com os nomes do autores: ";
				getline(std::cin, autores);
				livro2->setAutores(autores);
				cin.clear();
				fflush(stdin);
				cout << endl;
				
				int numEdicao;
				cout << "Entre com o numero da edicao: ";
				cin >> numEdicao;
				livro2->setNumEdicao(numEdicao);
				cin.clear();
				fflush(stdin);
				cout << endl;
				
				string editora;
				cout << "Entre com o nome da editora: ";
				getline(cin, editora);
				livro2->setEditora(editora);
				cin.clear();
				fflush(stdin);
				cout << endl;
				
				string cidade;
				cout << "Entre com o nome da cidade: ";
				getline(cin, cidade);
				livro2->setCidade(cidade);
				cin.clear();
				fflush(stdin);
				cout << endl;
				
				int ano;
				cout << "Entre com o ano: ";
				cin >> ano;
				livro2->setAno(ano);
				cin.clear();
				fflush(stdin);
				cout << endl;
				
				int numPaginas;
				cout << "Entre com o numero de paginas: ";
				cin >> numPaginas;
				livro2->setNumPaginas(numPaginas);
				cin.clear();
				fflush(stdin);
				cout << endl;
				
				int numCm;
				cout << "Entre com o numero de cm: ";
				cin >> numCm;
				livro2->setNumCm(numCm);
				cin.clear();
				fflush(stdin);
				cout << endl;
				
				string isbn;
				cout << "Entre com o ISBN: ";
				cin >> isbn;
				livro2->setIsbn(isbn);
				cin.clear();
				fflush(stdin);
				cout << endl;
				
				string assunto;
				cout << "Entre com o assunto: ";
				getline(cin, assunto);
				livro2->setAssunto(assunto);
				cin.clear();
				fflush(stdin);
				cout << endl;
				
				string palavraChave1;
				cout << "Entre com a palavra-chave 1: ";
				cin >> palavraChave1;
				livro2->setPalavraChave1(palavraChave1);
				cin.clear();
				fflush(stdin);
				cout << endl;
				
				string palavraChave2;
				cout << "Entre com a palavra-chave 2: ";
				cin >> palavraChave2;
				livro2->setPalavraChave2(palavraChave2);
				cin.clear();
				fflush(stdin);
				cout << endl;
				
				string palavraChave3;
				cout << "Entre com a palavra-chave 3: ";
				cin >> palavraChave3;
				livro2->setPalavraChave3(palavraChave3);
				cin.clear();
				fflush(stdin);
				cout << endl;
				
				string cdu;
				cout << "Entre com o CDU: ";
				cin >> cdu;
				livro2->setCdu(cdu);
				cin.clear();
				fflush(stdin);
				cout << endl;
				
				livro2->setAlugado(false);
				livro2->setDataDevolucao("");
				
				for (int j=0; j<10; j++){
					if (!confereVetorLivros[j]){
						acervo1->listaLivros[j] = livro2;
						confereVetorLivros[j] = true;
						contadorLivros++;
						break;
					}
				}
			}
			
			if (auxAdicaoAcervo == 2){
				periodico *periodico2 = new periodico;
				
				string titulo;
				cin.clear();
				fflush(stdin);
				cout << "Entre com o titulo: ";
				getline(cin, titulo);
				periodico2->setTitulo(titulo);
				cin.clear();
				fflush(stdin);
				cout << endl;
				
				int numEdicao;
				cout << "Entre com o numero da edicao: ";
				cin >> numEdicao;
				periodico2->setNumEdicao(numEdicao);
				cin.clear();
				fflush(stdin);
				cout << endl;
				
				string editora;
				cout << "Entre com o nome da editora: ";
				getline(cin, editora);
				periodico2->setEditora(editora);
				cin.clear();
				fflush(stdin);
				cout << endl;
				
				string cidade;
				cout << "Entre com o nome da cidade: ";
				getline(cin, cidade);
				periodico2->setCidade(cidade);
				cin.clear();
				fflush(stdin);
				cout << endl;
				
				int ano;
				cout << "Entre com o ano: ";
				cin >> ano;
				periodico2->setAno(ano);
				cin.clear();
				fflush(stdin);
				cout << endl;
				
				int numPaginas;
				cout << "Entre com o numero de paginas: ";
				cin >> numPaginas;
				periodico2->setNumPaginas(numPaginas);
				cin.clear();
				fflush(stdin);
				cout << endl;
				
				int numCm;
				cout << "Entre com o numero de cm: ";
				cin >> numCm;
				periodico2->setNumCm(numCm);
				cin.clear();
				fflush(stdin);
				cout << endl;
				
				string isbn;
				cout << "Entre com o ISBN: ";
				cin >> isbn;
				periodico2->setIsbn(isbn);
				cin.clear();
				fflush(stdin);
				cout << endl;
				
				string assunto;
				cout << "Entre com o assunto: ";
				getline(cin, assunto);
				periodico2->setAssunto(assunto);
				cin.clear();
				fflush(stdin);
				cout << endl;
				
				string cdu;
				cout << "Entre com o CDU: ";
				cin >> cdu;
				periodico2->setCdu(cdu);
				cin.clear();
				fflush(stdin);
				cout << endl;
				
				periodico2->setAlugado(false);
				periodico2->setDataDevolucao("");
				
				for (int j=0; j<10; j++){
					if (!confereVetorPeriodicos[j]){
						acervo1->listaPeriodicos[j] = periodico2;
						confereVetorPeriodicos[j] = true;
						contadorPeriodicos++;
						break;
					}
				}
			}
			
			if (auxAdicaoAcervo == 3){
				relatorio *relatorio2 = new relatorio;
				
				string titulo;
				cin.clear();
				fflush(stdin);
				cout << "Entre com o titulo: ";
				getline(cin, titulo);
				relatorio2->setTitulo(titulo);
				cin.clear();
				fflush(stdin);
				cout << endl;
				
				string autores;
				cout << "Entre com os nomes do autores: ";
				getline(cin, autores);
				relatorio2->setAutores(autores);
				cin.clear();
				fflush(stdin);
				cout << endl;
				
				string cidade;
				cout << "Entre com o nome da cidade: ";
				getline(cin, cidade);
				relatorio2->setCidade(cidade);
				cin.clear();
				fflush(stdin);
				cout << endl;
				
				int ano;
				cout << "Entre com o ano: ";
				cin >> ano;
				relatorio2->setAno(ano);
				cin.clear();
				fflush(stdin);
				cout << endl;
				
				int numPaginas;
				cout << "Entre com o numero de paginas: ";
				cin >> numPaginas;
				relatorio2->setNumPaginas(numPaginas);
				cin.clear();
				fflush(stdin);
				cout << endl;
				
				string assunto;
				cout << "Entre com o assunto: ";
				getline(cin, assunto);
				relatorio2->setAssunto(assunto);
				cin.clear();
				fflush(stdin);
				cout << endl;
				
				string palavraChave1;
				cout << "Entre com a palavra-chave 1: ";
				cin >> palavraChave1;
				relatorio2->setPalavraChave1(palavraChave1);
				cin.clear();
				fflush(stdin);
				cout << endl;
				
				string palavraChave2;
				cout << "Entre com a palavra-chave 2: ";
				cin >> palavraChave2;
				relatorio2->setPalavraChave2(palavraChave2);
				cin.clear();
				fflush(stdin);
				cout << endl;
				
				string palavraChave3;
				cout << "Entre com a palavra-chave 3: ";
				cin >> palavraChave3;
				relatorio2->setPalavraChave3(palavraChave3);
				cin.clear();
				fflush(stdin);
				cout << endl;
				
				string cdu;
				cout << "Entre com o CDU: ";
				cin >> cdu;
				relatorio2->setCdu(cdu);
				cin.clear();
				fflush(stdin);
				cout << endl;
				
				relatorio2->setAlugado(false);
				relatorio2->setDataDevolucao("");
				
				for (int j=0; j<10; j++){
					if (!confereVetorRelatorios[j]){
						acervo1->listaRelatorios[j] = relatorio2;
						confereVetorRelatorios[j] = true;
						contadorRelatorios++;
						break;
					}
				}
			}
			
			if (auxAdicaoAcervo == 4){
				midia *midia2 = new midia;
				
				string titulo;
				cin.clear();
				fflush(stdin);
				cout << "Entre com o titulo: ";
				getline(cin, titulo);
				midia2->setTitulo(titulo);
				cin.clear();
				fflush(stdin);
				cout << endl;
				
				string estudio;
				cout << "Entre com o nome do estudio: ";
				getline(cin, estudio);
				midia2->setEstudio(estudio);
				cin.clear();
				fflush(stdin);
				cout << endl;
				
				string direcao;
				cout << "Entre com a direcao: ";
				getline(cin, direcao);
				midia2->setDirecao(direcao);
				cin.clear();
				fflush(stdin);
				cout << endl;
				
				string duracao;
				cout << "Entre com a duracao: ";
				getline(cin, duracao);
				midia2->setDuracao(duracao);
				cin.clear();
				fflush(stdin);
				cout << endl;
				
				string cidade;
				cout << "Entre com o nome da cidade: ";
				getline(cin, cidade);
				midia2->setCidade(cidade);
				cin.clear();
				fflush(stdin);
				cout << endl;
				
				int ano;
				cout << "Entre com o ano: ";
				cin >> ano;
				midia2->setAno(ano);
				cin.clear();
				fflush(stdin);
				cout << endl;
				
				string assunto;
				cout << "Entre com o assunto: ";
				getline(cin, assunto);
				midia2->setAssunto(assunto);
				cin.clear();
				fflush(stdin);
				cout << endl;
				
				string cdu;
				cout << "Entre com o CDU: ";
				cin >> cdu;
				midia2->setCdu(cdu);
				cin.clear();
				fflush(stdin);
				cout << endl;
				
				midia2->setAlugado(false);
				midia2->setDataDevolucao("");
				
				for (int j=0; j<10; j++){
					if (!confereVetorMidias[j]){
						acervo1->listaMidias[j] = midia2;
						confereVetorMidias[j] = true;
						contadorMidias++;
						break;
					}
				}
			}
			
			if (auxAdicaoAcervo == 5){
				cartaz *cartaz2 = new cartaz;
				
				string titulo;
				cin.clear();
				fflush(stdin);
				cout << "Entre com o titulo: ";
				getline(cin, titulo);
				cartaz2->setTitulo(titulo);
				cin.clear();
				fflush(stdin);
				cout << endl;
				
				string autores;
				cout << "Entre com os nomes do autores: ";
				getline(cin, autores);
				cartaz2->setAutores(autores);
				cin.clear();
				fflush(stdin);
				cout << endl;
				
				string cidade;
				cout << "Entre com o nome da cidade: ";
				getline(cin, cidade);
				cartaz2->setCidade(cidade);
				cin.clear();
				fflush(stdin);
				cout << endl;
				
				int ano;
				cout << "Entre com o ano: ";
				cin >> ano;
				cartaz2->setAno(ano);
				cin.clear();
				fflush(stdin);
				cout << endl;
				
				int numCm;
				cout << "Entre com o numero de cm: ";
				cin >> numCm;
				cartaz2->setNumCm(numCm);
				cin.clear();
				fflush(stdin);
				cout << endl;
				
				string assunto;
				cout << "Entre com o assunto: ";
				getline(cin, assunto);
				cartaz2->setAssunto(assunto);
				cin.clear();
				fflush(stdin);
				cout << endl;
				
				string palavraChave1;
				cout << "Entre com a palavra-chave 1: ";
				cin >> palavraChave1;
				cartaz2->setPalavraChave1(palavraChave1);
				cin.clear();
				fflush(stdin);
				cout << endl;
				
				string palavraChave2;
				cout << "Entre com a palavra-chave 2: ";
				cin >> palavraChave2;
				cartaz2->setPalavraChave2(palavraChave2);
				cin.clear();
				fflush(stdin);
				cout << endl;
				
				string palavraChave3;
				cout << "Entre com a palavra-chave 3: ";
				cin >> palavraChave3;
				cartaz2->setPalavraChave3(palavraChave3);
				cin.clear();
				fflush(stdin);
				cout << endl;
				
				string cdu;
				cout << "Entre com o CDU: ";
				cin >> cdu;
				cartaz2->setCdu(cdu);
				cin.clear();
				fflush(stdin);
				cout << endl;
				
				cartaz2->setAlugado(false);
				cartaz2->setDataDevolucao("");
				
				for (int j=0; j<10; j++){
					if (!confereVetorCartaz[j]){
						acervo1->listaCartaz[j] = cartaz2;
						confereVetorCartaz[j] = true;
						contadorCartaz++;
						break;
					}
				}
			}
			
			if (auxAdicaoAcervo == 6){
				mapa *mapa2 = new mapa;
				
				string titulo;
				cin.clear();
				fflush(stdin);
				cout << "Entre com o titulo: ";
				getline(cin, titulo);
				mapa2->setTitulo(titulo);
				cin.clear();
				fflush(stdin);
				cout << endl;
				
				string autores;
				cout << "Entre com os nomes do autores: ";
				getline(cin, autores);
				mapa2->setAutores(autores);
				cin.clear();
				fflush(stdin);
				cout << endl;
				
				int numEdicao;
				cout << "Entre com o numero da edicao: ";
				cin >> numEdicao;
				mapa2->setNumEdicao(numEdicao);
				cin.clear();
				fflush(stdin);
				cout << endl;
				
				string editora;
				cout << "Entre com o nome da editora: ";
				getline(cin, editora);
				mapa2->setEditora(editora);
				cin.clear();
				fflush(stdin);
				cout << endl;
				
				string cidade;
				cout << "Entre com o nome da cidade: ";
				getline(cin, cidade);
				mapa2->setCidade(cidade);
				cin.clear();
				fflush(stdin);
				cout << endl;
				
				int ano;
				cout << "Entre com o ano: ";
				cin >> ano;
				mapa2->setAno(ano);
				cin.clear();
				fflush(stdin);
				cout << endl;
				
				int numPaginas;
				cout << "Entre com o numero de paginas: ";
				cin >> numPaginas;
				mapa2->setNumPaginas(numPaginas);
				cin.clear();
				fflush(stdin);
				cout << endl;
				
				int numCm;
				cout << "Entre com o numero de cm: ";
				cin >> numCm;
				mapa2->setNumCm(numCm);
				cin.clear();
				fflush(stdin);
				cout << endl;
				
				string isbn;
				cout << "Entre com o ISBN: ";
				cin >> isbn;
				mapa2->setIsbn(isbn);
				cin.clear();
				fflush(stdin);
				cout << endl;
				
				string assunto;
				cout << "Entre com o assunto: ";
				getline(cin, assunto);
				mapa2->setAssunto(assunto);
				cin.clear();
				fflush(stdin);
				cout << endl;
				
				string palavraChave1;
				cout << "Entre com a palavra-chave 1: ";
				cin >> palavraChave1;
				mapa2->setPalavraChave1(palavraChave1);
				cin.clear();
				fflush(stdin);
				cout << endl;
				
				string palavraChave2;
				cout << "Entre com a palavra-chave 2: ";
				cin >> palavraChave2;
				mapa2->setPalavraChave2(palavraChave2);
				cin.clear();
				fflush(stdin);
				cout << endl;
				
				string palavraChave3;
				cout << "Entre com a palavra-chave 3: ";
				cin >> palavraChave3;
				mapa2->setPalavraChave3(palavraChave3);
				cin.clear();
				fflush(stdin);
				cout << endl;
				
				string cdu;
				cout << "Entre com o CDU: ";
				cin >> cdu;
				mapa2->setCdu(cdu);
				cin.clear();
				fflush(stdin);
				cout << endl;
				
				mapa2->setAlugado(false);
				mapa2->setDataDevolucao("");
				
				for (int j=0; j<10; j++){
					if (!confereVetorMapas[j]){
						acervo1->listaMapas[j] = mapa2;
						confereVetorMapas[j] = true;
						contadorMapas++;
						break;
					}
				}
			}
			
			if (auxAdicaoAcervo == 7){
				tcc *tcc2 = new tcc;
				
				string titulo;
				cin.clear();
				fflush(stdin);
				cout << "Entre com o titulo: ";
				getline(cin, titulo);
				tcc2->setTitulo(titulo);
				cin.clear();
				fflush(stdin);
				cout << endl;
				
				string autores;
				cout << "Entre com os nomes do autores: ";
				getline(cin, autores);
				tcc2->setAutores(autores);
				cin.clear();
				fflush(stdin);
				cout << endl;
				
				string cidade;
				cout << "Entre com o nome da cidade: ";
				getline(cin, cidade);
				tcc2->setCidade(cidade);
				cin.clear();
				fflush(stdin);
				cout << endl;
				
				int ano;
				cout << "Entre com o ano: ";
				cin >> ano;
				tcc2->setAno(ano);
				cin.clear();
				fflush(stdin);
				cout << endl;
				
				int numPaginas;
				cout << "Entre com o numero de paginas: ";
				cin >> numPaginas;
				tcc2->setNumPaginas(numPaginas);
				cin.clear();
				fflush(stdin);
				cout << endl;
				
				string assunto;
				cout << "Entre com o assunto: ";
				getline(cin, assunto);
				tcc2->setAssunto(assunto);
				cin.clear();
				fflush(stdin);
				cout << endl;
				
				string palavraChave1;
				cout << "Entre com a palavra-chave 1: ";
				cin >> palavraChave1;
				tcc2->setPalavraChave1(palavraChave1);
				cin.clear();
				fflush(stdin);
				cout << endl;
				
				string palavraChave2;
				cout << "Entre com a palavra-chave 2: ";
				cin >> palavraChave2;
				tcc2->setPalavraChave2(palavraChave2);
				cin.clear();
				fflush(stdin);
				cout << endl;
				
				string palavraChave3;
				cout << "Entre com a palavra-chave 3: ";
				cin >> palavraChave3;
				tcc2->setPalavraChave3(palavraChave3);
				cin.clear();
				fflush(stdin);
				cout << endl;
				
				string cdu;
				cout << "Entre com o CDU: ";
				cin >> cdu;
				tcc2->setCdu(cdu);
				cin.clear();
				fflush(stdin);
				cout << endl;
				
				tcc2->setAlugado(false);
				tcc2->setDataDevolucao("");
				
				for (int j=0; j<10; j++){
					if (!confereVetorTcc[j]){
						acervo1->listaTcc[j] = tcc2;
						confereVetorTcc[j] = true;
						contadorTcc++;
						break;
					}
				}
			}
		}
		
		else if (opcao == 5){
			acervo1->informacoesAcervo();
		}
		
		else if (opcao == 6){
			string palavraBusca;
			cout << "Restricoes para busca:\n- Digite apenas uma palavra ou termo exato existente\n- Nome de cidade e de editora com primeira letra em maiusculo\n- Outras opcoes com a palavra inteira em minusculo\n\nDigite a palavra: ";
			cin >> palavraBusca;
			cout << "\n";
			
			char palavraBuscaChar[palavraBusca.length()];
			strcpy(palavraBuscaChar, palavraBusca.c_str());
			
			for (int i=0; i<10;i++){
				if ((palavraBusca == "livro" || palavraBusca == "livros") && confereVetorLivros[i]) {acervo1->listaLivros[i]->informacoesLivro(); if (confereVetorLivros[i+1] == false) break;}
				else if ((palavraBusca == "periodico" || palavraBusca == "periodicos") && confereVetorPeriodicos[i]) {acervo1->listaPeriodicos[i]->informacoesPeriodico(); if (confereVetorPeriodicos[i+1] == false) break;}
				else if ((palavraBusca == "relatorio" || palavraBusca == "relatorios") && confereVetorRelatorios[i]) {acervo1->listaRelatorios[i]->informacoesRelatorio(); if (confereVetorRelatorios[i+1] == false) break;}
				else if ((palavraBusca == "midia" || palavraBusca == "midias") && confereVetorMidias[i]) {acervo1->listaMidias[i]->informacoesMidia(); if (confereVetorMidias[i+1] == false) break;}
				else if ((palavraBusca == "cartaz" || palavraBusca == "cartazes") && confereVetorCartaz[i]) {acervo1->listaCartaz[i]->informacoesCartaz(); if (confereVetorCartaz[i+1] == false) break;}
				else if ((palavraBusca == "mapa" || palavraBusca == "mapas") && confereVetorMapas[i]) {acervo1->listaMapas[i]->informacoesMapa(); if (confereVetorMapas[i+1] == false) break;}
				else if ((palavraBusca == "tcc" || palavraBusca == "tccs") && confereVetorTcc[i]) {acervo1->listaTcc[i]->informacoesTcc(); if (confereVetorTcc[i+1] == false) break;}
				else {
					string textoTitulo;
					string textoAutores;
					string textoAssunto;
					string textoDirecao;
				
					int contadorOcorrenciaPalavra = 0;
					
					if (confereVetorLivros[i]){
						
						strcpy(palavraBuscaChar, palavraBusca.c_str());
						
						textoTitulo = acervo1->listaLivros[i]->getTitulo();
						textoAutores = acervo1->listaLivros[i]->getAutores();
						textoAssunto = acervo1->listaLivros[i]->getAssunto();
				
						transform(textoTitulo.begin(), textoTitulo.end(), textoTitulo.begin(), ::tolower);
						transform(textoAutores.begin(), textoAutores.end(), textoAutores.begin(), ::tolower);
						transform(textoAssunto.begin(), textoAssunto.end(), textoAssunto.begin(), ::tolower);
					
						char textoTituloCharLivro[textoTitulo.length()];
						char textoAutoresCharLivro[textoAutores.length()];
						char textoAssuntoCharLivro[textoAssunto.length()];
					
						strcpy(textoTituloCharLivro, textoTitulo.c_str());
						strcpy(textoAutoresCharLivro, textoAutores.c_str());
						strcpy(textoAssuntoCharLivro, textoAssunto.c_str());
					
				
						for (char *palavra = strtok(textoTituloCharLivro, " "); palavra != NULL; palavra = strtok(NULL, " ")){
        					if (strcmp(palavra, palavraBuscaChar) == 0){
            					contadorOcorrenciaPalavra++;
       						}
						}
						for (char *palavra = strtok(textoAutoresCharLivro, " "); palavra != NULL; palavra = strtok(NULL, " ")){
        					if (strcmp(palavra, palavraBuscaChar) == 0){
            					contadorOcorrenciaPalavra++;
       						}
						}
						for (char *palavra = strtok(textoAssuntoCharLivro, " "); palavra != NULL; palavra = strtok(NULL, " ")){
        					if (strcmp(palavra, palavraBuscaChar) == 0){
            				contadorOcorrenciaPalavra++;
       						}
						}
				
						if (acervo1->listaLivros[i]->getEditora() == palavraBusca) contadorOcorrenciaPalavra++;
						if (acervo1->listaLivros[i]->getPalavraChave1() == palavraBusca) contadorOcorrenciaPalavra++;
						if (acervo1->listaLivros[i]->getPalavraChave2() == palavraBusca) contadorOcorrenciaPalavra++;
						if (acervo1->listaLivros[i]->getPalavraChave3() == palavraBusca) contadorOcorrenciaPalavra++;
						if (acervo1->listaLivros[i]->getCdu() == palavraBusca) contadorOcorrenciaPalavra++;
						if (acervo1->listaLivros[i]->getIsbn() == palavraBusca) contadorOcorrenciaPalavra++;
						if (acervo1->listaLivros[i]->getCidade() == palavraBusca) contadorOcorrenciaPalavra++;
					
						if (contadorOcorrenciaPalavra>0) acervo1->listaLivros[i]->informacoesLivro();
						
					}
				
					
					
					
					if (confereVetorPeriodicos[i]){
						
						strcpy(palavraBuscaChar, palavraBusca.c_str());
						
						contadorOcorrenciaPalavra = 0;
					
						textoTitulo = acervo1->listaPeriodicos[i]->getTitulo();
						textoAssunto = acervo1->listaPeriodicos[i]->getAssunto();
				
						transform(textoTitulo.begin(), textoTitulo.end(), textoTitulo.begin(), ::tolower);
						transform(textoAssunto.begin(), textoAssunto.end(), textoAssunto.begin(), ::tolower);
					
						char textoTituloCharPeriodico[textoTitulo.length()];
						char textoAssuntoCharPeriodico[textoAssunto.length()];
					
						strcpy(textoTituloCharPeriodico, textoTitulo.c_str());
						strcpy(textoAssuntoCharPeriodico, textoAssunto.c_str());
				
						for (char *palavra = strtok(textoTituloCharPeriodico, " "); palavra != NULL; palavra = strtok(NULL, " ")){
        					if (strcmp(palavra, palavraBuscaChar) == 0){
            					contadorOcorrenciaPalavra++;
       						}
						}
						for (char *palavra = strtok(textoAssuntoCharPeriodico, " "); palavra != NULL; palavra = strtok(NULL, " ")){
        					if (strcmp(palavra, palavraBuscaChar) == 0){
            					contadorOcorrenciaPalavra++;
       						}
						}
				
						if (acervo1->listaPeriodicos[i]->getEditora() == palavraBusca) contadorOcorrenciaPalavra++;
						if (acervo1->listaPeriodicos[i]->getCdu() == palavraBusca) contadorOcorrenciaPalavra++;
						if (acervo1->listaPeriodicos[i]->getIsbn() == palavraBusca) contadorOcorrenciaPalavra++;
						if (acervo1->listaPeriodicos[i]->getCidade() == palavraBusca) contadorOcorrenciaPalavra++;
					
						if (contadorOcorrenciaPalavra>0) acervo1->listaPeriodicos[i]->informacoesPeriodico();
						
					}
					
					
					
					
					if (confereVetorRelatorios[i]){
						
						strcpy(palavraBuscaChar, palavraBusca.c_str());
						
						contadorOcorrenciaPalavra = 0;
					
						textoTitulo = acervo1->listaRelatorios[i]->getTitulo();
						textoAutores = acervo1->listaRelatorios[i]->getAutores();
						textoAssunto = acervo1->listaRelatorios[i]->getAssunto();
				
						transform(textoTitulo.begin(), textoTitulo.end(), textoTitulo.begin(), ::tolower);
						transform(textoAutores.begin(), textoAutores.end(), textoAutores.begin(), ::tolower);
						transform(textoAssunto.begin(), textoAssunto.end(), textoAssunto.begin(), ::tolower);
					
						char textoTituloCharRelatorio[textoTitulo.length()];
						char textoAutoresCharRelatorio[textoAutores.length()];
						char textoAssuntoCharRelatorio[textoAssunto.length()];
					
						strcpy(textoTituloCharRelatorio, textoTitulo.c_str());
						strcpy(textoAutoresCharRelatorio, textoAutores.c_str());
						strcpy(textoAssuntoCharRelatorio, textoAssunto.c_str());
					
				
						for (char *palavra = strtok(textoTituloCharRelatorio, " "); palavra != NULL; palavra = strtok(NULL, " ")){
        					if (strcmp(palavra, palavraBuscaChar) == 0){
            					contadorOcorrenciaPalavra++;
       						}
						}
						for (char *palavra = strtok(textoAutoresCharRelatorio, " "); palavra != NULL; palavra = strtok(NULL, " ")){
        					if (strcmp(palavra, palavraBuscaChar) == 0){
            					contadorOcorrenciaPalavra++;
       						}
						}
						for (char *palavra = strtok(textoAssuntoCharRelatorio, " "); palavra != NULL; palavra = strtok(NULL, " ")){
        					if (strcmp(palavra, palavraBuscaChar) == 0){
            					contadorOcorrenciaPalavra++;
       						}
						}
				
						if (acervo1->listaRelatorios[i]->getPalavraChave1() == palavraBusca) contadorOcorrenciaPalavra++;
						if (acervo1->listaRelatorios[i]->getPalavraChave2() == palavraBusca) contadorOcorrenciaPalavra++;
						if (acervo1->listaRelatorios[i]->getPalavraChave3() == palavraBusca) contadorOcorrenciaPalavra++;
						if (acervo1->listaRelatorios[i]->getCdu() == palavraBusca) contadorOcorrenciaPalavra++;
						if (acervo1->listaRelatorios[i]->getCidade() == palavraBusca) contadorOcorrenciaPalavra++;
					
						if (contadorOcorrenciaPalavra>0) acervo1->listaRelatorios[i]->informacoesRelatorio();
						
					}
					
					
					
					if (confereVetorMidias[i]){
						
						strcpy(palavraBuscaChar, palavraBusca.c_str());
						
						contadorOcorrenciaPalavra = 0;
				
						textoTitulo = acervo1->listaMidias[i]->getTitulo();
						textoDirecao = acervo1->listaMidias[i]->getDirecao();
						textoAssunto = acervo1->listaMidias[i]->getAssunto();
				
						transform(textoTitulo.begin(), textoTitulo.end(), textoTitulo.begin(), ::tolower);
						transform(textoDirecao.begin(), textoDirecao.end(), textoDirecao.begin(), ::tolower);
						transform(textoAssunto.begin(), textoAssunto.end(), textoAssunto.begin(), ::tolower);
					
						char textoTituloCharMidia[textoTitulo.length()];
						char textoDirecaoCharMidia[textoDirecao.length()];
						char textoAssuntoCharMidia[textoAssunto.length()];
					
						strcpy(textoTituloCharMidia, textoTitulo.c_str());
						strcpy(textoDirecaoCharMidia, textoDirecao.c_str());
						strcpy(textoAssuntoCharMidia, textoAssunto.c_str());
					
				
						for (char *palavra = strtok(textoTituloCharMidia, " "); palavra != NULL; palavra = strtok(NULL, " ")){
        					if (strcmp(palavra, palavraBuscaChar) == 0){
            					contadorOcorrenciaPalavra++;
       						}
						}
						for (char *palavra = strtok(textoDirecaoCharMidia, " "); palavra != NULL; palavra = strtok(NULL, " ")){
        					if (strcmp(palavra, palavraBuscaChar) == 0){
            					contadorOcorrenciaPalavra++;
       						}
						}
						for (char *palavra = strtok(textoAssuntoCharMidia, " "); palavra != NULL; palavra = strtok(NULL, " ")){
        					if (strcmp(palavra, palavraBuscaChar) == 0){
            					contadorOcorrenciaPalavra++;
       						}
						}
				
						if (acervo1->listaMidias[i]->getEstudio() == palavraBusca) contadorOcorrenciaPalavra++;
						if (acervo1->listaMidias[i]->getCdu() == palavraBusca) contadorOcorrenciaPalavra++;
						if (acervo1->listaMidias[i]->getCidade() == palavraBusca) contadorOcorrenciaPalavra++;
					
						if (contadorOcorrenciaPalavra>0) acervo1->listaMidias[i]->informacoesMidia();
						
					}
					
					
					
					
					if (confereVetorCartaz[i]){
						
						strcpy(palavraBuscaChar, palavraBusca.c_str());
						
						contadorOcorrenciaPalavra = 0;
				
						textoTitulo = acervo1->listaCartaz[i]->getTitulo();
						textoAutores = acervo1->listaCartaz[i]->getAutores();
						textoAssunto = acervo1->listaCartaz[i]->getAssunto();
				
						transform(textoTitulo.begin(), textoTitulo.end(), textoTitulo.begin(), ::tolower);
						transform(textoAutores.begin(), textoAutores.end(), textoAutores.begin(), ::tolower);
						transform(textoAssunto.begin(), textoAssunto.end(), textoAssunto.begin(), ::tolower);
					
						char textoTituloCharCartaz[textoTitulo.length()];
						char textoAutoresCharCartaz[textoAutores.length()];
						char textoAssuntoCharCartaz[textoAssunto.length()];
					
						strcpy(textoTituloCharCartaz, textoTitulo.c_str());
						strcpy(textoAutoresCharCartaz, textoAutores.c_str());
						strcpy(textoAssuntoCharCartaz, textoAssunto.c_str());
					
				
						for (char *palavra = strtok(textoTituloCharCartaz, " "); palavra != NULL; palavra = strtok(NULL, " ")){
        					if (strcmp(palavra, palavraBuscaChar) == 0){
            					contadorOcorrenciaPalavra++;
       						}
						}
						for (char *palavra = strtok(textoAutoresCharCartaz, " "); palavra != NULL; palavra = strtok(NULL, " ")){
        					if (strcmp(palavra, palavraBuscaChar) == 0){
            					contadorOcorrenciaPalavra++;
       						}
						}
						for (char *palavra = strtok(textoAssuntoCharCartaz, " "); palavra != NULL; palavra = strtok(NULL, " ")){
        					if (strcmp(palavra, palavraBuscaChar) == 0){
            					contadorOcorrenciaPalavra++;
       						}
						}
				
						if (acervo1->listaCartaz[i]->getPalavraChave1() == palavraBusca) contadorOcorrenciaPalavra++;
						if (acervo1->listaCartaz[i]->getPalavraChave2() == palavraBusca) contadorOcorrenciaPalavra++;
						if (acervo1->listaCartaz[i]->getPalavraChave3() == palavraBusca) contadorOcorrenciaPalavra++;
						if (acervo1->listaCartaz[i]->getCdu() == palavraBusca) contadorOcorrenciaPalavra++;
						if (acervo1->listaCartaz[i]->getCidade() == palavraBusca) contadorOcorrenciaPalavra++;
					
						if (contadorOcorrenciaPalavra>0) acervo1->listaCartaz[i]->informacoesCartaz();
						
					}
					
					
					
					
					
					if (confereVetorMapas[i]){
						
						strcpy(palavraBuscaChar, palavraBusca.c_str());
						
						contadorOcorrenciaPalavra = 0;
				
						textoTitulo = acervo1->listaMapas[i]->getTitulo();
						textoAutores = acervo1->listaMapas[i]->getAutores();
						textoAssunto = acervo1->listaMapas[i]->getAssunto();
				
						transform(textoTitulo.begin(), textoTitulo.end(), textoTitulo.begin(), ::tolower);
						transform(textoAutores.begin(), textoAutores.end(), textoAutores.begin(), ::tolower);
						transform(textoAssunto.begin(), textoAssunto.end(), textoAssunto.begin(), ::tolower);
					
						char textoTituloCharMapa[textoTitulo.length()];
						char textoAutoresCharMapa[textoAutores.length()];
						char textoAssuntoCharMapa[textoAssunto.length()];
					
						strcpy(textoTituloCharMapa, textoTitulo.c_str());
						strcpy(textoAutoresCharMapa, textoAutores.c_str());
						strcpy(textoAssuntoCharMapa, textoAssunto.c_str());
				
						for (char *palavra = strtok(textoTituloCharMapa, " "); palavra != NULL; palavra = strtok(NULL, " ")){
        					if (strcmp(palavra, palavraBuscaChar) == 0){
            					contadorOcorrenciaPalavra++;
       						}
						}
						for (char *palavra = strtok(textoAutoresCharMapa, " "); palavra != NULL; palavra = strtok(NULL, " ")){
        					if (strcmp(palavra, palavraBuscaChar) == 0){
            					contadorOcorrenciaPalavra++;
       						}
						}
						for (char *palavra = strtok(textoAssuntoCharMapa, " "); palavra != NULL; palavra = strtok(NULL, " ")){
        					if (strcmp(palavra, palavraBuscaChar) == 0){
            					contadorOcorrenciaPalavra++;
       						}
						}
				
						if (acervo1->listaMapas[i]->getEditora() == palavraBusca) contadorOcorrenciaPalavra++;
						if (acervo1->listaMapas[i]->getPalavraChave1() == palavraBusca) contadorOcorrenciaPalavra++;
						if (acervo1->listaMapas[i]->getPalavraChave2() == palavraBusca) contadorOcorrenciaPalavra++;
						if (acervo1->listaMapas[i]->getPalavraChave3() == palavraBusca) contadorOcorrenciaPalavra++;
						if (acervo1->listaMapas[i]->getCdu() == palavraBusca) contadorOcorrenciaPalavra++;
						if (acervo1->listaMapas[i]->getIsbn() == palavraBusca) contadorOcorrenciaPalavra++;
						if (acervo1->listaMapas[i]->getCidade() == palavraBusca) contadorOcorrenciaPalavra++;
					
						if (contadorOcorrenciaPalavra>0) acervo1->listaMapas[i]->informacoesMapa();
						
					}
					
					
					
					
					if (confereVetorTcc[i]){
						
						strcpy(palavraBuscaChar, palavraBusca.c_str());
						
						contadorOcorrenciaPalavra = 0;
				
						textoTitulo = acervo1->listaTcc[i]->getTitulo();
						textoAutores = acervo1->listaTcc[i]->getAutores();
						textoAssunto = acervo1->listaTcc[i]->getAssunto();
				
						transform(textoTitulo.begin(), textoTitulo.end(), textoTitulo.begin(), ::tolower);
						transform(textoAutores.begin(), textoAutores.end(), textoAutores.begin(), ::tolower);
						transform(textoAssunto.begin(), textoAssunto.end(), textoAssunto.begin(), ::tolower);
					
						char textoTituloCharTcc[textoTitulo.length()];
						char textoAutoresCharTcc[textoAutores.length()];
						char textoAssuntoCharTcc[textoAssunto.length()];
					
						strcpy(textoTituloCharTcc, textoTitulo.c_str());
						strcpy(textoAutoresCharTcc, textoAutores.c_str());
						strcpy(textoAssuntoCharTcc, textoAssunto.c_str());
					
				
						for (char *palavra = strtok(textoTituloCharTcc, " "); palavra != NULL; palavra = strtok(NULL, " ")){
        					if (strcmp(palavra, palavraBuscaChar) == 0){
            					contadorOcorrenciaPalavra++;
       						}
						}
						for (char *palavra = strtok(textoAutoresCharTcc, " "); palavra != NULL; palavra = strtok(NULL, " ")){
        					if (strcmp(palavra, palavraBuscaChar) == 0){
            					contadorOcorrenciaPalavra++;
       						}
						}
						for (char *palavra = strtok(textoAssuntoCharTcc, " "); palavra != NULL; palavra = strtok(NULL, " ")){
        					if (strcmp(palavra, palavraBuscaChar) == 0){
            					contadorOcorrenciaPalavra++;
       						}
						}
				
						if (acervo1->listaTcc[i]->getPalavraChave1() == palavraBusca) contadorOcorrenciaPalavra++;
						if (acervo1->listaTcc[i]->getPalavraChave2() == palavraBusca) contadorOcorrenciaPalavra++;
						if (acervo1->listaTcc[i]->getPalavraChave3() == palavraBusca) contadorOcorrenciaPalavra++;
						if (acervo1->listaTcc[i]->getCdu() == palavraBusca) contadorOcorrenciaPalavra++;
						if (acervo1->listaTcc[i]->getCidade() == palavraBusca) contadorOcorrenciaPalavra++;
					
						if (contadorOcorrenciaPalavra>0) acervo1->listaTcc[i]->informacoesTcc();
						
					}
				}
			}
		}
		
		else if (opcao == 7){
			string deletar;
			cout << "Digite o CDU do item a ser deletado: ";
			cin >> deletar;
			
			for (int j=0; j<contadorLivros; j++){
				if (acervo1->listaLivros[j]->getCdu() == deletar){
					acervo1->listaLivros[j] = NULL;
					confereVetorLivros[j] = false;
					contadorLivros--;
				}
			}
			
			for (int j=0; j<contadorPeriodicos; j++){
				if (acervo1->listaPeriodicos[j]->getCdu() == deletar){
					acervo1->listaPeriodicos[j] = NULL;
					confereVetorPeriodicos[j] = false;
					contadorPeriodicos--;
				}
			}
			
			for (int j=0; j<contadorRelatorios; j++){
				if (acervo1->listaRelatorios[j]->getCdu() == deletar){
					acervo1->listaRelatorios[j] = NULL;
					confereVetorRelatorios[j] = false;
					contadorRelatorios--;
				}
			}
			
			for (int j=0; j<contadorMidias; j++){
				if (acervo1->listaMidias[j]->getCdu() == deletar){
					acervo1->listaMidias[j] = NULL;
					confereVetorMidias[j] = false;
					contadorMidias--;
				}
			}
			
			for (int j=0; j<contadorCartaz; j++){
				if (acervo1->listaCartaz[j]->getCdu() == deletar){
					acervo1->listaCartaz[j] = NULL;
					confereVetorCartaz[j] = false;
					contadorCartaz--;
				}
			}
			
			for (int j=0; j<contadorMapas; j++){
				if (acervo1->listaMapas[j]->getCdu() == deletar){
					acervo1->listaMapas[j] = NULL;
					confereVetorMapas[j] = false;
					contadorMapas--;
				}
			}
			
			for (int j=0; j<contadorTcc; j++){
				if (acervo1->listaTcc[j]->getCdu() == deletar){
					acervo1->listaTcc[j] = NULL;
					confereVetorTcc[j] = false;
					contadorTcc--;
				}
			}
		}
		
		else if (opcao == 8){
			string itemEmprestado;
			string dataDevolucao;
			string codigoUsuario;
			bool auxVerificaExistencia = false;
			
			cout << "Digite o CDU do item a ser emprestado: ";
			cin >> itemEmprestado;
			
			if (!auxVerificaExistencia && confereVetorLivros[0]){
				for (int i=0; i<10; i++){
					if (acervo1->listaLivros[i]->getCdu() == itemEmprestado) {
						cout << "Item encontrado no acervo com sucesso!" << endl;
						cout << "Digite o codigo de usuario da pessoa: ";
						cin >> codigoUsuario;
						auxVerificaExistencia = true;
						for (int j=0; j<10; j++){
							if (emprestimo1->listaPessoas[j]->getCodigoCliente() == codigoUsuario){
								acervo1->listaLivros[i]->setAlugado(true);
								cin.clear();
								fflush(stdin);
								cout << "Usuario encontrado com sucesso!" << endl;
								cout << "Digite a data de devolucao: ";
								getline(cin, dataDevolucao);
								acervo1->listaLivros[i]->setDataDevolucao(dataDevolucao);
								livro *livro3 = new livro;
								livro3->setTitulo(acervo1->listaLivros[i]->getTitulo());
								livro3->setAutores(acervo1->listaLivros[i]->getAutores());
								livro3->setCidade(acervo1->listaLivros[i]->getCidade());
								livro3->setAno(acervo1->listaLivros[i]->getAno());
								livro3->setNumEdicao(acervo1->listaLivros[i]->getNumEdicao());
								livro3->setEditora(acervo1->listaLivros[i]->getEditora());
								livro3->setNumPaginas(acervo1->listaLivros[i]->getNumPaginas());
								livro3->setNumCm(acervo1->listaLivros[i]->getNumCm());
								livro3->setIsbn(acervo1->listaLivros[i]->getIsbn());
								livro3->setAssunto(acervo1->listaLivros[i]->getAssunto());
								livro3->setPalavraChave1(acervo1->listaLivros[i]->getPalavraChave1());
								livro3->setPalavraChave2(acervo1->listaLivros[i]->getPalavraChave2());
								livro3->setPalavraChave3(acervo1->listaLivros[i]->getPalavraChave3());
								livro3->setCdu(acervo1->listaLivros[i]->getCdu());
								livro3->setAlugado(true);
								livro3->setDataDevolucao(dataDevolucao);
								emprestimo1->listaPessoas[j]->listaLivros[contadorEmprestimoLivro] = livro3;
								contadorEmprestimoLivro++;
								contadorUsuarioEncontrado++;
								break;
							}
							if (j+1 == contadorUsuarios) break;
						}
						break;
					}
					if (confereVetorLivros[i+1] == false) break;
				}
			}
			
			
			if (!auxVerificaExistencia && confereVetorPeriodicos[0]){
				for (int i=0; i<10; i++){
					if (acervo1->listaPeriodicos[i]->getCdu() == itemEmprestado) {
						cout << "Item encontrado no acervo com sucesso!" << endl;
						cout << "Digite o codigo de usuario da pessoa: ";
						cin >> codigoUsuario;
						auxVerificaExistencia = true;
						for (int j=0; j<10; j++){
							if (emprestimo1->listaPessoas[j]->getCodigoCliente() == codigoUsuario){
								acervo1->listaPeriodicos[i]->setAlugado(true);
								cin.clear();
								fflush(stdin);
								cout << "Usuario encontrado com sucesso!" << endl;
								cout << "Digite a data de devolucao: ";
								getline(cin, dataDevolucao);
								acervo1->listaPeriodicos[i]->setDataDevolucao(dataDevolucao);
								periodico *periodico3 = new periodico;
								periodico3->setTitulo(acervo1->listaPeriodicos[i]->getTitulo());
								periodico3->setCidade(acervo1->listaPeriodicos[i]->getCidade());
								periodico3->setAno(acervo1->listaPeriodicos[i]->getAno());
								periodico3->setNumEdicao(acervo1->listaPeriodicos[i]->getNumEdicao());
								periodico3->setEditora(acervo1->listaPeriodicos[i]->getEditora());
								periodico3->setNumPaginas(acervo1->listaPeriodicos[i]->getNumPaginas());
								periodico3->setNumCm(acervo1->listaPeriodicos[i]->getNumCm());
								periodico3->setIsbn(acervo1->listaPeriodicos[i]->getIsbn());
								periodico3->setAssunto(acervo1->listaPeriodicos[i]->getAssunto());
								periodico3->setCdu(acervo1->listaPeriodicos[i]->getCdu());
								periodico3->setAlugado(true);
								periodico3->setDataDevolucao(dataDevolucao);
								emprestimo1->listaPessoas[j]->listaPeriodicos[contadorEmprestimoPeriodico] = periodico3;
								contadorEmprestimoPeriodico++;
								contadorUsuarioEncontrado++;
								break;
							}
							if (j+1 == contadorUsuarios) break;
						}
						break;
					}
					if (confereVetorPeriodicos[i+1] == false) break;
				}
			}
			
			
			if (!auxVerificaExistencia && confereVetorRelatorios[0]){
				for (int i=0; i<10; i++){
					if (acervo1->listaRelatorios[i]->getCdu() == itemEmprestado) {
						cout << "Item encontrado no acervo com sucesso!" << endl;
						cout << "Digite o codigo de usuario da pessoa: ";
						cin >> codigoUsuario;
						auxVerificaExistencia = true;
						for (int j=0; j<10; j++){
							if (emprestimo1->listaPessoas[j]->getCodigoCliente() == codigoUsuario){
								acervo1->listaRelatorios[i]->setAlugado(true);
								cin.clear();
								fflush(stdin);
								cout << "Usuario encontrado com sucesso!" << endl;
								cout << "Digite a data de devolucao: ";
								getline(cin, dataDevolucao);
								acervo1->listaRelatorios[i]->setDataDevolucao(dataDevolucao);
								relatorio *relatorio3 = new relatorio;
								relatorio3->setTitulo(acervo1->listaRelatorios[i]->getTitulo());
								relatorio3->setAutores(acervo1->listaRelatorios[i]->getAutores());
								relatorio3->setCidade(acervo1->listaRelatorios[i]->getCidade());
								relatorio3->setAno(acervo1->listaRelatorios[i]->getAno());
								relatorio3->setNumPaginas(acervo1->listaRelatorios[i]->getNumPaginas());
								relatorio3->setAssunto(acervo1->listaRelatorios[i]->getAssunto());
								relatorio3->setPalavraChave1(acervo1->listaRelatorios[i]->getPalavraChave1());
								relatorio3->setPalavraChave2(acervo1->listaRelatorios[i]->getPalavraChave2());
								relatorio3->setPalavraChave3(acervo1->listaRelatorios[i]->getPalavraChave3());
								relatorio3->setCdu(acervo1->listaRelatorios[i]->getCdu());
								relatorio3->setAlugado(true);
								relatorio3->setDataDevolucao(dataDevolucao);
								emprestimo1->listaPessoas[j]->listaRelatorios[contadorEmprestimoRelatorio] = relatorio3;
								contadorEmprestimoRelatorio++;
								contadorUsuarioEncontrado++;
								break;
							}
							if (j+1 == contadorUsuarios) break;
						}
						break;
					}
					if (confereVetorRelatorios[i+1] == false) break;
				}
			}
			
			
			if (!auxVerificaExistencia && confereVetorMidias[0]){
				for (int i=0; i<10; i++){
					if (acervo1->listaMidias[i]->getCdu() == itemEmprestado) {
						cout << "Item encontrado no acervo com sucesso!" << endl;
						cout << "Digite o codigo de usuario da pessoa: ";
						cin >> codigoUsuario;
						auxVerificaExistencia = true;
						for (int j=0; j<10; j++){
							if (emprestimo1->listaPessoas[j]->getCodigoCliente() == codigoUsuario){
								acervo1->listaMidias[i]->setAlugado(true);
								cin.clear();
								fflush(stdin);
								cout << "Usuario encontrado com sucesso!" << endl;
								cout << "Digite a data de devolucao: ";
								getline(cin, dataDevolucao);
								acervo1->listaMidias[i]->setDataDevolucao(dataDevolucao);
								midia *midia3 = new midia;
								midia3->setTitulo(acervo1->listaMidias[i]->getTitulo());
								midia3->setEstudio(acervo1->listaMidias[i]->getEstudio());
								midia3->setDirecao(acervo1->listaMidias[i]->getDirecao());
								midia3->setCidade(acervo1->listaMidias[i]->getCidade());
								midia3->setAno(acervo1->listaMidias[i]->getAno());
								midia3->setDuracao(acervo1->listaMidias[i]->getDuracao());
								midia3->setAssunto(acervo1->listaMidias[i]->getAssunto());
								midia3->setCdu(acervo1->listaMidias[i]->getCdu());
								midia3->setAlugado(true);
								midia3->setDataDevolucao(dataDevolucao);
								emprestimo1->listaPessoas[j]->listaMidias[contadorEmprestimoMidia] = midia3;
								contadorEmprestimoMidia++;
								contadorUsuarioEncontrado++;
								break;
							}
							if (j+1 == contadorUsuarios) break;
						}
						break;
					}
					if (confereVetorMidias[i+1] == false) break;
				}
			}
			
			
			if (!auxVerificaExistencia && confereVetorCartaz[0]){
				for (int i=0; i<10; i++){
					if (acervo1->listaCartaz[i]->getCdu() == itemEmprestado) {
						cout << "Item encontrado no acervo com sucesso!" << endl;
						cout << "Digite o codigo de usuario da pessoa: ";
						cin >> codigoUsuario;
						auxVerificaExistencia = true;
						for (int j=0; j<10; j++){
							if (emprestimo1->listaPessoas[j]->getCodigoCliente() == codigoUsuario){
								acervo1->listaCartaz[i]->setAlugado(true);
								cin.clear();
								fflush(stdin);
								cout << "Usuario encontrado com sucesso!" << endl;
								cout << "Digite a data de devolucao: ";
								getline(cin, dataDevolucao);
								acervo1->listaCartaz[i]->setDataDevolucao(dataDevolucao);
								cartaz *cartaz3 = new cartaz;
								cartaz3->setTitulo(acervo1->listaCartaz[i]->getTitulo());
								cartaz3->setAutores(acervo1->listaCartaz[i]->getAutores());
								cartaz3->setCidade(acervo1->listaCartaz[i]->getCidade());
								cartaz3->setAno(acervo1->listaCartaz[i]->getAno());
								cartaz3->setNumCm(acervo1->listaCartaz[i]->getNumCm());
								cartaz3->setAssunto(acervo1->listaCartaz[i]->getAssunto());
								cartaz3->setPalavraChave1(acervo1->listaCartaz[i]->getPalavraChave1());
								cartaz3->setPalavraChave2(acervo1->listaCartaz[i]->getPalavraChave2());
								cartaz3->setPalavraChave3(acervo1->listaCartaz[i]->getPalavraChave3());
								cartaz3->setCdu(acervo1->listaCartaz[i]->getCdu());
								cartaz3->setAlugado(true);
								cartaz3->setDataDevolucao(dataDevolucao);
								emprestimo1->listaPessoas[j]->listaCartaz[contadorEmprestimoCartaz] = cartaz3;
								contadorEmprestimoCartaz++;
								contadorUsuarioEncontrado++;
								break;
							}
							if (j+1 == contadorUsuarios) break;
						}
						break;
					}
					if (confereVetorCartaz[i+1] == false) break;
				}
			}
			
			
			if (!auxVerificaExistencia && confereVetorMapas[0]){
				for (int i=0; i<10; i++){
					if (acervo1->listaMapas[i]->getCdu() == itemEmprestado) {
						cout << "Item encontrado no acervo com sucesso!" << endl;
						cout << "Digite o codigo de usuario da pessoa: ";
						cin >> codigoUsuario;
						auxVerificaExistencia = true;
						for (int j=0; j<10; j++){
							if (emprestimo1->listaPessoas[j]->getCodigoCliente() == codigoUsuario){
								acervo1->listaMapas[i]->setAlugado(true);
								cin.clear();
								fflush(stdin);
								cout << "Usuario encontrado com sucesso!" << endl;
								cout << "Digite a data de devolucao: ";
								getline(cin, dataDevolucao);
								acervo1->listaMapas[i]->setDataDevolucao(dataDevolucao);
								mapa *mapa3 = new mapa;
								mapa3->setTitulo(acervo1->listaMapas[i]->getTitulo());
								mapa3->setAutores(acervo1->listaMapas[i]->getAutores());
								mapa3->setCidade(acervo1->listaMapas[i]->getCidade());
								mapa3->setAno(acervo1->listaMapas[i]->getAno());
								mapa3->setNumEdicao(acervo1->listaMapas[i]->getNumEdicao());
								mapa3->setEditora(acervo1->listaMapas[i]->getEditora());
								mapa3->setNumPaginas(acervo1->listaMapas[i]->getNumPaginas());
								mapa3->setNumCm(acervo1->listaMapas[i]->getNumCm());
								mapa3->setIsbn(acervo1->listaMapas[i]->getIsbn());
								mapa3->setAssunto(acervo1->listaMapas[i]->getAssunto());
								mapa3->setPalavraChave1(acervo1->listaMapas[i]->getPalavraChave1());
								mapa3->setPalavraChave2(acervo1->listaMapas[i]->getPalavraChave2());
								mapa3->setPalavraChave3(acervo1->listaMapas[i]->getPalavraChave3());
								mapa3->setCdu(acervo1->listaMapas[i]->getCdu());
								mapa3->setAlugado(true);
								mapa3->setDataDevolucao(dataDevolucao);
								emprestimo1->listaPessoas[j]->listaMapas[contadorEmprestimoMapa] = mapa3;
								contadorEmprestimoMapa++;
								contadorUsuarioEncontrado++;
								break;
							}
							if (j+1 == contadorUsuarios) break;
						}
						break;
					}
					if (confereVetorMapas[i+1] == false) break;
				}
			}
			
			
			if (!auxVerificaExistencia && confereVetorTcc[0]){
				for (int i=0; i<10; i++){
					if (acervo1->listaTcc[i]->getCdu() == itemEmprestado) {
						cout << "Item encontrado no acervo com sucesso!" << endl;
						cout << "Digite o codigo de usuario da pessoa: ";
						cin >> codigoUsuario;
						auxVerificaExistencia = true;
						for (int j=0; j<10; j++){
							if (emprestimo1->listaPessoas[j]->getCodigoCliente() == codigoUsuario){
								acervo1->listaTcc[i]->setAlugado(true);
								cin.clear();
								fflush(stdin);
								cout << "Usuario encontrado com sucesso!" << endl;
								cout << "Digite a data de devolucao: ";
								getline(cin, dataDevolucao);
								acervo1->listaTcc[i]->setDataDevolucao(dataDevolucao);
								tcc *tcc3 = new tcc;
								tcc3->setTitulo(acervo1->listaTcc[i]->getTitulo());
								tcc3->setAutores(acervo1->listaTcc[i]->getAutores());
								tcc3->setCidade(acervo1->listaTcc[i]->getCidade());
								tcc3->setAno(acervo1->listaTcc[i]->getAno());
								tcc3->setNumPaginas(acervo1->listaTcc[i]->getNumPaginas());
								tcc3->setAssunto(acervo1->listaTcc[i]->getAssunto());
								tcc3->setPalavraChave1(acervo1->listaTcc[i]->getPalavraChave1());
								tcc3->setPalavraChave2(acervo1->listaTcc[i]->getPalavraChave2());
								tcc3->setPalavraChave3(acervo1->listaTcc[i]->getPalavraChave3());
								tcc3->setCdu(acervo1->listaTcc[i]->getCdu());
								tcc3->setAlugado(true);
								tcc3->setDataDevolucao(dataDevolucao);
								emprestimo1->listaPessoas[j]->listaTcc[contadorEmprestimoTcc] = tcc3;
								contadorEmprestimoTcc++;
								contadorUsuarioEncontrado++;
								break;
							}
							if (j+1 == contadorUsuarios) break;
						}
						break;
					}
					if (confereVetorTcc[i+1] == false) break;
				}
			}
			
			
			if (!auxVerificaExistencia) cout << "Item não encontrado!" << endl;
			else if (contadorUsuarioEncontrado == 0) cout << "Usuario não encontrado" << endl;
			contadorUsuarioEncontrado = 0;
			auxVerificaExistencia = false;
			
		}
		
		else if (opcao == 9){
			string itemDevolucao;
			string codigoUsuarioDevolve;
			bool auxVerificaExistenciaDevolve = false;
			
			cout << "Digite o CDU do item a ser devolvido: ";
			cin >> itemDevolucao;
			
			if (!auxVerificaExistenciaDevolve && confereVetorLivros[0]){
				for (int i=0; i<10; i++){
					if (acervo1->listaLivros[i]->getCdu() == itemDevolucao && acervo1->listaLivros[i]->getAlugado() == true) {	
						cout << "Digite o codigo de usuario da pessoa: ";
						cin >> codigoUsuarioDevolve;
						auxVerificaExistenciaDevolve = true;
						for (int j=0; j<10; j++){
							if (emprestimo1->listaPessoas[j]->getCodigoCliente() == codigoUsuarioDevolve){
								acervo1->listaLivros[i]->setAlugado(false);
								cout << "Item devoldido com sucesso!" << endl;
								cout << "Usuario encontrado com sucesso!" << endl;
								contadorUsuarioEncontrado++;
								acervo1->listaLivros[i]->setDataDevolucao("");
								for (int k=0; k<10; k++){
									if (emprestimo1->listaPessoas[j]->listaLivros[k]->getCdu() == itemDevolucao){
										emprestimo1->listaPessoas[j]->listaLivros[k] = NULL;
										contadorEmprestimoLivro--;
										break;
									}
									if (k+1 == contadorEmprestimoLivro) break;
								}
								break;
							}
							if (j+1 == contadorUsuarios) break;
						}
						break;
					}
					if (confereVetorLivros[i+1] == false) break;
				}
			}
			
			
			if (!auxVerificaExistenciaDevolve && confereVetorPeriodicos[0]){
				for (int i=0; i<10; i++){
					if (acervo1->listaPeriodicos[i]->getCdu() == itemDevolucao && acervo1->listaPeriodicos[i]->getAlugado() == true) {	
						cout << "Digite o codigo de usuario da pessoa: ";
						cin >> codigoUsuarioDevolve;
						auxVerificaExistenciaDevolve = true;
						for (int j=0; j<10; j++){
							if (emprestimo1->listaPessoas[j]->getCodigoCliente() == codigoUsuarioDevolve){
								acervo1->listaPeriodicos[i]->setAlugado(false);
								cout << "Item devoldido com sucesso!" << endl;
								cout << "Usuario encontrado com sucesso!" << endl;
								contadorUsuarioEncontrado++;
								acervo1->listaPeriodicos[i]->setDataDevolucao("");
								for (int k=0; k<10; k++){
									if (emprestimo1->listaPessoas[j]->listaPeriodicos[k]->getCdu() == itemDevolucao){
										emprestimo1->listaPessoas[j]->listaPeriodicos[k] = NULL;
										contadorEmprestimoLivro--;
										break;
									}
									if (k+1 == contadorEmprestimoPeriodico) break;
								}
								break;
							}
							if (j+1 == contadorUsuarios) break;
						}
						break;
					}
					if (confereVetorPeriodicos[i+1] == false) break;
				}
			}
			
			
			if (!auxVerificaExistenciaDevolve && confereVetorRelatorios[0]){
				for (int i=0; i<10; i++){
					if (acervo1->listaRelatorios[i]->getCdu() == itemDevolucao && acervo1->listaRelatorios[i]->getAlugado() == true) {
						cout << "Digite o codigo de usuario da pessoa: ";
						cin >> codigoUsuarioDevolve;
						auxVerificaExistenciaDevolve = true;
						for (int j=0; j<10; j++){
							if (emprestimo1->listaPessoas[j]->getCodigoCliente() == codigoUsuarioDevolve){
								acervo1->listaRelatorios[i]->setAlugado(false);
								cout << "Item devoldido com sucesso!" << endl;
								cout << "Usuario encontrado com sucesso!" << endl;
								contadorUsuarioEncontrado++;
								acervo1->listaRelatorios[i]->setDataDevolucao("");
								for (int k=0; k<10; k++){
									if (emprestimo1->listaPessoas[j]->listaRelatorios[k]->getCdu() == itemDevolucao){
										emprestimo1->listaPessoas[j]->listaRelatorios[k] = NULL;
										contadorEmprestimoLivro--;
										break;
									}
									if (k+1 == contadorEmprestimoRelatorio) break;
								}
								break;
							}
							if (j+1 == contadorUsuarios) break;
						}
						break;
					}
					if (confereVetorRelatorios[i+1] == false) break;
				}
			}
			
			
			if (!auxVerificaExistenciaDevolve && confereVetorMidias[0]){
				for (int i=0; i<10; i++){
					if (acervo1->listaMidias[i]->getCdu() == itemDevolucao && acervo1->listaMidias[i]->getAlugado() == true) {
						cout << "Digite o codigo de usuario da pessoa: ";
						cin >> codigoUsuarioDevolve;
						auxVerificaExistenciaDevolve = true;
						for (int j=0; j<10; j++){
							if (emprestimo1->listaPessoas[j]->getCodigoCliente() == codigoUsuarioDevolve){
								acervo1->listaMidias[i]->setAlugado(false);
								cout << "Item devoldido com sucesso!" << endl;
								cout << "Usuario encontrado com sucesso!" << endl;
								contadorUsuarioEncontrado++;
								acervo1->listaMidias[i]->setDataDevolucao("");
								for (int k=0; k<10; k++){
									if (emprestimo1->listaPessoas[j]->listaMidias[k]->getCdu() == itemDevolucao){
										emprestimo1->listaPessoas[j]->listaMidias[k] = NULL;
										contadorEmprestimoLivro--;
										break;
									}
									if (k+1 == contadorEmprestimoMidia) break;
								}
								break;
							}
							if (j+1 == contadorUsuarios) break;
						}
						break;
					}
					if (confereVetorMidias[i+1] == false) break;
				}
			}
			
			
			if (!auxVerificaExistenciaDevolve && confereVetorCartaz[0]){
				for (int i=0; i<10; i++){
					if (acervo1->listaCartaz[i]->getCdu() == itemDevolucao && acervo1->listaCartaz[i]->getAlugado() == true) {
						cout << "Digite o codigo de usuario da pessoa: ";
						cin >> codigoUsuarioDevolve;
						auxVerificaExistenciaDevolve = true;
						for (int j=0; j<10; j++){
							if (emprestimo1->listaPessoas[j]->getCodigoCliente() == codigoUsuarioDevolve){
								acervo1->listaCartaz[i]->setAlugado(false);
								cout << "Item devoldido com sucesso!" << endl;
								cout << "Usuario encontrado com sucesso!" << endl;
								contadorUsuarioEncontrado++;
								acervo1->listaCartaz[i]->setDataDevolucao("");
								for (int k=0; k<10; k++){
									if (emprestimo1->listaPessoas[j]->listaCartaz[k]->getCdu() == itemDevolucao){
										emprestimo1->listaPessoas[j]->listaCartaz[k] = NULL;
										contadorEmprestimoLivro--;
										break;
									}
									if (k+1 == contadorEmprestimoCartaz) break;
								}
								break;
							}
							if (j+1 == contadorUsuarios) break;
						}
						break;
					}
					if (confereVetorCartaz[i+1] == false) break;
				}
			}
			
			
			if (!auxVerificaExistenciaDevolve && confereVetorMapas[0]){
				for (int i=0; i<10; i++){
					if (acervo1->listaMapas[i]->getCdu() == itemDevolucao && acervo1->listaMapas[i]->getAlugado() == true) {
						cout << "Digite o codigo de usuario da pessoa: ";
						cin >> codigoUsuarioDevolve;
						auxVerificaExistenciaDevolve = true;
						for (int j=0; j<10; j++){
							if (emprestimo1->listaPessoas[j]->getCodigoCliente() == codigoUsuarioDevolve){
								acervo1->listaMapas[i]->setAlugado(false);
								cout << "Item devoldido com sucesso!" << endl;
								cout << "Usuario encontrado com sucesso!" << endl;
								contadorUsuarioEncontrado++;
								acervo1->listaMapas[i]->setDataDevolucao("");
								for (int k=0; k<10; k++){
									if (emprestimo1->listaPessoas[j]->listaMapas[k]->getCdu() == itemDevolucao){
										emprestimo1->listaPessoas[j]->listaMapas[k] = NULL;
										contadorEmprestimoLivro--;
										break;
									}
									if (k+1 == contadorEmprestimoMapa) break;
								}
								break;
							}
							if (j+1 == contadorUsuarios) break;
						}
						break;
					}
					if (confereVetorMapas[i+1] == false) break;
				}
			}
			
			
			if (!auxVerificaExistenciaDevolve && confereVetorTcc[0]){
				for (int i=0; i<10; i++){
					if (acervo1->listaTcc[i]->getCdu() == itemDevolucao && acervo1->listaTcc[i]->getAlugado() == true) {
						cout << "Digite o codigo de usuario da pessoa: ";
						cin >> codigoUsuarioDevolve;
						auxVerificaExistenciaDevolve = true;
						for (int j=0; j<10; j++){
							if (emprestimo1->listaPessoas[j]->getCodigoCliente() == codigoUsuarioDevolve){
								acervo1->listaTcc[i]->setAlugado(false);
								cout << "Item devoldido com sucesso!" << endl;
								cout << "Usuario encontrado com sucesso!" << endl;
								contadorUsuarioEncontrado++;
								acervo1->listaTcc[i]->setDataDevolucao("");
								for (int k=0; k<10; k++){
									if (emprestimo1->listaPessoas[j]->listaTcc[k]->getCdu() == itemDevolucao){
										emprestimo1->listaPessoas[j]->listaTcc[k] = NULL;
										contadorEmprestimoLivro--;
										break;
									}
									if (k+1 == contadorEmprestimoTcc) break;	
								}
								break;
							}
							if (j+1 == contadorUsuarios) break;
						}
						break;
					}
					if (confereVetorTcc[i+1] == false) break;
				}
			}
			
			if (!auxVerificaExistenciaDevolve) cout << "Item não encontrado!" << endl;
			else if (contadorUsuarioEncontrado == 0) cout << "Usuario não encontrado" << endl;
			contadorUsuarioEncontrado = 0;
			auxVerificaExistenciaDevolve = false;
		}
	}
	
	delete(emprestimo1);
	emprestimo1 = NULL;
	delete(acervo1);
	acervo1 = NULL;
	
	return 0;
}
