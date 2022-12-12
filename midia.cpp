#include <iostream>
#include "midia.h"

midia::midia()
{
	titulo = "";
	cidade = "";
	ano = 0;
	assunto = "";
	cdu = "";
	alugado = false;
	dataDevolucao = "";
	estudio = "";
	direcao = "";
	duracao = "";
}

midia::~midia()
{
	cout << "Deletando o objeto referente ao midia: " << titulo << endl;
}

void midia::setTitulo(string titulo){
	this->titulo = titulo;
}

string midia::getTitulo(){
	return titulo;
}

void midia::setCidade(string cidade){
	this->cidade = cidade;
}

string midia::getCidade(){
	return cidade;
}

void midia::setAno(int ano){
	this->ano = ano;
}

int midia::getAno(){
	return ano;
}

void midia::setAssunto(string assunto){
	this->assunto = assunto;
}

string midia::getAssunto(){
	return assunto;
}

void midia::setCdu(string cdu){
	this->cdu = cdu;
}

string midia::getCdu(){
	return cdu;
}

void midia::setAlugado(bool alugado){
	this->alugado = alugado;
}

bool midia::getAlugado(){
	return alugado;
}

void midia::setDataDevolucao(string dataDevolucao){
	this->dataDevolucao = dataDevolucao;
}

string midia::getDataDevolucao(){
	return dataDevolucao;
}

void midia::setEstudio(string estudio){
	this->estudio = estudio;
}

string midia::getEstudio(){
	return estudio;
}


void midia::setDirecao(string direcao){
	this->direcao = direcao;
}

string midia::getDirecao(){
	return direcao;
}

void midia::setDuracao(string duracao){
	this->duracao = duracao;
}

string midia::getDuracao(){
	return duracao;
}

void midia::informacoesMidia(){
	
	cout << "		------------------ Ficha Catalografica da Midia ------------------" << endl;
	cout << getTitulo() << " - " << getCidade() << " , " << getAno() << "." << endl;
	cout << "Direcao: " << getDirecao() << ".\nEstudio: " << getEstudio() << ".\nDuracao: " << getDuracao() << "." << endl;
	cout << "1. " << getAssunto() << "." << endl;
	cout << "                                   CDU: " << getCdu() << endl;
	cout << "\nInformacoes aluguel:\nAlugado: " << getAlugado() << "\nData devolucao: " << getDataDevolucao() << endl;
	
	cout << "		-----------------------------------------------------------" << endl << endl;
	
}
