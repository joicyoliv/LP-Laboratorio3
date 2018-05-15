/**
 * @file     fruta.h
 * @brief    Arquivo cabeçalho com as definições dos métodos da classe fruta derivada da classe produto
 *
 * @author   Silvio Costa Sampaio 
 * @since    10/10/2017
 * @date     10/10/2017
 */


#ifndef FRUTA_H
#define FRUTA_H

#include "produto.h"

/**
* @class 	Fruta derivada de Produto 
*/
class Fruta : public Produto
{
public:

	/**
	* @brief	Construtor padrão
	*/
	Fruta();

	/**
	* @brief	Construtor paramatrizado
	* @param	_codigo Código de barra da Fruta
	* @param	_descricao Descrição da Fruta
	* @param	_preco Preço da Fruta
	* @param	_data Data da Fruta
	* @param	_validade Validade da Fruta
	*/
	Fruta(std::string _codigo, std::string _descricao, short _preco, 
			std::string _data, short _validade);

	/**
	* @brief Destrutor padrão
	*/
	~Fruta();

private:
	std::string m_data_lote;
	short m_validade;

public:
	/**
	* @brief	Função que extrai a data do lote da Fruta
	* @return 	Data da Fruta
	*/
	std::string getDataLote();

	/**
	* @brief	Função que extrai validade da Fruta
	* @return 	Validade da Fruta
	*/
	short getValidade();

	/**
	* @brief	Altera a data da Fruta
	* @param	_data Data da Fruta
	* @return 	Não retorna valor
	*/
	void setDataLote(std::string _data);

	/**
	* @brief	Altera a validade da Fruta
	* @param	_validade Validade da Fruta
	* @return 	Não retorna valor
	*/
	void setValidade(short _validade);
	
private:
	std::ostream& print(std::ostream &o) const;
};

#endif