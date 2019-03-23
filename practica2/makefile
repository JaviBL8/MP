SRC = src
INC = include
OBJ = obj
BIN = bin
CXX = g++
CPPFLAGS = -c -o
###Construir ejecutable
all: $(BIN)/DemosCadenasClasicas $(BIN)/SaltaPrimeraPalabra $(BIN)/PosicionPrimerBlanco

###Compilación de módulos
$(OBJ)/MiCadenaClasica.o: $(SRC)/MiCadenaClasica.cpp $(INC)/MiCadenaClasica.h
	$(CXX) $(CPPFLAGS) $(OBJ)/MiCadenaClasica.o $(SRC)/MiCadenaClasica.cpp 

$(OBJ)/DemosCadenasClasicas.o: $(OBJ)/MiCadenaClasica.o 
	$(CXX) $(CPPFLAGS) $(OBJ)/DemosCadenasClasicas.o $(SRC)/DemosCadenasClasicas.cpp 

$(OBJ)/SaltaPrimeraPalabra.o: $(SRC)/SaltaPrimeraPalabra.cpp 
	$(CXX) $(CPPFLAGS) $(OBJ)/SaltaPrimeraPalabra.o $(SRC)/SaltaPrimeraPalabra.cpp 

$(OBJ)/PosicionPrimerBlanco.o: $(SRC)/PosicionPrimerBlanco.cpp 
	$(CXX) $(CPPFLAGS) $(OBJ)/PosicionPrimerBlanco.o $(SRC)/PosicionPrimerBlanco.cpp 

$(BIN)/PosicionPrimerBlanco: $(OBJ)/PosicionPrimerBlanco.o 
	$(CXX) -o $(BIN)/PosicionPrimerBlanco $(OBJ)/PosicionPrimerBlanco.o 

$(BIN)/SaltaPrimeraPalabra: $(OBJ)/SaltaPrimeraPalabra.o 
	$(CXX) -o $(BIN)/SaltaPrimeraPalabra $(OBJ)/SaltaPrimeraPalabra.o 

$(BIN)/DemosCadenasClasicas: $(OBJ)/DemosCadenasClasicas.o $(OBJ)/MiCadenaClasica.o
	$(CXX) -o $(BIN)/DemosCadenasClasicas $(OBJ)/DemosCadenasClasicas.o $(OBJ)/MiCadenaClasica.o 

###Limpieza 
clean:
	@echo "Limpiando..." 
	rm $(OBJ)/*.o 
mrproper: clean
	rm $(BIN)/DemosCadenasClasicas