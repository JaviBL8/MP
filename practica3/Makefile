SRC = src
INC = include
OBJ = obj
BIN = bin
CXX = g++
CPPFLAGS = -g -c -o
###Construir ejecutable
all: $(BIN)/DemoPosMayor	$(BIN)/DemoOrdenConPunteros		$(BIN)/DemoCalificacionesArrayStruct

###Compilación de módulos
##EJERCICIO 16
$(OBJ)/16_PosMayor.o: $(SRC)/16_PosMayor.cpp $(INC)/16_PosMayor.h
	$(CXX) $(CPPFLAGS) $(OBJ)/16_PosMayor.o $(SRC)/16_PosMayor.cpp 

$(OBJ)/DemoPosMayor.o: $(OBJ)/16_PosMayor.o 
	$(CXX) $(CPPFLAGS) $(OBJ)/DemoPosMayor.o $(SRC)/DemoPosMayor.cpp 

$(BIN)/DemoPosMayor: $(OBJ)/DemoPosMayor.o $(OBJ)/16_PosMayor.o
	$(CXX) -o $(BIN)/DemoPosMayor $(OBJ)/DemoPosMayor.o $(OBJ)/16_PosMayor.o 
##EJERCICIO 17
$(OBJ)/17_OrdenConPunteros.o: $(SRC)/17_OrdenConPunteros.cpp $(INC)/17_OrdenConPunteros.h
	$(CXX) $(CPPFLAGS) $(OBJ)/17_OrdenConPunteros.o $(SRC)/17_OrdenConPunteros.cpp 

$(OBJ)/DemoOrdenConPunteros.o: $(OBJ)/17_OrdenConPunteros.o 
	$(CXX) $(CPPFLAGS) $(OBJ)/DemoOrdenConPunteros.o $(SRC)/DemoOrdenConPunteros.cpp 

$(BIN)/DemoOrdenConPunteros: $(OBJ)/DemoOrdenConPunteros.o $(OBJ)/17_OrdenConPunteros.o
	$(CXX) -o $(BIN)/DemoOrdenConPunteros $(OBJ)/DemoOrdenConPunteros.o $(OBJ)/17_OrdenConPunteros.o 
##EJERCICIO 18
$(OBJ)/18_Calificaciones_ArrayStruct.o: $(SRC)/18_Calificaciones_ArrayStruct.cpp $(INC)/18_Calificaciones_ArrayStruct.h
	$(CXX) $(CPPFLAGS) $(OBJ)/18_Calificaciones_ArrayStruct.o $(SRC)/18_Calificaciones_ArrayStruct.cpp 

$(OBJ)/DemoCalificacionesArrayStruct.o: $(OBJ)/18_Calificaciones_ArrayStruct.o 
	$(CXX) $(CPPFLAGS) $(OBJ)/DemoCalificacionesArrayStruct.o $(SRC)/DemoCalificacionesArrayStruct.cpp 

$(BIN)/DemoCalificacionesArrayStruct: $(OBJ)/DemoCalificacionesArrayStruct.o $(OBJ)/18_Calificaciones_ArrayStruct.o
	$(CXX) -g -o $(BIN)/DemoCalificacionesArrayStruct $(OBJ)/DemoCalificacionesArrayStruct.o $(OBJ)/18_Calificaciones_ArrayStruct.o

###Limpieza 
clean:
	@echo "Limpiando..." 
	rm $(OBJ)/*.o 
mrproper: clean
	rm $(BIN)/DemoPosMayor
	rm $(BIN)/DemoOrdenConPunteros
	rm $(BIN)/DemoCalificacionesArrayStruct