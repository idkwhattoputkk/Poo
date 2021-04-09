#ifndef UNIVERSIDAD_H
#define UNIVERSIDAD_H
#include <iostream>
#include <fstream>
#include <list>
#include "Acta.h"

using std::list;
//Clase global de manejo de actas
class Universidad{
    //Atributos 
    private:
    string nombre;
    string sede;
    list<Acta> listaActas;
    //metodos clase 
    public:
    Universidad();
    void crearActas();
    string getNombre();
    string getSede();
    void setNombre(string nombre);
    void setSede(string sede);  
    void mostrarActas();
    void agregarJurados(int numero);
    void agregarCriterios(int numero);
    void mostrarNumeroAplicado(string tipo);
    void mostrarNumeroInvestigacion(string tipo);
    void guardarActas();
    void eliminarActa();
     


};
#endif