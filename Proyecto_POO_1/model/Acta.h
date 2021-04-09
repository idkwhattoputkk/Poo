#ifndef ACTA_H
#define ACTA_H 
#include <iostream>
#include <string>
#include "Criterio.h"
#include "Jurado.h"
using namespace std;
//Clase jurado
class Acta{

    //Atributos de la clase para instanciacion
    private:
        int numero;
        string fecha;
        string autor;
        string nombre;
        string tipo;
        int periodo;
        string director;
        string codirector;
        string estado;
        double notaFinal;
        //Atributos de asociacion
        Criterio criterios[8];
        int numeroCriterios;
        Jurado jurados[2];
        int numeroJurados;
    //metodos de la clase 
    public:
        Acta();
        Acta(int numero, string fecha, string autor, string nombre, string tipo, int periodo, string director, string codirector, string estado);
        int getNumero();
        void setNumero(int numero);
        string getFecha();
        void setFecha(string fecha);
        string getAutor();
        void setAutor(string autor);
        string getNombre();
        void setNombre(string nombre);
        string getTipo();
        void setTipo(string tipo);
        int getPeriodo();
        void setPeriodo(int periodo);
        string getDirector();
        void setDirector(string director);
        string getCodirector();
        void setCodirector(string codirector);
        string getEstado();
        void setEstado(string estado);
        double getNotaFinal();
        void setNotaFinal(double notaFinal);
        void addJurado();
        void addCriterio();
        void mostrarActa();
        void calcularNotaFinal();
        string nombreJurado(string nonbreJurado);
};
#endif