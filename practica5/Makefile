# VARIABLES
BIN = bin
SRC = src
OBJ = obj
LIB = lib
INCLUDE = include

# TODO (sin empaquetado)
all: clean $(BIN)/04_Dinamic_Matriz2D_1 $(BIN)/05_Dinamic_Matriz2D_2 $(BIN)/06_Copia_2D

# COMPILACION
$(OBJ)/Matriz2D_1.o: $(SRC)/Matriz2D_1.cpp 
	g++ -c -g -o $(OBJ)/Matriz2D_1.o $(SRC)/Matriz2D_1.cpp 

$(OBJ)/Main_1D.o: $(OBJ)/Matriz2D_1.o 
	g++ -c -g -o $(OBJ)/Main_1D.o $(SRC)/Main_1D.cpp 

$(BIN)/04_Dinamic_Matriz2D_1: $(OBJ)/Main_1D.o $(OBJ)/Matriz2D_1.o
	g++ -g -o $(BIN)/04_Dinamic_Matriz2D_1 $(OBJ)/Main_1D.o $(OBJ)/Matriz2D_1.o

$(OBJ)/Matriz2D_2.o: $(SRC)/Matriz2D_2.cpp 
	g++ -c -g -o $(OBJ)/Matriz2D_2.o $(SRC)/Matriz2D_2.cpp 

$(OBJ)/Main_2D.o: $(OBJ)/Matriz2D_2.o 
	g++ -c -g -o $(OBJ)/Main_2D.o $(SRC)/Main_2D.cpp 

$(BIN)/05_Dinamic_Matriz2D_2: $(OBJ)/Main_2D.o $(OBJ)/Matriz2D_2.o
	g++ -g -o $(BIN)/05_Dinamic_Matriz2D_2 $(OBJ)/Main_2D.o $(OBJ)/Matriz2D_2.o

$(OBJ)/Conversiones-Matriz2D.o: $(SRC)/Conversiones-Matriz2D.cpp 
	g++ -c -g -o $(OBJ)/Conversiones-Matriz2D.o $(SRC)/Conversiones-Matriz2D.cpp 

$(OBJ)/Conversiones.o: $(OBJ)/Conversiones-Matriz2D.o 
	g++ -c -g -o $(OBJ)/Conversiones.o $(SRC)/Conversiones.cpp 

$(BIN)/06_Copia_2D: $(OBJ)/Conversiones.o $(OBJ)/Conversiones-Matriz2D.o
	g++ -g -o $(BIN)/06_Copia_2D $(OBJ)/Conversiones.o $(OBJ)/Conversiones-Matriz2D.o
# LIMPEZA
# Limpia los archivos compilados, así como los archivos objeto y los paquetes zip
.PHONY : clean
clean : 
	@echo "Limpiando..."
	@rm -f $(OBJ)/*\
        $(BIN)/*\
        ./*.zip
