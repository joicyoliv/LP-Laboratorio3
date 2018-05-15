/**
 * @file     contaCorrente.cpp
 * @brief    Arquivo corpo com a implementação dos metodos da classe conta corrente derivada da classe conta
 *
 * @author   Joicy Oliveira
 * @since    11/05/2018
 * @date     13/05/2018
 */


#include "contaCorrente.h"

ContaCorrente::ContaCorrente(){

}

ContaCorrente::ContaCorrente(int n, string t, double s, double l) {
	numero = n;
	titular = t;
	saldo = s;
	limite = l;
	jurosN = 0.0;
	dia = 1;
	mes = 1;
	ano = 2016;
}

ContaCorrente::~ContaCorrente() {

}

/** @brief Retorna o numero da conta */
int ContaCorrente::getNumero() {
	return numero;
}

/** @brief Altera o numero da conta */
void ContaCorrente::setNumero(int n) {
	numero = n;
}

/** @brief Retorna o saldo da conta */
double ContaCorrente::getSaldo() {
	return saldo;
}

/** @brief Retorna o titular da conta */
string ContaCorrente::getTitular() {
	return titular;
}

/** @brief Retorna o numero da conta */
void ContaCorrente::setTitular(string t) {
	titular = t;
}

void ContaCorrente::setLimite(double l) {
	limite = l * (-1);
}

/** @brief Realiza um depósito na conta */
void ContaCorrente::deposito(double valor) {
	saldo += valor;
}

/** @brief Realiza um saque na conta */
void ContaCorrente::saque(double valor) {
	double aux = saldo - valor;
	if(aux >= limite)
		saldo -= valor;
	else if (aux < limite )
		cout << "Não é possivel realizar o saque do valor desejado, limite atingido" << endl;
}

/** @brief Retorna os juros aplicado na conta */
double ContaCorrente::getJuros() {
	return jurosN;
}

/** @brief Altera os juros aplicado na conta */
void ContaCorrente::setJuros() {
	if(saldo < 0) {
		jurosN += 0.0001;
	}
}

/**< Retorna o dia */
short ContaCorrente::getDia() {
	return dia;
}

/**< Incrementa o dia */
void ContaCorrente::setDia() {
	if(dia == 30) {
		dia = 1;
		setMes();
		setJuros();
	} else {
		dia++;
		setJuros();
	}
}

/** @brief Retorna o mes */
short ContaCorrente::getMes() {
	return mes;
}

/** @brief Incrementa o mes */
void ContaCorrente::setMes() {
	if(mes == 12) {
		mes = 1;
		setAno();
	} else
		mes++;
}

/** @brief Retorna o ano */
short ContaCorrente::getAno() {
	return ano;
}

/** @brief Incrementa o ano */
void ContaCorrente::setAno() {
	ano++;
}

/** @brief Altualiza o saldo da conta com aplicacao dos juros */
double ContaCorrente::atualiza() {
	if(saldo < 0)
		saldo += saldo * jurosN;

	return saldo;
}