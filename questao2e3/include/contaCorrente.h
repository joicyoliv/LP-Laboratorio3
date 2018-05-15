/**
 * @file     contaCorrente.h
 * @brief    Arquivo cabecalho com a definicao dos metodos da classe conta corrente derivada da classe conta
 *
 * @author   Joicy Oliveira
 * @since    11/05/2018
 * @date     13/05/2018
 */

#ifndef CORRENTE_H
#define CORRENTE_H

#include "conta.h"

/**
* @class 	ContaCorrente
* @brief 	Classe que representa uma conta corrente, herda de conta
*/
class ContaCorrente : public Conta {
	private:
		int m_numero;
		string m_titular;
		double m_saldo;
		double m_limite;
		short m_dia, m_mes, m_ano;
		double m_jurosN;

	public:

		/**
		* @brief Construtor padrão
		*/
		ContaCorrente();

		/**
		* @brief	 Construtor paramatrizado
		* @param 	_numero Numero da conta
		* @param 	_titular Saldo da conta
		* @param 	_saldo Saldo da conta
		* @param 	_limite Limite da conta
		*/
		ContaCorrente(int _numero, string _titular, double _saldo, double _limite);
		
		/**
		* @brief Destrutor padrão
		*/
		~ContaCorrente();


		/**
		* @brief	 Método que extrai o número da conta
		* @return 	 Número da conta
		*/
		int getNumero() = 0;  

		/**
		* @brief	 Método que extrai o saldo da conta
		* @return 	 Saldo da conta
		*/
		double getSaldo() = 0;  

		/**
		* @brief	 Método que extrai o titular da conta
		* @return 	 Titular da conta
		*/
		string getTitular() = 0;  

		/**
		* @brief	 Método que extrai o juros aplicado na conta
		* @return 	 Juros
		*/
		double getJuros() = 0;	

		/**
		* @brief	 Método que extrai o dia da conta
		* @return 	 Dia
		*/
		short getDia() = 0;

		/**
		* @brief	 Método que extrai o mês da conta
		* @return 	 Mês
		*/
		short getMes() = 0; 

		/**
		* @brief	 Método que extrai o ano da conta
		* @return 	 Ano
		*/
		short getAno() = 0;	

		/**
		* @brief	Altera o limite da conta
		* @param	_limite Limete da conta
		* @return 	Não retorna valor
		*/	
		void setLimite(double _limite);

		/**
		* @brief	Altera o número da conta
		* @param	_numero Número da conta
		* @return 	Não retorna valor
		*/	
		void setNumero(int _numero) = 0;  
		
		/**
		* @brief	Altera o titular da conta
		* @param	_titular Titular da conta
		* @return 	Não retorna valor
		*/	
		void setTitular(string _titular) = 0 ; 

		/**
		* @brief	Altera o juros aplicado na conta
		* @return 	Não retorna valor
		*/	
		void setJuros() = 0; 

		/**
		* @brief	Altera o dia da conta
		* @return 	Não retorna valor
		*/
		void setDia() = 0;		
		
		/**
		* @brief	Altera o mês da conta
		* @return 	Não retorna valor
		*/
		void setMes() = 0;	

		/**
		* @brief	Altera o ano da conta
		* @return 	Não retorna valor
		*/
		void setAno() = 0;	
		
		/**
		* @brief	Efetua depósito na conta
		* @param	_valor Valor a ser depositado
		* @return 	Não retorna valor
		*/	
		void deposito(double _valor) = 0;    

		/**
		* @brief	Efetua saque na conta
		* @param	_valor Valor a ser sacado
		* @return 	Não retorna valor
		*/
		void saque(double _valor) = 0;      

		/**
		* @brief	Atualiza o saldo da conta
		* @return 	Saldo
		*/
		double atualiza() = 0;	
};

#endif