#include <iostream>
#include <vector>
#include <memory>
#include "produto.h"
#include "fruta.h"
#include "bebida.h"
#include "roupa.h"

using namespace std;

/**
 * @file     main.h
 * @brief    Função principal para execução do programa
 *
 * @author   Silvio Costa Sampaio e Joicy Oliveira
 * @since    10/10/2017
 * @date     13/05/2018
 */

int main(int argc, char const *argv[])
{
	std::vector<shared_ptr<Produto>> lista;
	double Total = 0;
	
	
	lista.push_back(make_shared<Fruta>("001002003-45","Maca verde",8.70,"01/10/2017",18));
	lista.push_back(make_shared<Fruta>("001002004-44","Laranja",4.75,"23/09/2017",15));
	lista.push_back(make_shared<Fruta>("001002005-11","Limao verde",2.30,"01/10/2017",25));
	lista.push_back(make_shared<Roupa>("001002006-06","Camiseta Seleção  brasileira",249.90,"Torcedor Nike",'F', "P"));
	lista.push_back(make_shared<Roupa>("001002007-08","Calça",59.90,"Jeans",'F', "P"));
	lista.push_back(make_shared<Roupa>("001002009-09","Casaco",179.90,"Facinelli",'F', "P"));
	lista.push_back(make_shared<Bebida>("00100208-10","Pitu",2.30,75));

	for (auto i = lista.begin(); i != lista.end(); ++i)
	{
		std::cout << (**i) << std::endl;
		Total += (*i)->getPreco();	
	}


	std::cout << "Total: " << Total << "\n"; 

	return 0;
}