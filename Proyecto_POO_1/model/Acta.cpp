#include "Acta.h"

using namespace std;

// constructor por defecto
Acta::Acta(){
    this->numero = 0;
    this->fecha = "";
    this->autor = "";
    this->nombre = "";
    this->tipo = "";
    this->periodo = 0;
    this->director = "";
    this->codirector = "";
    this->estado = "";
    this->notaFinal = 0.0;
    this->numeroCriterios=0;
    this->numeroJurados=0;
}
// Constructor con parametros 
Acta::Acta(int numero, string fecha, string autor, string nombre, string tipo, int periodo, string director, string codirector, string estado){
    this->numero = numero;
    this->fecha = fecha;
    this->autor = autor;
    this->nombre = nombre;
    this->tipo = tipo;
    this->periodo = periodo;
    this->director = director;
    this->codirector = codirector;
    this->estado = estado;
    this->numeroCriterios=0;
    this->numeroJurados=0;

}
//metodos diferentes a los de instanciacion
void Acta::mostrarActa(){
    cout << "==================" << endl;
    cout << "Numero: " << this->numero << endl;
    cout << "Fecha: " << this->fecha << endl;
    cout << "Autor: " << this->autor << endl;
    cout << "nombre: " << this->nombre << endl;
    cout << "Tipo " << this->tipo << endl;
    cout << "Periodo " << this->periodo << endl;
    cout << "Director" << this->director << endl;
    cout << "Codirector" << this->codirector << endl;
    cout << "Estado" << this->estado << endl;
    
}
void Acta::addJurado(){ // añadir jurados 
    string nombre, firma;
    cout <<"ingrese el nombre del jurado: "<<endl;
    cin >> nombre;
    cout <<"ingrese la firma del jurado: "<<endl;
    cin >> firma;
    if(numeroJurados < 2){
        jurados[numeroJurados] = Jurado(nombre,firma);
        numeroJurados++;
    }else{
        cout<< "Se exedio el numero de jurados"<<endl;
    }
}
void Acta::addCriterio(){  // añadir criterio
    string observacion;
    double porcentaje, nota;
    int id;
    cout <<"ingrese la observacion: "<<endl;
    cin >> observacion;
    cout <<"ingrese el porcentaje: "<<endl;
    cin >> porcentaje;
    cout <<"ingrese el id del criterio: "<<endl;
    cin >> id;
    cout <<"ingrese la nota parcial: "<<endl;
    cin >> nota;

    if(numeroCriterios<8){
        criterios[numeroCriterios] = Criterio(observacion, porcentaje, id, nota);
        numeroCriterios++;
    }else{
        cout<< "Se exedio el numero de criterios"<<endl;
    }
    
}
void Acta::calcularNotaFinal(){
    for (int i = 0; i < numeroCriterios; i++)
    {
        notaFinal += criterios[i].calcularNota();
    }  
}
string Acta::nombreJurado(string nombreJurado){
    string retJu; //returns the name of the judge 
    for (int i = 0; i < numeroJurados; i++)
    {
        if(nombreJurado == jurados[i].getNombre()){
            retJu = jurados[i].getNombre();
        }
    } 
    return retJu;
}
// getters and setters para instanciacion y accesibilidad de la clase
int Acta::getNumero(){
    return numero;
}
void Acta::setNumero(int numero){
    this->numero = numero;
}
string Acta::getFecha(){
    return fecha;
}
void Acta::setFecha(string fecha){
    this->fecha = fecha;
}
string Acta::getAutor(){
    return autor;
}
void Acta::setAutor(string autor){
    this->autor = autor;
}
string Acta::getNombre(){
    return nombre;
}
void Acta::setNombre(string nombre){
    this->nombre = nombre;
}
string Acta::getTipo(){
    return tipo;
}
void Acta::setTipo(string tipo){
    this->tipo = tipo;
}
int Acta::getPeriodo(){
    return periodo;
}
void Acta::setPeriodo(int periodo){
    this->periodo = periodo;
}
string Acta::getDirector(){
    return director;
}
void Acta::setDirector(string director){
    this->director = director;
}
string Acta::getCodirector(){
    return codirector;
}
void Acta::setCodirector(string codirector){
    this->codirector = codirector;
}
string Acta::getEstado(){
    return estado;
}
void Acta::setEstado(string estado){
    this->estado = estado;
}
double Acta::getNotaFinal(){
    return notaFinal;
}
void Acta::setNotaFinal(double notaFinal){
    this->notaFinal = notaFinal;
}