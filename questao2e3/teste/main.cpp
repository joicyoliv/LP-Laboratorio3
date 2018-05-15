/**
 * @file     main.h
 * @brief    Função principal para execução do programa
 *
 * @author   Joicy Oliveira
 * @since    11/05/2018
 * @date     13/05/2018
 */

#include "menu.h"
#include "conta.h"

/** @brief  Função principal */
int main() {
	ContaCorrente *contaCorrente = new ContaCorrente();
	ContaPoupanca *contaPoupanca = new ContaPoupanca();

	init(*contaCorrente, *contaPoupanca);

	return 0;
}
