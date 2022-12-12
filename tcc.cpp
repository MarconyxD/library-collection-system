#include <iostream>
#include "tcc.h"

tcc::tcc()
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

tcc::~tcc()
{
	cout << "Deletando o objeto referente ao TCC: " << titulo << endl;
}

void tcc::setTitulo(string titulo){
	this->titulo = titulo;
}

string tcc::getTitulo(){
	return titulo;
}

void tcc::setAutores(string autores){
	this->autores = autores;
}

string tcc::getAutores(){
	return autores;
}

void tcc::setCidade(string cidade){
	this->cidade = cidade;
}

string tcc::getCidade(){
	return cidade;
}

void tcc::setAno(int ano){
	this->ano = ano;
}

int tcc::getAno(){
	return ano;
}

void tcc::setAssunto(string assunto){
	this->assunto = assunto;
}

string tcc::getAssunto(){
	return assunto;
}

void tcc::setCdu(string cdu){
	this->cdu = cdu;
}

string tcc::getCdu(){
	return cdu;
}

void tcc::setAlugado(bool alugado){
	this->alugado = alugado;
}

bool tcc::getAlugado(){
	return alugado;
}

void tcc::setDataDevolucao(string dataDevolucao){
	this->dataDevolucao = dataDevolucao;
}

string tcc::getDataDevolucao(){
	return dataDevolucao;
}

void tcc::setNumPaginas(int numPaginas){
	this->numPaginas = numPaginas;
}

int tcc::getNumPaginas(){
	return numPaginas;
}

void tcc::setPalavraChave1(string palavraChave1){
	this->palavraChave1 = palavraChave1;
}

string tcc::getPalavraChave1(){
	return palavraChave1;
}

void tcc::setPalavraChave2(string palavraChave2){
	this->palavraChave2 = palavraChave2;
}

string tcc::getPalavraChave2(){
	return palavraChave2;
}

void tcc::setPalavraChave3(string palavraChave3){
	this->palavraChave3 = palavraChave3;
}

string tcc::getPalavraChave3(){
	return palavraChave3;
}

void tcc::informacoesTcc(){
	
	cout << "		------------------ Ficha Catalografica do TCC ------------------" << endl;
	cout << getAutores() << endl;
	cout << getTitulo() << " - " << getCidade() << " , " << getAno() << "." << endl;
	cout << getNumPaginas() << " pag." << endl;
	cout << "1. " << getAssunto() << ". I. " << getPalavraChave1() << ". II. " << getPalavraChave2() << ". III. " << getPalavraChave3() << "." << endl;
	cout << "                                   CDU: " << getCdu() << endl;
	cout << "\nInformacoes aluguel:\nAlugado: " << getAlugado() << "\nData devolucao: " << getDataDevolucao() << endl;
	
	cout << "		-----------------------------------------------------------" << endl << endl;
	
}
