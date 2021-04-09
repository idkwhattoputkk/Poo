#include "Jurado.h"
#include <string>
#include <iostream>
using namespace std;

//Constructors
Jurado::Jurado(){
    this->nombre = "";
    this->firma = "";
}
Jurado::Jurado(string nombre, string firma){
    this->nombre = nombre;
    this->firma = firma;
}
//getters and setters
string Jurado::getNombre(){
    return nombre;
}
void Jurado::setNombre(string nombre){
    this->nombre = nombre;
}
string Jurado::getFirma(){
    return firma;
}
void Jurado::setFirma(string firma){
    this->firma = firma;
}