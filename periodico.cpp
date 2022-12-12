#include <iostream>
#include "periodico.h"

periodico::periodico()
{
	titulo = "";
	cidade = "";
	ano = 0;
	assunto = "";
	cdu = "";
	alugado = false;
	dataDevolucao = "";
	numEdicao = 0;
	editora = "";
	numPaginas = 0;
	numCm = 0;
	isbn = "";
}

periodico::~periodico()
{
	cout << "Deletando o objeto referente ao periodico: " << titulo << endl;
}

void periodico::setTitulo(string titulo){
	this->titulo = titulo;
}

string periodico::getTitulo(){
	return titulo;
}

void periodico::setCidade(string cidade){
	this->cidade = cidade;
}

string periodico::getCidade(){
	return cidade;
}

void periodico::setAno(int ano){
	this->ano = ano;
}

int periodico::getAno(){
	return ano;
}

void periodico::setAssunto(string assunto){
	this->assunto = assunto;
}

string periodico::getAssunto(){
	return assunto;
}

void periodico::setCdu(string cdu){
	this->cdu = cdu;
}

string periodico::getCdu(){
	return cdu;
}

void periodico::setAlugado(bool alugado){
	this->alugado = alugado;
}

bool periodico::getAlugado(){
	return alugado;
}

void periodico::setDataDevolucao(string dataDevolucao){
	this->dataDevolucao = dataDevolucao;
}

string periodico::getDataDevolucao(){
	return dataDevolucao;
}

void periodico::setNumEdicao(int numEdicao){
	this->numEdicao = numEdicao;
}

int periodico::getNumEdicao(){
	return numEdicao;
}


void periodico::setEditora(string editora){
	this->editora = editora;
}

string periodico::getEditora(){
	return editora;
}

void periodico::setNumPaginas(int numPaginas){
	this->numPaginas = numPaginas;
}

int periodico::getNumPaginas(){
	return numPaginas;
}

void periodico::setNumCm(int numCm){
	this->numCm = numCm;
}

int periodico::getNumCm(){
	return numCm;
}

void periodico::setIsbn(string isbn){
	this->isbn = isbn;
}

string periodico::getIsbn(){
	return isbn;
}

void periodico::informacoesPeriodico(){
	
	cout << "		------------------ Ficha Catalografica do Periodico ------------------" << endl;
	cout << getTitulo() << " - Edicao " << getNumEdicao() << " - " << getCidade() << " : Editora " << getEditora() << " , " << getAno() << "." << endl;
	cout << getNumPaginas() << " pag. : " << getNumCm() << " cm." << endl;
	cout << "ISBN: " << getIsbn() << endl;
	cout << "1. " << getAssunto() << "." << endl;
	cout << "                                   CDU: " << getCdu() << endl;
	cout << "\nInformacoes aluguel:\nAlugado: " << getAlugado() << "\nData devolucao: " << getDataDevolucao() << endl;
	
	cout << "		-----------------------------------------------------------" << endl << endl;
	
}
