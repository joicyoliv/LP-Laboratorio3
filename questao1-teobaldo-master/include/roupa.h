/**
 * @file     roupa.h
 * @brief     Arquivo cabecalho com as definições dos métodos da classe roupa derivada da classe produto
 *
 * @author   Joicy Oliveira
 * @since    11/05/2018
 * @date     13/05/2018
 */

#ifndef ROUPA_H
#define ROUPA_H

#include "produto.h"

/**
* @class 	Roupa derivada de Produto 
*/
class Roupa : public Produto
{
public:

	/**
	* @brief	Construtor padrão
	*/
	Roupa();

	/**
	* @brief	Construtor paramatrizado
	* @param	_codigo Código de barras da Roupa
	* @param	_descricao Descrição da Roupa
	* @param	_preco Preço da Roupa
	* @param	_marca Marca da Roupa
	* @param	_sexo Sexo da Roupa
	* @param	_tamanho Tamanho da Roupa
	*/
	Roupa(std::string _codigo, std::string _descricao, short _preco, std::string _marca, char _sexo, 
		std::string _tamanho);

	/**
	* @brief Destrutor padrão
	*/
	~Roupa();

private:
	std::string m_marca;
	char m_sexo;
	std::string m_tamanho;

public:
	
	/**
	* @brief	Função que extrai a marca da Roupa
	* @return 	Marca da Roupa
	*/
	std::string getMarca();

	/**
	* @brief	Função que extrai o sexo da Roupa
	* @return 	Sexo da Roupa
	*/
	char getSexo();

	/**
	* @brief	Função que extrai o tamanho da Roupa
	* @return 	Tamanho da Roupa
	*/
	std::string getTamanho();
	
	/**
	* @brief	Altera a marca da Roupa
	* @param	_marca Marca da Roupa
	* @return 	Não retorna valor
	*/
	void setMarca(std::string _marca);

	/**
	* @brief	Altera o sexo da Roupa
	* @param	_sexo Sexo da Roupa
	* @return 	Não retorna valor
	*/
	void setSexo(char _sexo);

	/**
	* @brief	Altera o tamanho da Roupa
	* @param	_tamanho Tamanho da Roupa
	* @return 	Não retorna valor
	*/
	void setTamanho(std::string _tamanho);

private:
	std::ostream& print(std::ostream &o) const;
};

#endif