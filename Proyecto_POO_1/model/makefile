all: compilar
compilar: Acta Main Jurado Criterio Menu
		g++ -o Universidad Jurado.o Acta.o Universidad.o Menu.o Main.o  Criterio.o
Acta: Acta.cpp Acta.h
		g++ -c Acta.cpp
Criterio: Criterio.cpp Criterio.h
		g++ -c Criterio.cpp
Jurado: Jurado.cpp Jurado.h
		g++ -c Jurado.cpp
Universidad: Universidad.cpp Universidad.h
		g++ -c Universidad.cpp
Menu: Menu.cpp Menu.h
		g++ -c Menu.cpp
Main: Main.cpp Menu.h Universidad.h Jurado.h 
	  g++ -c Main.cpp
clean: 
	delete Jurado.o Acta.o Universidad.o Menu.o Main.o Criterio.o