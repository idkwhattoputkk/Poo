#include "Criterio.h"
using namespace std;

//Constructors
Criterio::Criterio(){
    this->observacion = "";
    this->porcentaje = 0.0;
    this->id = 0;
}
Criterio::Criterio(string observacion, double porcentaje, int id){
    this->observacion = observacion;
    this->porcentaje = porcentaje;
    this->id = id; 
    
}
// getters and setters
string Criterio::getObservacion(){
    return observacion;
}
void Criterio::setObservacion(string observacion){
    this->observacion = observacion;
}
double Criterio::getPorcentaje(){
    return porcentaje;
}
void Criterio::setPorcentaje(double portcentaje){
    this->porcentaje = porcentaje;
}
int Criterio::getId(){
    return id;
}
void Criterio::setId(int id){
    this->id = id;
}