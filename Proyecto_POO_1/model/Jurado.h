#ifndef JURADO_H
#define JURADO_H 
#include <iostream>
#include <string>
using namespace std;

//Clase Jurado
class Jurado{
    //atributos de instancia
    private:
    string nombre;
    string firma;
    //metodos
    public:
    Jurado();
    Jurado(string nombre, string firma);
    string getNombre();
    void setNombre(string nombre);
    string getFirma();
    void setFirma(string firma);
};
#endif  /* !JURADO_H */