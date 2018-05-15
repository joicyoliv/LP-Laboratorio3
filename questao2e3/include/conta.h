/**
 * @file     conta.h
 * @brief    Arquivo cabecalho com a definições dos métodos da classe conta
 *
 * @author   Joicy Oliveira
 * @since    11/05/2018
 * @date     13/05/2018
 */
#ifndef CONTA_H
#define CONTA_H

#include <iostream>
using std::cout;
using std::cerr;
using std::endl;

#include <string>
using std::string;

/**
* @class    Conta
*/
class Conta{
	public:

		/**
		* @brief	 Método que extrai o número da conta
		* @return 	 Número da conta
		*/
		virtual int getNumero() = 0;  

		/**
		* @brief	 Método que extrai o saldo da conta
		* @return 	 Saldo da conta
		*/
		virtual double getSaldo() = 0;  

		/**
		* @brief	 Método que extrai o titular da conta
		* @return 	 Titular da conta
		*/
		virtual string getTitular() = 0;  

		/**
		* @brief	 Método que extrai o juros aplicado na conta
		* @return 	 Juros
		*/
		virtual double getJuros() = 0;	

		/**
		* @brief	 Método que extrai o dia da conta
		* @return 	 Dia
		*/
		virtual short getDia() = 0;

		/**
		* @brief	 Método que extrai o mês da conta
		* @return 	 Mês
		*/
		virtual short getMes() = 0; 

		/**
		* @brief	 Método que extrai o ano da conta
		* @return 	 Ano
		*/
		virtual short getAno() = 0;	

		/**
		* @brief	Altera o número da conta
		* @param	_numero Número da conta
		* @return 	Não retorna valor
		*/	
		virtual void setNumero(int _numero) = 0;  
		
		/**
		* @brief	Altera o titular da conta
		* @param	_titular Titular da conta
		* @return 	Não retorna valor
		*/	
		virtual void setTitular(string _titular) = 0 ; 

		/**
		* @brief	Altera o juros aplicado na conta
		* @return 	Não retorna valor
		*/	
		virtual void setJuros() = 0; 

		/**
		* @brief	Altera o dia da conta
		* @return 	Não retorna valor
		*/
		virtual void setDia() = 0;		
		
		/**
		* @brief	Altera o mês da conta
		* @return 	Não retorna valor
		*/
		virtual void setMes() = 0;	

		/**
		* @brief	Altera o ano da conta
		* @return 	Não retorna valor
		*/
		virtual void setAno() = 0;	
		
		/**
		* @brief	Efetua depósito na conta
		* @param	_valor Valor a ser depositado
		* @return 	Não retorna valor
		*/	
		virtual void deposito(double _valor) = 0;    

		/**
		* @brief	Efetua saque na conta
		* @param	_valor Valor a ser sacado
		* @return 	Não retorna valor
		*/
		virtual void saque(double _valor) = 0;      

		/**
		* @brief	Atualiza o saldo da conta
		* @return 	Saldo
		*/
		virtual double atualiza() = 0;		


};

#endif