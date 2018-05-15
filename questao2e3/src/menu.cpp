/**
 * @file     menu.h
 * @brief    Arquivo corpo com a implementação das funções de menu
 *
 * @author   Joicy Oliveira
 * @since    11/05/2018
 * @date     13/05/2018
 */

#include "menu.h"

/**
* @brief	Método do menu principal
* @return 	Escolha desejada
*/
short menuPrincipal() {
	cout << "***************************************************** " << endl;
	cout << "\t                 Bem Vindo !                      * " << endl;
	cout << "\t                            		                 * " << endl;
	cout << "\t Escolha uma das opções listadas abaixo:     	 * " << endl;
	cout << "\t                                					 * " << endl;
	cout << "\t 1 ) Conta Corrente          			  		 * " << endl;
	cout << "\t 2 ) Conta Poupança              			 	 * " << endl;
	cout << "\t 3 ) Avançar data 	             			     * " << endl;
	cout << "\t 0 ) Sair 	                       			     * " << endl;
	cout << "***************************************************** " << endl;
	cout << endl;

	short opcao = 0;

	do {
		cin >> opcao;
		return opcao;
	} while(opcao != 0 || opcao < 3);
}

/**
* @brief	Método do menu de conta Corrente
* @return 	Escolha desejada
*/
short menuCorrente() {
	
	cout << "***************************************************** " << endl;
	cout << "\t            Conta Corrente !                      * " << endl;
	cout << "\t                            		                 * " << endl;
	cout << "\t Escolha uma das opções listadas abaixo:     	 * " << endl;
	cout << "\t                                					 * " << endl;
	cout << "\t 1 ) Saque          			  					 * " << endl;
	cout << "\t 2 ) Depósito              			 			 * " << endl;
	cout << "\t 3 ) Consultar Saldo 	             		     * " << endl;
	cout << "\t 4 ) Redefinir limite para saque	       		     * " << endl;
	cout << "\t 5 ) Aplicar juros 	             				 * " << endl;
	cout << "\t 0 ) Voltar                        			     * " << endl;
	cout << "***************************************************** " << endl;
	cout << endl;

	short opcao = 0;

	do {
		cin >> opcao;
		return opcao;
	} while(opcao != 0 || opcao < 6);
}

/**
* @brief	Método do menu de conta poupança
* @return 	Escolha desejada
*/
short menuPoupanca() {
	
	cout << "***************************************************** " << endl;
	cout << "\t            Conta Poupança !                      * " << endl;
	cout << "\t                            		                 * " << endl;
	cout << "\t Escolha uma das opções listadas abaixo:     	 * " << endl;
	cout << "\t                                					 * " << endl;
	cout << "\t 1 ) Saque          			  					 * " << endl;
	cout << "\t 2 ) Depósito              			 			 * " << endl;
	cout << "\t 3 ) Consultar Saldo 	             		     * " << endl;
	cout << "\t 5 ) Aplicar juros 	             				 * " << endl;
	cout << "\t 0 ) Voltar                        			     * " << endl;
	cout << "***************************************************** " << endl;
	cout << endl;

	short opcao = 0;

	do {
		cin >> opcao;
		return opcao;
	} while(opcao != 0 || opcao < 5);
}

/**
* @brief	Método para inicializar operação 
* @param	corrente Conta Corrente
* @param	corrente Conta Poupança
* @return 	Não retorna valor
*/
void init(ContaCorrente &corrente, ContaPoupanca &poupanca) {
	short op, opcao;

	opcao = menuPrincipal();

	switch(opcao) {
		case 0:
			cout << "Programa encerrando!" << endl;
			break;

		case 1:
			op = menuCorrente();
			opCorrente(op, corrente, poupanca);
			break;

		case 2:
			op = menuPoupanca();
			opPoupanca(op, corrente, poupanca);
			break;

		case 3:
			avanca(corrente, poupanca);
			init(corrente, poupanca);
			break;
		default:
			cout << "Opcao invalida" << endl;

			init(corrente, poupanca);

			break;

	}
}

/**
* @brief 	Método que realiza operacoes sobre a conta corrente
* @param 	opcao, Opção escolhida
* @param 	corrente, Objeto do tipo ContaCorrente
* @param 	poupanca, Objeto do tipo ContaPoupanca
* @return 	Não retorna valor
*/
void opCorrente(short opcao, ContaCorrente &corrente, ContaPoupanca &poupanca){

	switch(opcao) {
		case 0:
			init(corrente, poupanca);
			break;
		case 1:
			
			double saque;
			cout << "Defina o valor para saque: ";
			cin >> saque;

			corrente.saque(saque);

			opcao = menuCorrente();
			opCorrente(opcao, corrente, poupanca);
			break;

		case 2:
			double deposito;
			cout << "Digite o valor para deposito em conta: ";
			cin >> deposito;

			corrente.deposito(deposito);

			opcao = menuCorrente();
			opCorrente(opcao, corrente, poupanca);
			break;

		case 3:
			cout << "Saldo em conta: R$ " << corrente.getSaldo() << endl;

			opcao = menuCorrente();
			opCorrente(opcao, corrente, poupanca);
			break;

		case 4:
			double limite;
			cout << "Redefina o valor para o limite da conta: ";
			cin >> limite;

			corrente.setLimite(limite);

			opcao = menuCorrente();
			opCorrente(opcao, corrente, poupanca);
			break;

		case 5:
			corrente.atualiza();
			cout << "Juros aplicados sobre a conta. Saldo atual: R$" << corrente.getSaldo() << endl;

			opcao = menuCorrente();
			opCorrente(opcao, corrente, poupanca);
			break;

		default:
			cout << "Opcao invalida" << endl;

			opcao = menuCorrente();
			opCorrente(opcao, corrente, poupanca);
			break;
	}
}

/**
* @brief 	Método que realiza operacoes sobre a conta poupanca
* @param 	opcao, Opçao escolhida
* @param 	corrente, Objeto do tipo ContaCorrente
* @param 	poupanca, Objeto do tipo ContaPoupanca
* @return 	Não retorna valor
*/
void opPoupanca(short opcao, ContaCorrente &corrente, ContaPoupanca &poupanca){

	switch(opcao) {
		case 0:
			init(corrente, poupanca);
			break;
		
		case 1:
			double saque;
			cout << "Defina o valor do saque: ";
			cin >> saque;

			poupanca.saque(saque);

			opcao = menuPoupanca();
			opPoupanca(opcao, corrente, poupanca);
			break;

		case 2:
			double deposito;
			cout << "Defina o valor do depósito: ";
			cin >> deposito;

			poupanca.deposito(deposito);

			opcao = menuPoupanca();
			opPoupanca(opcao, corrente, poupanca);
			break;
		
		case 3:
			cout << "Saldo em conta: R$" << poupanca.getSaldo() << endl;

			opcao = menuPoupanca();
			opPoupanca(opcao, corrente, poupanca);
			break;

		case 4:
			poupanca.atualiza();
			cout << "Juros aplicados sobre a conta. Saldo atual: R$" << poupanca.getSaldo() << endl;

			opcao = menuPoupanca();
			opPoupanca(opcao, corrente, poupanca);
			break;

		default:
			cout << "Opcao invalida" << endl;

			opcao = menuPoupanca();
			opPoupanca(opcao, corrente, poupanca);
			break;
	}
}

/**
* @brief 	Método que realiza o avanco da data da conta
* @param 	corrente, Objeto do tipo ContaCorrente
* @param 	poupanca, Objeto do tipo ContaPoupanca
* @return 	Não retorna valor
*/
void avanca(ContaCorrente &corrente, ContaPoupanca &poupanca) {
	int dia, mes, ano, avanca;
	cout << "Digite uma data vallida: (formato dd mm aa)" << endl;
	cin >> dia >> mes >> ano;

	if(ano < 2017)
		cout << "Erro, data antes da crianção da conta" << endl;
	else if(ano > 2017)
		ano = ano % 2017;
	else
		ano = 0;

	avanca = dia + (mes * 30) + (ano * 365) ;

	for(int i = 0; i < avanca; i++){
		corrente.setDia();
		poupanca.setDia();
	}

	corrente.atualiza();
	poupanca.atualiza();

	cout << "Conta corrente: " << corrente.getSaldo() << endl;
	cout << "Conta poupança: " << poupanca.getSaldo() << endl;
}