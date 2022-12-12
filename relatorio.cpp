#include <iostream>
#include "relatorio.h"

relatorio::relatorio()
{
	titulo = "";
	autores = "";
	cidade = "";
	ano = 0;
	assunto = "";
	cdu = "";
	alugado = false;
	dataDevolucao = "";
	numPaginas = 0;
	palavraChave1 = "";
	palavraChave2 = "";
	palavraChave3 = "";
	
}

relatorio::~relatorio()
{
	cout << "Deletando o objeto referente ao relatorio: " << titulo << endl;
}

void relatorio::setTitulo(string titulo){
	this->titulo = titulo;
}

string relatorio::getTitulo(){
	return titulo;
}

void relatorio::setAutores(string autores){
	this->autores = autores;
}

string relatorio::getAutores(){
	return autores;
}

void relatorio::setCidade(string cidade){
	this->cidade = cidade;
}

string relatorio::getCidade(){
	return cidade;
}

void relatorio::setAno(int ano){
	this->ano = ano;
}

int relatorio::getAno(){
	return ano;
}

void relatorio::setAssunto(string assunto){
	this->assunto = assunto;
}

string relatorio::getAssunto(){
	return assunto;
}

void relatorio::setCdu(string cdu){
	this->cdu = cdu;
}

string relatorio::getCdu(){
	return cdu;
}

void relatorio::setAlugado(bool alugado){
	this->alugado = alugado;
}

bool relatorio::getAlugado(){
	return alugado;
}

void relatorio::setDataDevolucao(string dataDevolucao){
	this->dataDevolucao = dataDevolucao;
}

string relatorio::getDataDevolucao(){
	return dataDevolucao;
}

void relatorio::setNumPaginas(int numPaginas){
	this->numPaginas = numPaginas;
}

int relatorio::getNumPaginas(){
	return numPaginas;
}

void relatorio::setPalavraChave1(string palavraChave1){
	this->palavraChave1 = palavraChave1;
}

string relatorio::getPalavraChave1(){
	return palavraChave1;
}

void relatorio::setPalavraChave2(string palavraChave2){
	this->palavraChave2 = palavraChave2;
}

string relatorio::getPalavraChave2(){
	return palavraChave2;
}

void relatorio::setPalavraChave3(string palavraChave3){
	this->palavraChave3 = palavraChave3;
}

string relatorio::getPalavraChave3(){
	return palavraChave3;
}

void relatorio::informacoesRelatorio(){
	
	cout << "		------------------ Ficha Catalografica do Relatorio ------------------" << endl;
	cout << getAutores() << endl;
	cout << getTitulo() << " - " << getCidade() << " , " << getAno() << "." << endl;
	cout << getNumPaginas() << " pag." << endl;
	cout << "1. " << getAssunto() << ". I. " << getPalavraChave1() << ". II. " << getPalavraChave2() << ". III. " << getPalavraChave3() << "." << endl;
	cout << "                                   CDU: " << getCdu() << endl;
	cout << "\nInformacoes aluguel:\nAlugado: " << getAlugado() << "\nData devolucao: " << getDataDevolucao() << endl;
	
	cout << "		-----------------------------------------------------------" << endl << endl;
	
}
