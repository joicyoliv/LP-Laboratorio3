/**
 * @file     fruta.h
 * @brief    Arquivo corpo com a implementação dos métodos da classe fruta derivada da classe produto
 *
 * @author   Silvio Costa Sampaio 
 * @since    10/10/2017
 * @date     10/10/2017
 */

#include <iomanip>
#include "fruta.h"

/**
* @brief	Construtor padrão
*/
Fruta::Fruta() {}

/**
* @brief	Construtor paramatrizado
* @param	_codigo Código de barra da Fruta
* @param	_descricao Descrição da Fruta
* @param	_preco Preço da Fruta
* @param	_data Data da Fruta
* @param	_validade Validade da Fruta
*/
Fruta::Fruta(std::string _codigo, std::string _descricao, short _preco, 
	std::string _data, short _validade):
	Produto(_codigo, _descricao, _preco), m_data_lote(_data), m_validade(_validade) {}

/**
* @brief Destrutor padrão
*/
Fruta::~Fruta() {}

/**
* @brief	Função que extrai a data do lote da Fruta
* @return 	Data da Fruta
*/
std::string 
Fruta::getDataLote() {
	return m_data_lote;
}

/**
* @brief	Função que extrai validade da Fruta
* @return 	Validade da Fruta
*/
short 
Fruta::getValidade() {
	return m_validade;
}

/**
* @brief	Altera a data da Fruta
* @param	_data Data da Fruta
* @return 	Não retorna valor
*/
void 
Fruta::setDataLote(std::string _data) {
	m_data_lote = _data;
}

/**
* @brief	Altera a validade da Fruta
* @param	_validade Validade da Fruta
* @return 	Não retorna valor
*/
void 
Fruta::setValidade(short _validade) {
	m_validade = _validade;
}
 
std::ostream& 
Fruta::print(std::ostream &o) const {
	o << std::setfill (' ') << std::setw (10) << m_cod_barras << " | " 
		<< std::setfill ('.') << std::setw (20) << m_descricao << " | " 
		<< std::setfill (' ') << std::setw (5) << m_preco << " | "
		<< std::setfill (' ') << std::setw (10) << m_data_lote << " | " 
		<< std::setfill (' ') << std::setw (3) << m_validade;
	return o;
}
