/**
 * @file     produto.cpp
 * @brief    Arquivo corpo com a implementação dos métodos da classe Produto
 *
 * @author   Silvio Costa Sampaio e Joicy Oliveira
 * @since    10/10/2017
 * @date     13/05/2018
 */

#include <iostream>
#include "produto.h"


/**
* @brief Construtor padrão
*/
Produto::Produto() {}

/**
* @brief Destrutor padrão
*/
Produto::~Produto(){}

/**
* @brief	 Construtor paramatrizado
* @param 	_codigo Codigo de barra do Produto
* @param 	_descricao Descrição do Produto
* @param 	_preco Preço do Produto
*/
Produto::Produto(std::string _codigo, std::string _descricao, short _preco):
	m_cod_barras(_codigo), m_descricao(_descricao), m_preco(_preco) {}


/**
* @brief	Função que extrai o código de barra do produto
* @return 	Código de barra do produto
*/
std::string 
Produto::getCodBarras() {
	return m_cod_barras;
}

/**
* @brief	Função que extrai a descrição do produto
* @return 	Descrição do produto
*/	
std::string 
Produto::getDescricao() {
	return m_descricao;
}

/**
* @brief	Função que extrai o preço do produto
* @return 	Preço do produto
*/
double 
Produto::getPreco() {
	return m_preco;
}

/**
* @brief	Altera o código de barra do Produto
* @param	_codigo Codigo de barra do Produto
* @return 	Não retorna valor
*/	
void 
Produto::setCodBarras(std::string _codigo) {
	m_cod_barras = _codigo;
}

/**
* @brief	Altera a descrição do Produto
* @param	_descricao Descrição do Produto
* @return 	Não retorna valor
*/	
void 
Produto::setDescricao(std::string _descricao) {
	m_descricao = _descricao;
}

/**
* @brief	Altera o preço do Produto
* @param	_preco Preço do Produto
* @return 	Não retorna valor
*/
void 
Produto::setPreco(double _preco) {
	m_preco = _preco;
}

std::ostream& operator<< (std::ostream &o, Produto const &p) {
	return p.print(o);
}

double Produto::operator+ ( double const p)
{
	return (this->m_preco + p);
}

double Produto::operator+ ( Produto const &p )
{
	return (this->m_preco + p.m_preco);
}

double operator+ (double const p, Produto const &p1)
{
	return (p + p1.m_preco);
}

double Produto::operator- ( double const p)
{
	return (this->m_preco - p);
}

double Produto::operator- ( Produto const &p )
{
	return (this->m_preco - p.m_preco);
}

double operator- (double const p, Produto const &p1)
{
	return (p - p1.m_preco);
}

bool Produto::operator== (Produto const &p) const
{
	return (m_cod_barras == p.m_cod_barras);
}