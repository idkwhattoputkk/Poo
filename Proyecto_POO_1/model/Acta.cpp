#include "Acta.h"
#include <string>
#include <iostream>
using namespace std;

Acta::Acta(int numero, string fecha, string autor, string nombre, string tipo, int periodo, string director, string codirector, string estado, double notaFinal){
    this->numero = numero;
    this->fecha = fecha;
    this->autor = autor;
    this->nombre = nombre;
    this->tipo = tipo;
    this->periodo = periodo;
    this->director = director;
    this->codirector = codirector;
    this->estado = estado;
    this->notaFinal = notaFinal;

}