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
PROG = $(BIN)/produto

# Opcoes de compilacao
CPPFLAGS = -Wall -pedantic -std=c++11 -I$(INC)

# Lista dos arquivos objeto (.o) que formam o binario/executavel final
OBJS = $(OBJ)/produto.o $(OBJ)/fruta.o $(OBJ)/bebida.o $(OBJ)/roupa.o $(OBJ)/main.o

all : $(OBJS)
	$(CC) $(LDFLAGS) -o $(PROG) $(OBJS)

# Alvo para a compilação com informações de debug
# Altera a flag CFLAGS, incluindo as opções -g -O0 e recompila todo o projeto
debug: CFLAGS += -g -O0 
debug: all

# Alvo para a construcao do objeto build/main.o
# Define os arquivos objeto dos quais main.o depende.
$(OBJ)/main.o : $(OBJ)/produto.o $(OBJ)/fruta.o $(OBJ)/bebida.o $(OBJ)/roupa.o
	$(CC) $(CPPFLAGS) -c $(SRC)/main.cpp -o $@

# Alvo para a construcao do objeto build/produto.o
# Define os arquivos objeto dos quais produto.o depende.
$(OBJ)/produto.o : $(INC)/produto.h
	$(CC) $(CPPFLAGS) -c $(SRC)/produto.cpp -o $@

# Alvo para a construcao do objeto build/roupa.o
# Define os arquivos objeto dos quais roupa.o depende.
$(OBJ)/roupa.o : $(INC)/roupa.h $(OBJ)/produto.o 
	$(CC) $(CPPFLAGS) -c $(SRC)/roupa.cpp -o $@

# Alvo para a construcao do objeto build/fruta.o
# Define os arquivos objeto dos quais fruta.o depende.
$(OBJ)/fruta.o : $(INC)/fruta.h $(OBJ)/produto.o 
	$(CC) $(CPPFLAGS) -c $(SRC)/fruta.cpp -o $@

# Alvo para a construcao do objeto build/bebida.o
# Define os arquivos objeto dos quais bebida.o depende.
$(OBJ)/bebida.o : $(INC)/bebida.h $(OBJ)/produto.o 
	$(CC) $(CPPFLAGS) -c $(SRC)/bebida.cpp -o $@

# Alvo (target) usado para limpar os arquivos temporarios (objeto)
# gerados durante a compilacao, assim como os arquivos binarios/executaveis.
clean:
	$(RM) $(PROG) $(OBJS)