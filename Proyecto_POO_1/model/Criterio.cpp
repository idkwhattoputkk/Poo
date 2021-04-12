#include "Criterio.h"


//Constructors
Criterio::Criterio(){
    this->observacion = "";
    this->porcentaje = 0.0;
    this->id = 0;
}
Criterio::Criterio(string observacion, double porcentaje, int id, double nota){
    this->observacion = observacion;
    this->porcentaje = porcentaje;
    this->id = id; 
    this->nota = nota;
    
}
// metodo calculo parcial de la nota del total de criterios
double Criterio::calcularNota(){
    double notaPfinal; // nota parcial final
    notaPfinal =  porcentaje * nota;
    return notaPfinal;
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