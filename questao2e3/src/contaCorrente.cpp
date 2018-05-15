/**
 * @file     contaCorrente.cpp
 * @brief    Arquivo corpo com a implementação dos metodos da classe conta corrente derivada da classe conta
 *
 * @author   Joicy Oliveira
 * @since    11/05/2018
 * @date     13/05/2018
 */


#include "contaCorrente.h"

/**
* @brief Construtor padrão
*/
ContaCorrente::ContaCorrente(){

}

/**
* @brief	 Construtor paramatrizado
* @param 	_numero Numero da conta
* @param 	_titular Saldo da conta
* @param 	_saldo Saldo da conta
* @param 	_limite Limite da conta
*/
ContaCorrente::ContaCorrente(int _numero, string _titular, double _saldo, double _limite) {
	m_numero = _numero;
	m_titular = _titular;
	m_saldo = _saldo;
	m_limite = _limite;
	m_jurosN = 0.0;
	m_dia = 1;
	m_mes = 1;
	m_ano = 2016;
}

/**
* @brief Destrutor padrão
*/
ContaCorrente::~ContaCorrente() {

}

/**
* @brief	 Método que extrai o número da conta
* @return 	 Número da conta
*/
int ContaCorrente::getNumero() {
	return m_numero;
}

/**
* @brief	 Método que extrai o saldo da conta
* @return 	 Saldo da conta
*/
double ContaCorrente::getSaldo() {
	return m_saldo;
}

/**
* @brief	 Método que extrai o titular da conta
* @return 	 Titular da conta
*/
string ContaCorrente::getTitular() {
	return m_titular;
}

/**
* @brief	 Método que extrai o juros aplicado na conta
* @return 	 Juros
*/
double ContaCorrente::getJuros() {
	return m_jurosN;
}

/**
* @brief	 Método que extrai o dia da conta
* @return 	 Dia
*/
short ContaCorrente::getDia() {
	return m_dia;
}

/**
* @brief	 Método que extrai o mês da conta
* @return 	 Mês
*/
short ContaCorrente::getMes() {
	return m_mes;
}

/**
* @brief	 Método que extrai o ano da conta
* @return 	 Ano
*/
short ContaCorrente::getAno() {
	return m_ano;
}

/**
* @brief	Altera o limite da conta
* @param	_limite Limete da conta
* @return 	Não retorna valor
*/
void ContaCorrente::setLimite(double _limite) {
	m_limite = _limite * (-1);
}

/**
* @brief	Altera o número da conta
* @param	_numero Número da conta
* @return 	Não retorna valor
*/
void ContaCorrente::setNumero(int _numero) {
	m_numero = _numero;
}

/**
* @brief	Altera o titular da conta
* @param	_titila Titular da conta
* @return 	Não retorna valor
*/	
void ContaCorrente::setTitular(string _titilar) {
	m_titular = _titilar;
}

/**
* @brief	Altera o juros aplicado na conta
* @return 	Não retorna valor
*/
void ContaCorrente::setJuros() {
	if(m_saldo < 0) {
		m_jurosN += 0.0001;
	}
}

/**
* @brief	Altera o dia da conta
* @return 	Não retorna valor
*/
void ContaCorrente::setDia() {
	if(m_dia == 30) {
		m_dia = 1;
		setMes();
		setJuros();
	} else {
		m_dia++;
		setJuros();
	}
}

/**
* @brief	Altera o mês da conta
* @return 	Não retorna valor
*/
void ContaCorrente::setMes() {
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
void ContaCorrente::setAno() {
	m_ano++;
}

/**
* @brief	Efetua depósito na conta
* @param	_valor Valor a ser depositado
* @return 	Não retorna valor
*/	
void ContaCorrente::deposito(double _valor) {
	m_saldo += _valor;
}

/**
* @brief	Efetua saque na conta
* @param	_valor Valor a ser sacado
* @return 	Não retorna valor
*/
void ContaCorrente::saque(double _valor) {
	double aux = m_saldo - _valor;
	if(aux >= m_limite)
		m_saldo -= _valor;
	else if (aux < m_limite )
		cout << "Não é possivel realizar o saque do valor desejado, limite atingido" << endl;
}

/**
* @brief	Atualiza o saldo da conta
* @return 	Saldo
*/
double ContaCorrente::atualiza() {
	if(m_saldo < 0)
		m_saldo += m_saldo * m_jurosN;

	return m_saldo;
}