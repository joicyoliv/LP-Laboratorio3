/**
 * @file     roupa.cpp
 * @brief    Arquivo corpo com a implementação dos métodos da classe roupa derivada da classe produto
 *
 * @author   Joicy Oliveira
 * @since    11/05/2018
 * @date     13/05/2018
 */

#include <iomanip>
#include "roupa.h"

/**
* @brief	Construtor padrão
*/
Roupa::Roupa() {}

/**
* @brief	Construtor paramatrizado
* @param	_codigo Código de barras da Roupa
* @param	_descricao Descrição da Roupa
* @param	_preco Preço da Roupa
* @param	_marca Marca da Roupa
* @param	_sexo Sexo da Roupa
* @param	_tamanho Tamanho da Roupa
*/
Roupa::Roupa(std::string _codigo, std::string _descricao, short _preco, 
	std::string _marca, char _sexo, std::string _tamanho):
	Produto(_codigo, _descricao, _preco), m_marca(_marca), m_sexo(_sexo), m_tamanho(_tamanho) {}

/**
* @brief Destrutor padrão
*/
Roupa::~Roupa() {}

/**
* @brief	Função que extrai a marca da Roupa
* @return 	Marca da Roupa
*/
std::string
Roupa::getMarca() {
	return m_marca;
}

/**
* @brief	Função que extrai o sexo da Roupa
* @return 	Sexo da Roupa
*/
char
Roupa::getSexo() {
	return m_sexo;
}

/**
* @brief	Função que extrai o tamanho da Roupa
* @return 	Tamanho da Roupa
*/
std::string
Roupa::getTamanho() {
	return m_tamanho;
}

/**
* @brief	Altera a marca da Roupa
* @param	_marca Marca da Roupa
* @return 	Não retorna valor
*/	
void 
Roupa::setMarca(std::string _marca) {
	m_marca = _marca;
}

/**
* @brief	Altera o sexo da Roupa
* @param	_sexo Sexo da Roupa
* @return 	Não retorna valor
*/
void 
Roupa::setSexo(char _sexo) {
	m_sexo = _sexo;
}

/**
* @brief	Altera o tamanho da Roupa
* @param	_tamanho Tamanho da Roupa
* @return 	Não retorna valor
*/
void 
Roupa::setTamanho(std::string _tamanho) {
	m_tamanho = _tamanho;
}

std::ostream& 
Roupa::print(std::ostream &o) const {
	o << std::setfill (' ') << std::setw (10) << m_cod_barras << " | " 
		<< std::setfill ('.') << std::setw (20) << m_descricao << " | " 
		<< std::setfill (' ') << std::setw (5) << m_preco << " | "
		<< std::setfill (' ') << std::setw (10) << m_marca << " | "
		<< std::setfill (' ') << std::setw (10) << m_sexo << " | "
		<< std::setfill (' ') << std::setw (10) << m_tamanho;
	return o;
}
