/**
 * @file     bebida.h
 * @brief    Arquivo cabeçalho com as definições dos métodos da classe bebida derivada da classe produto
 *
 * @author   Joicy Oliveira
 * @since    11/05/2018
 * @date     13/05/2018
 */

#ifndef BEBIDA_H_
#define BEBIDA_H_

#include "produto.h"

/**
* @class 	Bebida derivada da classe Produto
*/
class Bebida : public Produto
{
public:

	/**
	* @brief	Construtor padrão
	*/
	Bebida();

	/**
	* @brief	Construtor paramatrizado
	* @param	_codigo Código de barra da Bebida
	* @param	_descricao Descrição da Bebida
	* @param	_preco Preço da Bebida
	* @param	_teor_alcoolico Teor Alcoolico da Bebida
	*/
	Bebida(std::string _codigo, std::string _descricao, short _preco, short _teor_alcoolico);
		
	/**
	* @brief Destrutor padrão
	*/
	~Bebida();
private:
	short m_teor_alcoolico;

public:

	/**
	* @brief	Método que extrai o teor alcoolico da Bebida
	* @return 	Teor Alcoolico da Bebida
	*/
	short getTeorAlcoolico();

	/**
	* @brief	Método que altera o teor alcoolico da Bebida
	* @return 	Não retorna valor
	*/
	void setTeorAlcoolico(short _teor_alcoolico);

private:
	std::ostream& print(std::ostream &o) const;
};

#endif