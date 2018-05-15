/**
 * @file     produto.h
 * @brief    Arquivo cabeçalho com as definiçõesdos métodos da classe produto
 *
 * @author   Silvio Costa Sampaio e Joicy Oliveira
 * @since    10/10/2017
 * @date     13/05/2018
 */

#ifndef _PRODUTO_H_
#define _PRODUTO_H_

#include <iostream>

/**
* @class 	Produto
*/
class Produto
{
public:

	/**
	* @brief Construtor padrão
	*/
	Produto();

	/**
	* @brief	 Construtor paramatrizado
	* @param 	_codigo Codigo de barra do Produto
	* @param 	_descricao Descrição do Produto
	* @param 	_preco Preço do Produto
	*/
	Produto(std::string _codigo, std::string _descricao, short _preco);

	/**
	* @brief Destrutor padrão
	*/
	/*O destrutor foi declarado como virtual para que, no momento em que for chamado o destrutor de um objeto (fruta, roupa ou bebida) 
		como um produto, a sequencia de chamamento dos destrutores será destrutor da classe derivada e depois o destrutor da classe base
	*/
	virtual ~Produto();

protected:
	std::string m_cod_barras;
	std::string m_descricao;
	double m_preco;		

public:

	/**
	* @brief	Função que extrai o código de barra do produto
	* @return 	Código de barra do produto
	*/
	std::string getCodBarras();

	/**
	* @brief	Função que extrai a descrição do produto
	* @return 	Descrição do produto
	*/	
	std::string getDescricao();

	/**
	* @brief	Função que extrai o preço do produto
	* @return 	Preço do produto
	*/	
	double getPreco();

	/**
	* @brief	Altera o código de barra do Produto
	* @param	_codigo Codigo de barra do Produto
	* @return 	Não retorna valor
	*/
	void setCodBarras(std::string _codigo);

	/**
	* @brief	Altera a descrição do Produto
	* @param	_descricao Descrição do Produto
	* @return 	Não retorna valor
	*/	
	void setDescricao(std::string _descricao);

	/**
	* @brief	Altera o preço do Produto
	* @param	_preco Preço do Produto
	* @return 	Não retorna valor
	*/
	void setPreco(double _preco);
	// O operador de inserção: recebe um objeto da classe Produto e chama o método print.
	// O método print precisa ser implementado na classe filha para que o operador funcione. 

	//=== Operadores
	friend std::ostream& operator<< (std::ostream &o, Produto const &p);  

	//--- Soma
	double operator+ ( double const p);
	double operator+ ( Produto const &p );
	friend double operator+ (double const p, Produto const &p1);
	//--- Subtração
	double operator- ( double const p );
	double operator- (Produto const &p);
	friend double operator- (double const p, Produto const &p1);
	//--- Comparação
	bool operator== (Produto const &p) const;

private:
	virtual std::ostream& print(std::ostream&) const = 0;
};
 
#endif
