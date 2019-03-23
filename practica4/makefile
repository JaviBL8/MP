# VARIABLES
BIN = bin
SRC = src
OBJ = obj
LIB = lib
INCLUDE = include

# TODO (sin empaquetado)
all: clean $(BIN)/01_RedimensionarArrayDinamico $(BIN)/02_Calificaciones_ArrayDinamicoStruct_ordenado

# COMPILACION
$(BIN)/01_RedimensionarArrayDinamico : $(OBJ)/VectorDinamico.o
	g++ -g -o $(BIN)/01_RedimensionarArrayDinamico $(SRC)/01_RedimensionarArrayDinamico.cpp $(OBJ)/VectorDinamico.o -I$(INCLUDE)

$(OBJ)/VectorDinamico.o : $(SRC)/VectorDinamico.cpp
	g++ -c -g -o $(OBJ)/VectorDinamico.o $(SRC)/VectorDinamico.cpp -I$(INCLUDE)

$(OBJ)/02_Calificaciones_ArrayDinamicoStruct_ordenado.o: $(SRC)/02_Calificaciones_ArrayDinamicoStruct_ordenado.cpp 
	g++ -c -g -o $(OBJ)/02_Calificaciones_ArrayDinamicoStruct_ordenado.o $(SRC)/02_Calificaciones_ArrayDinamicoStruct_ordenado.cpp 

$(OBJ)/DemoCalificacionesArrayStruct.o: $(OBJ)/02_Calificaciones_ArrayDinamicoStruct_ordenado.o 
	g++ -c -g -o $(OBJ)/DemoCalificacionesArrayStruct.o $(SRC)/DemoCalificacionesArrayStruct.cpp 

$(BIN)/02_Calificaciones_ArrayDinamicoStruct_ordenado: $(OBJ)/DemoCalificacionesArrayStruct.o $(OBJ)/02_Calificaciones_ArrayDinamicoStruct_ordenado.o
	g++ -g -o $(BIN)/02_Calificaciones_ArrayDinamicoStruct_ordenado $(OBJ)/DemoCalificacionesArrayStruct.o $(OBJ)/02_Calificaciones_ArrayDinamicoStruct_ordenado.o
# LIMPEZA
# Limpia los archivos compilados, así como los archivos objeto y los paquetes zip
.PHONY : clean
clean : 
	@echo "Limpiando..."
	@rm -f $(OBJ)/*\
        $(BIN)/*\
        ./*.zip
