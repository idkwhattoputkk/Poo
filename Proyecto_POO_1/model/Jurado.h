#ifndef JURADO_H
#define JURADO_H
#include<iostream>
#include<string>
using namespace std;
class Jurado{
    private:
    string nombre;
    string firma;
    public:
    Jurado(string nombre, string firma);
    string getNombre();
    void setNombre(string nombre);
    string getFirma();
    void setFirma(string firma);
};
#endif