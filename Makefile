#Makefile for "PetFera 3.0" C++ application
#Created by Werdeles Marcio 17/12/2020

BIN = ./bin
SRC = ./src
INC = ./lib

PROG = $(BIN)/PetFera
CC = g++
CPPFLAGS = -Wall -std=c++11 -I./lib

OBJS = $(BIN)/main.o $(BIN)/funcionario.o $(BIN)/tratador.o $(BIN)/veterinario.o

all : $(OBJS)
	$(CC) $(OBJS) -o $(PROG)

debug: CPPFLAGS += -DDEBUG -g -O0
debug: clean all

$(BIN)/main.o : $(SRC)/main.cpp
	$(CC) $(CPPFLAGS) -c $(SRC)/main.cpp -o $@
$(BIN)/funcionario.o : $(SRC)/funcionario.cpp $(INC)/funcionario.hpp 
	$(CC) $(CPPFLAGS) -c $(SRC)/funcionario.cpp -o $@
$(BIN)/tratador.o : $(SRC)/tratador.cpp $(INC)/tratador.hpp 
	$(CC) $(CPPFLAGS) -c $(SRC)/tratador.cpp -o $@
$(BIN)/veterinario.o : $(SRC)/veterinario.cpp $(INC)/veterinario.hpp 
	$(CC) $(CPPFLAGS) -c $(SRC)/veterinario.cpp -o $@
clean:
	rm -f core $(PROG) $(OBJS)