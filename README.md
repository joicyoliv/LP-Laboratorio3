# Laboratório 3

# Herança, Classes Abstratas e Manipulação de arquivos.
Aluna: Joicy Daliane Silva Oliveira

##Professor: Silvio Costa Sampaio

# Objetivo
O objetivo desta lista de exercícios é praticar os conceitos discutidos em sala de aula sobre a
Programação Orientada a Objetos (POO) em linguagem C++, em particular a implementação de
herança, classes abstratas e a manipulação de arquivos.

# Questão 01
Feito:
Crie uma hierarquia de classes de domínio para uma loja que vende os seguintes Produtos: Roupa,
Bebida e Fruta. Sobrescreva o operador de inserção em stream “<<” para cada classe, de modo que
o uso do mesmo imprima:
• Para Roupa: código de barras, descrição, preço, marca, sexo (M/F) e tamanho;
• Para Bebida: código de barras, descrição, preço e teor alcoólico (em %);
• Para Fruta: código de barras, descrição, preço, data do lote e validade.
Sobrescreva os operadores de adição “+” e subtração “-“ de modo a permitir somar e subtrair o preço
de dois produtos. Sobrescreva também o operador de igualdade “==” retornando true se dois
produtos possuem o mesmo código de barras ou false em caso contrário.
Evite repetição de código. Explore, ao máximo, os conceitos de Programação Orientada a Objetos
(POO) em C++ discutidos em sala de aula: classes, métodos, métodos de acesso (getters/setters),
modificadores de acesso, sobrecarga de operadores, herança, polimorfismo, método virtual, classe
abstrata, templates, entre outros.

Falta fazer:
Realize testes sobre as classes implementadas para mostrar o correto funcionamento de sua
implementação. A carga dos produtos na lista de produtos deve ser realizada a partir dos arquivos
.dat correspondentes.

# Questão 02
Feito:
Implemente em C++ as respectivas classes, atributos e métodos (incluindo construtores e destrutor)
necessários para atender às seguintes abstrações:
a) Uma conta corrente possui uma agência, um número, um saldo, um status que informa se ela é
especial ou não, um limite (e o limite disponível) e um conjunto de movimentações (normalmente
em grande número e variável entre contas).
b) Uma movimentação possui uma descrição, um valor e uma indicação se ela é uma movimentação
de crédito ou débito.
Usando as classes implementadas, escreva um programa em C++ para simular uma agência
bancária. Uma agência bancária deve armazenar um conjunto de contas e permitir as seguintes
operações básicas: criações de conta, exclusão de contas, saques (respeitando o saldo e o limite),
depósitos, emissão de saldo e extrato, além de transferência entre contas.

Falta fazer:
Especificamente com relação à emissão de extrato, seu programa deverá exibir a lista de
movimentações realizadas por meio da sobrecarga do operador de inserção em stream (<<).

#Questão 3
Feito:
Utilizando de abstração e do conceito de herança, altere o programa da questão 2 para permitir a
manipulação de dois tipos de contas: conta corrente e conta poupança.

# Compilação
Clone este repositório.
Para a compilação das questões entre no diretório da questão utilize o comando 'make' no terminal do Linux.

# Executar os programas
O programa da Questão 01 - ./bin/produto

O programa da Questão 02 e 03 - ./bin/conta

