/**
 * @file     bebida.cpp
 * @brief    Arquivo corpo com a implementação dos métodos da classe bebida derivada da classe produto
 *
 * @author   Joicy Oliveira
 * @since    11/05/2018
 * @date     13/05/2018
 */
#include <iomanip>
#include "bebida.h"

/**
* @brief	Construtor padrão
*/
Bebida::Bebida() {}

/**
* @brief	Construtor paramatrizado
* @param	_codigo Código de barra da Bebida
* @param	_descricao Descrição da Bebida
* @param	_preco Preço da Bebida
* @param	_teor_alcoolico Teor Alcoolico da Bebida
*/
Bebida::Bebida(std::string _codigo, std::string _descricao, short _preco, 
	short _teor_alcoolico):
	Produto(_codigo, _descricao, _preco), m_teor_alcoolico(_teor_alcoolico) {}

/**
* @brief Destrutor padrão
*/
Bebida::~Bebida() {}

/**
* @brief	Método que extrai o teor alcoolico da Bebida
* @return 	Teor Alcoolico da Bebida
*/
short 
Bebida::getTeorAlcoolico() {
	return m_teor_alcoolico;
}

/**
* @brief	Método que altera o teor alcoolico da Bebida
* @return 	Não retorna valor
*/
void 
Bebida::setTeorAlcoolico(short _teor_alcoolico) {
	m_teor_alcoolico = _teor_alcoolico;
}

std::ostream& 
Bebida::print(std::ostream &o) const {
	o << std::setfill (' ') << std::setw (10) << m_cod_barras << " | " 
		<< std::setfill ('.') << std::setw (20) << m_descricao << " | " 
		<< std::setfill (' ') << std::setw (5) << m_preco << " | "
		<< std::setfill (' ') << std::setw (10) << m_teor_alcoolico << "%%";
	return o;
}
