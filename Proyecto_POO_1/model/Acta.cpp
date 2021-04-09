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
int Acta::getNumero(){
    return numero;
}
void Acta::setNumero(int numero){
    this->numero = numero;
}
string Acta::getFecha(){
    return fecha;
}
void Acta::setFecha(string fecha){
    this->fecha = fecha;
}
string Acta::getAutor(){
    return autor;
}
void Acta::setAutor(string autor){
    this->autor = autor;
}
string Acta::getNombre(){
    return nombre;
}
void Acta::setNombre(string nombre){
    this->nombre = nombre;
}
string Acta::getTipo(){
    return tipo;
}
void Acta::setTipo(string tipo){
    this->tipo = tipo;
}
int Acta::getPeriodo(){
    return periodo;
}
void Acta::setPeriodo(int periodo){
    this->periodo = periodo;
}
string Acta::getDirector(){
    return director;
}
void Acta::setDirector(string director){
    this->director = director;
}
string Acta::getCodirector(){
    return codirector;
}
void Acta::setCodirector(string codirector){
    this->codirector = codirector;
}
string Acta::getEstado(){
    return estado;
}
void Acta::setEstado(string estado){
    this->estado = estado;
}
double Acta::getNotaFinal(){
    return notaFinal;
}
void Acta::setNotaFinal(double notaFinal){
    this->notaFinal = notaFinal;
}