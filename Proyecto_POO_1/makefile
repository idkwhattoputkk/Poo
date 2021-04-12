all: compilar
compilar: Acta Main Jurado Criterio Menu Universidad Menu Main 
		g++ -o Universidad Jurado.o Acta.o Universidad.o Menu.o Main.o  Criterio.o
Acta: Acta.cpp Acta.h
		g++ -c -ggdb3 -ggdb3 model/Acta.cpp
Criterio: Criterio.cpp Criterio.h
		g++ -c -ggdb3 -ggdb3 model/Criterio.cpp
Jurado: Jurado.cpp Jurado.h
		g++ -c -ggdb3 Jurado.cpp
Universidad: Universidad.cpp Universidad.h
		g++ -c -ggdb3 model/Universidad.cpp
Menu: Menu.cpp Menu.h
		g++ -c -ggdb3 userInterface/Menu.cpp
Main: Main.cpp Menu.h Universidad.h Jurado.h 
	  g++ -c -ggdb3 userInterface/Main.cpp
clean: 
	delete Jurado.o Acta.o Universidad.o Menu.o Main.o Criterio.o