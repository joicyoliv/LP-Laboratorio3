# Comandos do sistema operacional
# Linux: rm -rf 
# Windows: cmd //C del 
RM = rm -rf 

# Compilador
CC = g++

# Variaveis para os subdiretorios
SRC = ./src
INC = ./include
BIN = ./bin
OBJ = ./build
DOC = ./doc

# Define o nome do binario/executavel final
PROG = $(BIN)/conta

# Opcoes de compilacao
CPPFLAGS = -Wall -pedantic -std=c++11 -I$(INC)

# Lista dos arquivos objeto (.o) que formam o binario/executavel final
OBJS = $(OBJ)/contaCorrente.o $(OBJ)/contaPoupanca.o $(OBJ)/menu.o $(OBJ)/main.o

all : $(OBJS)
	$(CC) $(LDFLAGS) -o $(PROG) $(OBJS)

# Alvo para a compilação com informações de debug
# Altera a flag CFLAGS, incluindo as opções -g -O0 e recompila todo o projeto
debug: CFLAGS += -g -O0 
debug: all

# Alvo para a construcao do objeto build/main.o
# Define os arquivos objeto dos quais main.o depende.
$(OBJ)/main.o : $(OBJ)/menu.o 
	$(CC) $(CPPFLAGS) -c $(SRC)/main.cpp -o $@

# Alvo para a construcao do objeto build/menu.o
# Define os arquivos objeto dos quais menu.o depende.
$(OBJ)/menu.o : $(INC)/menu.h $(OBJ)/contaCorrente.o $(OBJ)/contaPoupanca.o
	$(CC) $(CPPFLAGS) -c $(SRC)/menu.cpp -o $@

# Alvo para a construcao do objeto build/contaCorrente.o
# Define os arquivos objeto dos quais contaCorrente.o depende.
$(OBJ)/contaCorrente.o : $(INC)/contaCorrente.h
	$(CC) $(CPPFLAGS) -c $(SRC)/contaCorrente.cpp -o $@

# Alvo para a construcao do objeto build/contaPoupanca.o
# Define os arquivos objeto dos quais contaPoupanca.o depende.
$(OBJ)/contaPoupanca.o : $(INC)/contaPoupanca.h 
	$(CC) $(CPPFLAGS) -c $(SRC)/contaPoupanca.cpp -o $@

# Alvo (target) usado para limpar os arquivos temporarios (objeto)
# gerados durante a compilacao, assim como os arquivos binarios/executaveis.
clean:
	$(RM) $(PROG) $(OBJS)