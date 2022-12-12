#include <iostream>
#include "cartaz.h"

cartaz::cartaz()
{
	titulo = "";
	autores = "";
	cidade = "";
	ano = 0;
	assunto = "";
	cdu = "";
	alugado = false;
	dataDevolucao = "";
	numCm = 0;
	palavraChave1 = "";
	palavraChave2 = "";
	palavraChave3 = "";
}

cartaz::~cartaz()
{
	cout << "Deletando o objeto referente ao cartaz: " << titulo << endl;
}

void cartaz::setTitulo(string titulo){
	this->titulo = titulo;
}

string cartaz::getTitulo(){
	return titulo;
}

void cartaz::setAutores(string autores){
	this->autores = autores;
}

string cartaz::getAutores(){
	return autores;
}

void cartaz::setCidade(string cidade){
	this->cidade = cidade;
}

string cartaz::getCidade(){
	return cidade;
}

void cartaz::setAno(int ano){
	this->ano = ano;
}

int cartaz::getAno(){
	return ano;
}

void cartaz::setAssunto(string assunto){
	this->assunto = assunto;
}

string cartaz::getAssunto(){
	return assunto;
}

void cartaz::setCdu(string cdu){
	this->cdu = cdu;
}

string cartaz::getCdu(){
	return cdu;
}

void cartaz::setAlugado(bool alugado){
	this->alugado = alugado;
}

bool cartaz::getAlugado(){
	return alugado;
}

void cartaz::setDataDevolucao(string dataDevolucao){
	this->dataDevolucao = dataDevolucao;
}

string cartaz::getDataDevolucao(){
	return dataDevolucao;
}

void cartaz::setNumCm(int numCm){
	this->numCm = numCm;
}

int cartaz::getNumCm(){
	return numCm;
}

void cartaz::setPalavraChave1(string palavraChave1){
	this->palavraChave1 = palavraChave1;
}

string cartaz::getPalavraChave1(){
	return palavraChave1;
}

void cartaz::setPalavraChave2(string palavraChave2){
	this->palavraChave2 = palavraChave2;
}

string cartaz::getPalavraChave2(){
	return palavraChave2;
}

void cartaz::setPalavraChave3(string palavraChave3){
	this->palavraChave3 = palavraChave3;
}

string cartaz::getPalavraChave3(){
	return palavraChave3;
}

void cartaz::informacoesCartaz(){
	
	cout << "		------------------ Ficha Catalografica do Cartaz ------------------" << endl;
	cout << getAutores() << endl;
	cout << getTitulo() << " - " << getCidade() << " , " << getAno() << "." << endl;
	cout << getNumCm() << " cm." << endl;
	cout << "1. " << getAssunto() << ". I. " << getPalavraChave1() << ". II. " << getPalavraChave2() << ". III. " << getPalavraChave3() << "." << endl;
	cout << "                                   CDU: " << getCdu() << endl;
	cout << "\nInformacoes aluguel:\nAlugado: " << getAlugado() << "\nData devolucao: " << getDataDevolucao() << endl;
	
	cout << "		-----------------------------------------------------------" << endl << endl;
	
}
