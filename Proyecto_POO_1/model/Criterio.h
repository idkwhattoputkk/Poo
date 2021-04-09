#ifndef CRITERIO_H
#define CRITERIO_H 
#include <iostream>
#include <string>
using namespace std;

//clase Criterio
class Criterio{
    //atributos de instacia
    private:
    string observacion;
    double porcentaje;
    int id;
    double nota;

    //metodos de la clase
    public:
    Criterio();
    Criterio(string observacion, double porcentaje, int id, double nota);
    string getObservacion();
    void setObservacion(string observacion);
    double getPorcentaje();
    void setPorcentaje(double porcentaje);
    int getId();
    void setId(int id);
    double calcularNota();

};
#endif