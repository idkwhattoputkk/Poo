#ifndef CRITERIO_H
#define CRITERIO_H
#include<iostream>
#include<string>
using namespace std;
class Criterio{
    private:
    string observacion;
    double porcentaje;
    int id;
    public:
    Criterio(string observacion, double porcentaje, int id);
    string getObservacion();
    void setObservacion(string observacion);
    double getPorcentaje();
    void setPorcentaje(double porcentaje);
    int getId();
    void setId(int id);

};
#endif