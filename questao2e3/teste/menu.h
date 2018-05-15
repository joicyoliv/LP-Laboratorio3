/**
 * @file     menu.h
 * @brief    Arquivo cabecalho com a definicao das funções de menu
 *
 * @author   Joicy Oliveira
 * @since    11/05/2018
 * @date     13/05/2018
 */

#ifndef MENU_H
#define MENU_H

#include "contaCorrente.h"
#include "contaPoupanca.h"

#include <iostream>
using std::cout;
using std::cin;
using std::endl;


/**
* @brief	Método para inicializar operação 
* @param	corrente Conta Corrente
* @param	corrente Conta Poupança
* @return 	Não retorna valor
*/
void init(ContaCorrente &corrente, ContaPoupanca &poupanca);

/**
* @brief	Método do menu principal
* @return 	Escolha desejada
*/
short menuPrincipal();

/**
* @brief	Método do menu de conta Corrente
* @return 	Escolha desejada
*/
short menuCorrente();

/**
* @brief	Método do menu de conta poupança
* @return 	Escolha desejada
*/
short menuPoupanca();

/**
* @brief 	Método que realiza operacoes sobre a conta corrente
* @param 	opcao, Opção escolhida
* @param 	corrente, Objeto do tipo ContaCorrente
* @param 	poupanca, Objeto do tipo ContaPoupanca
* @return 	Não retorna valor
*/
void opCorrente(short opcao, ContaCorrente &corrente, ContaPoupanca &poupanca);

/**
* @brief 	Método que realiza operacoes sobre a conta poupanca
* @param 	opcao, Opçao escolhida
* @param 	corrente, Objeto do tipo ContaCorrente
* @param 	poupanca, Objeto do tipo ContaPoupanca
* @return 	Não retorna valor
*/
void opPoupanca(short opcao, ContaCorrente &corrente, ContaPoupanca &poupanca);

/**
* @brief 	Método que realiza o avanco da data da conta
* @param 	corrente, Objeto do tipo ContaCorrente
* @param 	poupanca, Objeto do tipo ContaPoupanca
* @return 	Não retorna valor
*/
void avanca(ContaCorrente &corrente, ContaPoupanca &poupanca) ;

#endif