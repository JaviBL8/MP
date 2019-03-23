SRC = src
INC = include
OBJ = obj
BIN = bin
CXX = g++
CPPFLAGS = -g -c -o
###Construir ejecutable
all: $(BIN)/Barquitos $(BIN)/BigInt $(BIN)/Polilinea $(BIN)/Lista $(BIN)/MatrizDispersa $(BIN)/Skyline $(BIN)/Frecuencias $(BIN)/Menu

###Compilación de módulos

##BARQUITOS
$(OBJ)/Barquitos.o: $(SRC)/Barquitos.cpp $(INC)/Barquitos.h
	$(CXX) $(CPPFLAGS) $(OBJ)/Barquitos.o $(SRC)/Barquitos.cpp 

$(OBJ)/MainBarquitos.o: $(OBJ)/Barquitos.o 
	$(CXX) $(CPPFLAGS) $(OBJ)/MainBarquitos.o $(SRC)/MainBarquitos.cpp 

$(BIN)/Barquitos: $(OBJ)/MainBarquitos.o $(OBJ)/Barquitos.o
	$(CXX) -o $(BIN)/Barquitos $(OBJ)/MainBarquitos.o $(OBJ)/Barquitos.o 


##BIG_INT
$(OBJ)/BigInt.o: $(SRC)/BigInt.cpp $(INC)/BigInt.h
	$(CXX) $(CPPFLAGS) $(OBJ)/BigInt.o $(SRC)/BigInt.cpp 

$(OBJ)/MainBigInt.o: $(OBJ)/BigInt.o 
	$(CXX) $(CPPFLAGS) $(OBJ)/MainBigInt.o $(SRC)/MainBigInt.cpp 

$(BIN)/BigInt: $(OBJ)/MainBigInt.o $(OBJ)/BigInt.o
	$(CXX) -o $(BIN)/BigInt $(OBJ)/MainBigInt.o $(OBJ)/BigInt.o 

##POLILINEA
$(OBJ)/Polilinea.o: $(SRC)/Polilinea.cpp $(INC)/Polilinea.h
	$(CXX) $(CPPFLAGS) $(OBJ)/Polilinea.o $(SRC)/Polilinea.cpp 

$(OBJ)/MainPolilinea.o: $(OBJ)/Polilinea.o 
	$(CXX) $(CPPFLAGS) $(OBJ)/MainPolilinea.o $(SRC)/MainPolilinea.cpp 

$(BIN)/Polilinea: $(OBJ)/MainPolilinea.o $(OBJ)/Polilinea.o
	$(CXX) -o $(BIN)/Polilinea $(OBJ)/MainPolilinea.o $(OBJ)/Polilinea.o 

##LISTA
$(OBJ)/Lista.o: $(SRC)/Lista.cpp $(INC)/Lista.h
	$(CXX) $(CPPFLAGS) $(OBJ)/Lista.o $(SRC)/Lista.cpp 

$(OBJ)/MainLista.o: $(OBJ)/Lista.o 
	$(CXX) $(CPPFLAGS) $(OBJ)/MainLista.o $(SRC)/MainLista.cpp 

$(BIN)/Lista: $(OBJ)/MainLista.o $(OBJ)/Lista.o
	$(CXX) -o $(BIN)/Lista $(OBJ)/MainLista.o $(OBJ)/Lista.o 

##MATRIZ_DISPERSA
$(OBJ)/MatrizDispersa.o: $(SRC)/MatrizDispersa.cpp $(INC)/MatrizDispersa.h $(INC)/Valor.h
	$(CXX) $(CPPFLAGS) $(OBJ)/MatrizDispersa.o $(SRC)/MatrizDispersa.cpp 

$(OBJ)/MainMatrizDispersa.o: $(OBJ)/MatrizDispersa.o 
	$(CXX) $(CPPFLAGS) $(OBJ)/MainMatrizDispersa.o $(SRC)/MainMatrizDispersa.cpp 

$(BIN)/MatrizDispersa: $(OBJ)/MainMatrizDispersa.o $(OBJ)/MatrizDispersa.o
	$(CXX) -o $(BIN)/MatrizDispersa $(OBJ)/MainMatrizDispersa.o $(OBJ)/MatrizDispersa.o

##SKYLINE
$(OBJ)/Skyline.o: $(SRC)/Skyline.cpp $(INC)/Skyline.h
	$(CXX) $(CPPFLAGS) $(OBJ)/Skyline.o $(SRC)/Skyline.cpp 

$(OBJ)/MainSkyline.o: $(OBJ)/Skyline.o 
	$(CXX) $(CPPFLAGS) $(OBJ)/MainSkyline.o $(SRC)/MainSkyline.cpp 

$(BIN)/Skyline: $(OBJ)/MainSkyline.o $(OBJ)/Skyline.o
	$(CXX) -o $(BIN)/Skyline $(OBJ)/MainSkyline.o $(OBJ)/Skyline.o

##FRECUENCIAS
$(OBJ)/Frecuencias.o: $(SRC)/Frecuencias.cpp $(INC)/Frecuencias.h
	$(CXX) $(CPPFLAGS) $(OBJ)/Frecuencias.o $(SRC)/Frecuencias.cpp 

$(OBJ)/MainFrecuencias.o: $(OBJ)/Frecuencias.o 
	$(CXX) $(CPPFLAGS) $(OBJ)/MainFrecuencias.o $(SRC)/MainFrecuencias.cpp 

$(BIN)/Frecuencias: $(OBJ)/MainFrecuencias.o $(OBJ)/Frecuencias.o
	$(CXX) -o $(BIN)/Frecuencias $(OBJ)/MainFrecuencias.o $(OBJ)/Frecuencias.o

##MENU
$(OBJ)/Menu.o: $(SRC)/Menu.cpp $(INC)/Menu.h
	$(CXX) $(CPPFLAGS) $(OBJ)/Menu.o $(SRC)/Menu.cpp 

$(OBJ)/MainMenu.o: $(OBJ)/Menu.o 
	$(CXX) $(CPPFLAGS) $(OBJ)/MainMenu.o $(SRC)/MainMenu.cpp 

$(BIN)/Menu: $(OBJ)/MainMenu.o $(OBJ)/Menu.o
	$(CXX) -o $(BIN)/Menu $(OBJ)/MainMenu.o $(OBJ)/Menu.o

###Limpieza 
clean:
	@echo "Limpiando..." 
	rm $(OBJ)/*.o 
mrproper: clean
	rm $(BIN)/Barquitos
	rm $(BIN)/BigInt
	rm $(BIN)/Polilinea
	rm $(BIN)/Lista
	rm $(BIN)/MatrizDispersa
	rm $(BIN)/Skyline
	rm $(BIN)/Frecuencias
	rm $(BIN)/Menu