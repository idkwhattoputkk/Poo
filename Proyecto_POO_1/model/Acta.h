#ifndef ACTA_H
#define ACTA_H
#include<iostream>
#include<string>
using namespace std;
class Acta{
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
public:
    Acta(int numero, string fecha, string autor, string nombre, string tipo, int periodo, string director, string codirector, string estado, double notaFinal);
    int getNumero();
    void setNumero(int numero);
    string getFecha();
    void setFecha(string fecha);
    string getAutor();
    void setAutor(string autor);
    string getNombre();
    void setNombre(string nombre);
    int getPeriodo();
    void setPeriodo(int periodo);
    string getDirector();
    void setDirector(string director);
    string getCodirector();
    void setCodirector(string codirector);
    double getnotaFinal();
    void setnotaFinal(double notaFinal);
};
#endif