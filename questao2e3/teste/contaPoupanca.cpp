/**
 * @file     contaPoupanca.h
 * @brief    Arquivo corpo com a implementação dos metodos da classe conta poupança derivada da classe conta
 *
 * @author   Joicy Oliveira
 * @since    11/05/2018
 * @date     13/05/2018
 */
#include "contaPoupanca.h"

ContaPoupanca::ContaPoupanca(){

}

ContaPoupanca::ContaPoupanca(int n, string t, double s) {
	numero = n;
	titular = t;
	saldo = s;
	juros = 0.0;
	dia = 1;
	mes = 1;
	ano = 2016;
}

ContaPoupanca::~ContaPoupanca() {

}

/** @brief Retorna o numero da conta */
int ContaPoupanca::getNumero() {
	return numero;
}

/** @brief Altera o numero da conta */
void ContaPoupanca::setNumero(int n) {
	numero = n;
}

/** @brief Retorna o saldo da conta */
double ContaPoupanca::getSaldo() {
	return saldo;
}

/** @brief Retorna o titular da conta */
string ContaPoupanca::getTitular() {
	return titular;
}

/** @brief Retorna o numero da conta */
void ContaPoupanca::setTitular(string t) {
	titular = t;
}

/** @brief Realiza um depósito na conta */
void ContaPoupanca::deposito(double valor) {
	saldo += valor;
}

/** @brief Realiza um saque na conta */
void ContaPoupanca::saque(double valor) {
	if((saldo - valor) >= 0)
		saldo -= valor;
	else
		cout << "Não é possivel realizar o saque do valor desejado, saldo insuficiente" << endl;
}

/** @brief Retorna os juros aplicado na conta */
double ContaPoupanca::getJuros() {
	return juros;
}

/** @brief Altera os juros aplicado na conta */
void ContaPoupanca::setJuros() {
	if(saldo > 0) {
		juros += 0.0042;
	}
}

/**< Retorna o dia */
short ContaPoupanca::getDia() {
	return dia;
}

/**< Incrementa o dia */
void ContaPoupanca::setDia() {
	if(dia == 30) {
		dia = 1;
		setMes();
		setJuros();
	} else
		dia++;
}

/** @brief Retorna o mes */
short ContaPoupanca::getMes() {
	return mes;
}

/** @brief Incrementa o mes */
void ContaPoupanca::setMes() {
	if(mes == 12) {
		mes = 1;
		setAno();
	} else
		mes++;
}

/** @brief Retorna o ano */
short ContaPoupanca::getAno() {
	return ano;
}

/** @brief Incrementa o ano */
void ContaPoupanca::setAno() {
	ano++;
}

/** @brief Altualiza o saldo da conta com aplicacao dos juros */
double ContaPoupanca::atualiza() {
	saldo += saldo * juros;

	return saldo;
}