/**
 * @file     contaPoupanca.h
 * @brief    Arquivo corpo com a implementação dos metodos da classe conta poupança derivada da classe conta
 *
 * @author   Joicy Oliveira
 * @since    11/05/2018
 * @date     13/05/2018
 */
#include "contaPoupanca.h"


/**
* @brief Construtor padrão
*/
ContaPoupanca::ContaPoupanca(){

}

/**
* @brief	 Construtor paramatrizado
* @param 	_numero Numero da conta
* @param 	_saldo Saldo da conta
*/
ContaPoupanca::ContaPoupanca(int _numero, string _titular, double _saldo) {
	m_numero = _numero;
	m_titular = _titular;
	m_saldo = _saldo;
	m_juros = 0.0;
	m_dia = 1;
	m_mes = 1;
	m_ano = 2016;
}
		
/**
* @brief Destrutor padrão
*/
ContaPoupanca::~ContaPoupanca() {

}

/**
* @brief	 Método que extrai o número da conta
* @return 	 Número da conta
*/
int ContaPoupanca::getNumero() {
	return m_numero;
}

/**
* @brief	 Método que extrai o saldo da conta
* @return 	 Saldo da conta
*/
double ContaPoupanca::getSaldo() {
	return m_saldo;
}

/**
* @brief	 Método que extrai o titular da conta
* @return 	 Titular da conta
*/
string ContaPoupanca::getTitular() {
	return m_titular;
}

/**
* @brief	 Método que extrai o juros aplicado na conta
* @return 	 Juros
*/
double ContaPoupanca::getJuros() {
	return m_juros;
}

/**
* @brief	 Método que extrai o dia da conta
* @return 	 Dia
*/
short ContaPoupanca::getDia() {
	return m_dia;
}

/**
* @brief	 Método que extrai o mês da conta
* @return 	 Mês
*/
short ContaPoupanca::getMes() {
	return m_mes;
}

/**
* @brief	 Método que extrai o ano da conta
* @return 	 Ano
*/
short ContaPoupanca::getAno() {
	return m_ano;
}

/**
* @brief	Altera o número da conta
* @param	_numero Número da conta
* @return 	Não retorna valor
*/
void ContaPoupanca::setNumero(int _numero) {
	m_numero = _numero;
}



/**
* @brief	Altera o titular da conta
* @param	_titular Titular da conta
* @return 	Não retorna valor
*/
void ContaPoupanca::setTitular(string _titular) {
	m_titular = _titular;
}

/**
* @brief	Altera o juros aplicado na conta
* @return 	Não retorna valor
*/
void ContaPoupanca::setJuros() {
	if(m_saldo > 0) {
		m_juros += 0.0042;
	}
}

/**
* @brief	Altera o dia da conta
* @return 	Não retorna valor
*/
void ContaPoupanca::setDia() {
	if(m_dia == 30) {
		m_dia = 1;
		setMes();
		setJuros();
	} else
		m_dia++;
}

/**
* @brief	Altera o mês da conta
* @return 	Não retorna valor
*/
void ContaPoupanca::setMes() {
	if(m_mes == 12) {
		m_mes = 1;
		setAno();
	} else
		m_mes++;
}

/**
* @brief	Altera o ano da conta
* @return 	Não retorna valor
*/
void ContaPoupanca::setAno() {
	m_ano++;
}

/**
* @brief	Efetua depósito na conta
* @param	_valor Valor a ser depositado
* @return 	Não retorna valor
*/
void ContaPoupanca::deposito(double _valor) {
	m_saldo += _valor;
}

/**
* @brief	Efetua saque na conta
* @param	_valor Valor a ser sacado
* @return 	Não retorna valor
*/
void ContaPoupanca::saque(double _valor) {
	if((m_saldo - _valor) >= 0)
		m_saldo -= _valor;
	else
		cout << "Não é possivel realizar o saque do valor desejado, saldo insuficiente" << endl;
}

/**
* @brief	Atualiza o saldo da conta
* @return 	Saldo
*/
double ContaPoupanca::atualiza() {
	m_saldo += m_saldo * m_juros;

	return m_saldo;
}