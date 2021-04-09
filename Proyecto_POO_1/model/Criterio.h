#ifndef CRITERIO_H
#define CRITERIO_H 1
#include<iostream>
#include<string>
using namespace std;

//clase Criterio
class Criterio{
    //atributos de instacia
    private:
    string observacion;
    double porcentaje;
    int id;

    //metodos de la clase
    public:
    Criterio();
    Criterio(string observacion, double porcentaje, int id);
    string getObservacion();
    void setObservacion(string observacion);
    double getPorcentaje();
    void setPorcentaje(double porcentaje);
    int getId();
    void setId(int id);

};
#endif