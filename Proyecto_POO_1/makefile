USERINTERFACE := userInterface
MODEL:= model

debug := -ggdb3

all: compilar
compilar: Acta Main Jurado Criterio Menu Universidad Menu Main 
		g++ ${debug} -o Ejecutable Jurado.o Acta.o Universidad.o Menu.o Main.o  Criterio.o
Acta: ${MODEL}/Acta.cpp ${MODEL}/Acta.h
		g++ -c ${debug} ${MODEL}/Acta.cpp
Criterio: ${MODEL}/Criterio.cpp ${MODEL}/Criterio.h
		g++ -c ${debug} ${MODEL}/Criterio.cpp
Jurado: ${MODEL}/Jurado.cpp ${MODEL}/Jurado.h
		g++ -c ${debug} Jurado.cpp
Universidad: ${MODEL}/Universidad.cpp ${MODEL}/Universidad.h
		g++ -c ${debug} ${MODEL}/Universidad.cpp
Menu: ${USERINTERFACE}/Menu.cpp userInterface/Menu.h
		g++ -c ${debug} ${USERINTERFACE}/Menu.cpp
Main: Main.cpp ${USERINTERFACE}/Menu.h ${MODEL}/Universidad.h ${MODEL}/Jurado.h 
	  g++ -c ${debug} Main.cpp
clean: 
	delete Jurado.o Acta.o Universidad.o Menu.o Main.o Criterio.o