#include <iostream>
#include "mapa.h"

mapa::mapa()
{
	titulo = "";
	autores = "";
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
	palavraChave1 = "";
	palavraChave2 = "";
	palavraChave3 = "";
}

mapa::~mapa()
{
	cout << "Deletando o objeto referente ao mapa: " << titulo << endl;
}

void mapa::setTitulo(string titulo){
	this->titulo = titulo;
}

string mapa::getTitulo(){
	return titulo;
}

void mapa::setAutores(string autores){
	this->autores = autores;
}

string mapa::getAutores(){
	return autores;
}

void mapa::setCidade(string cidade){
	this->cidade = cidade;
}

string mapa::getCidade(){
	return cidade;
}

void mapa::setAno(int ano){
	this->ano = ano;
}

int mapa::getAno(){
	return ano;
}

void mapa::setAssunto(string assunto){
	this->assunto = assunto;
}

string mapa::getAssunto(){
	return assunto;
}

void mapa::setCdu(string cdu){
	this->cdu = cdu;
}

string mapa::getCdu(){
	return cdu;
}

void mapa::setAlugado(bool alugado){
	this->alugado = alugado;
}

bool mapa::getAlugado(){
	return alugado;
}

void mapa::setDataDevolucao(string dataDevolucao){
	this->dataDevolucao = dataDevolucao;
}

string mapa::getDataDevolucao(){
	return dataDevolucao;
}

void mapa::setNumEdicao(int numEdicao){
	this->numEdicao = numEdicao;
}

int mapa::getNumEdicao(){
	return numEdicao;
}


void mapa::setEditora(string editora){
	this->editora = editora;
}

string mapa::getEditora(){
	return editora;
}

void mapa::setNumPaginas(int numPaginas){
	this->numPaginas = numPaginas;
}

int mapa::getNumPaginas(){
	return numPaginas;
}

void mapa::setNumCm(int numCm){
	this->numCm = numCm;
}

int mapa::getNumCm(){
	return numCm;
}

void mapa::setIsbn(string isbn){
	this->isbn = isbn;
}

string mapa::getIsbn(){
	return isbn;
}

void mapa::setPalavraChave1(string palavraChave1){
	this->palavraChave1 = palavraChave1;
}

string mapa::getPalavraChave1(){
	return palavraChave1;
}

void mapa::setPalavraChave2(string palavraChave2){
	this->palavraChave2 = palavraChave2;
}

string mapa::getPalavraChave2(){
	return palavraChave2;
}

void mapa::setPalavraChave3(string palavraChave3){
	this->palavraChave3 = palavraChave3;
}

string mapa::getPalavraChave3(){
	return palavraChave3;
}

void mapa::informacoesMapa(){
	
	cout << "		------------------ Ficha Catalografica do Mapa ------------------" << endl;
	cout << getAutores() << endl;
	cout << getTitulo() << " - Edicao " << getNumEdicao() << " - " << getCidade() << " : Editora " << getEditora() << " , " << getAno() << "." << endl;
	cout << getNumPaginas() << " pag. : " << getNumCm() << " cm." << endl;
	cout << "ISBN: " << getIsbn() << endl;
	cout << "1. " << getAssunto() << ". I. " << getPalavraChave1() << ". II. " << getPalavraChave2() << ". III. " << getPalavraChave3() << "." << endl;
	cout << "                                   CDU: " << getCdu() << endl;
	cout << "\nInformacoes aluguel:\nAlugado: " << getAlugado() << "\nData devolucao: " << getDataDevolucao() << endl;
	
	cout << "		-----------------------------------------------------------" << endl << endl;
	
}
