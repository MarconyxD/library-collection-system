#include <iostream>
#include "livro.h"

livro::livro()
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

livro::~livro()
{
	cout << "Deletando o objeto referente ao livro: " << titulo << endl;
}

void livro::setTitulo(string titulo){
	this->titulo = titulo;
}

string livro::getTitulo(){
	return titulo;
}

void livro::setAutores(string autores){
	this->autores = autores;
}

string livro::getAutores(){
	return autores;
}

void livro::setCidade(string cidade){
	this->cidade = cidade;
}

string livro::getCidade(){
	return cidade;
}

void livro::setAno(int ano){
	this->ano = ano;
}

int livro::getAno(){
	return ano;
}

void livro::setAssunto(string assunto){
	this->assunto = assunto;
}

string livro::getAssunto(){
	return assunto;
}

void livro::setCdu(string cdu){
	this->cdu = cdu;
}

string livro::getCdu(){
	return cdu;
}

void livro::setAlugado(bool alugado){
	this->alugado = alugado;
}

bool livro::getAlugado(){
	return alugado;
}

void livro::setDataDevolucao(string dataDevolucao){
	this->dataDevolucao = dataDevolucao;
}

string livro::getDataDevolucao(){
	return dataDevolucao;
}

void livro::setNumEdicao(int numEdicao){
	this->numEdicao = numEdicao;
}

int livro::getNumEdicao(){
	return numEdicao;
}


void livro::setEditora(string editora){
	this->editora = editora;
}

string livro::getEditora(){
	return editora;
}

void livro::setNumPaginas(int numPaginas){
	this->numPaginas = numPaginas;
}

int livro::getNumPaginas(){
	return numPaginas;
}

void livro::setNumCm(int numCm){
	this->numCm = numCm;
}

int livro::getNumCm(){
	return numCm;
}

void livro::setIsbn(string isbn){
	this->isbn = isbn;
}

string livro::getIsbn(){
	return isbn;
}

void livro::setPalavraChave1(string palavraChave1){
	this->palavraChave1 = palavraChave1;
}

string livro::getPalavraChave1(){
	return palavraChave1;
}

void livro::setPalavraChave2(string palavraChave2){
	this->palavraChave2 = palavraChave2;
}

string livro::getPalavraChave2(){
	return palavraChave2;
}

void livro::setPalavraChave3(string palavraChave3){
	this->palavraChave3 = palavraChave3;
}

string livro::getPalavraChave3(){
	return palavraChave3;
}

void livro::informacoesLivro(){
	
	cout << "		------------------ Ficha Catalografica do Livro ------------------" << endl;
	cout << getAutores() << endl;
	cout << getTitulo() << " - Edicao " << getNumEdicao() << " - " << getCidade() << " : Editora " << getEditora() << " , " << getAno() << "." << endl;
	cout << getNumPaginas() << " pag. : " << getNumCm() << " cm." << endl;
	cout << "ISBN: " << getIsbn() << endl;
	cout << "1. " << getAssunto() << ". I. " << getPalavraChave1() << ". II. " << getPalavraChave2() << ". III. " << getPalavraChave3() << "." << endl;
	cout << "                                   CDU: " << getCdu() << endl;
	cout << "\nInformacoes aluguel:\nAlugado: " << getAlugado() << "\nData devolucao: " << getDataDevolucao() << endl;
	
	cout << "		-----------------------------------------------------------" << endl << endl;
	
}
