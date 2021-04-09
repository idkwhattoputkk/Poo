#include "Acta.h"
#include <string>
#include <iostream>
using namespace std;

// constructor por defecto
Acta::Acta(){
    this->numero = 0;
    this->fecha = "";
    this->autor = "";
    this->nombre = "";
    this->tipo = "";
    this->periodo = 0;
    this->director = "";
    this->codirector = "";
    this->estado = "";
    this->notaFinal = 0.0;
    this->numeroCriterios=0;
    this->numeroJurados=0;
}
// Constructor con parametros 
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
    this->numeroCriterios=0;
    this->numeroJurados=0;

}
//metodos diferentes a los de instanciacion

void Acta::addJurado(){ // añadir jurados 
    string nombre, firma;
    cout <<"ingrese el nombre del jurado: "<<endl;
    cin >> nombre;
    cout <<"ingrese la firma del jurado: "<<endl;
    cin >> firma;
    if(numeroJurados < 2){
        jurados[numeroJurados] = Jurado(nombre,firma);
        numeroJurados++;
    }
}
void Acta::addCriterio(){// añadir criterios
    string observacion;
    double porcentaje;
    int id;
    cout <<"ingrese la observacion: "<<endl;
    cin >> observacion;
    cout <<"ingrese el porcentaje: "<<endl;
    cin >> porcentaje;
    cout <<"ingrese el id del criterio: "<<endl;
    cin >> id;
    if(numeroCriterios<8){
        criterios[numeroCriterios] = Criterio(observacion, porcentaje, id);
        numeroCriterios++;
    }
    
}
// getters and setters para instanciacion y accesibilidad de la clase
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