#include "Jurado.h"
#include <string>
#include <iostream>
using namespace std;

Jurado::Jurado(string nombre, string firma){
    this->nombre = nombre;
    this->firma = firma;
}
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