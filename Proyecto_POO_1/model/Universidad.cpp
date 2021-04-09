#include "Acta.h"
#include "Universidad.h"

//constructores universidad

Universidad::Universidad(){
    this->nombre = "Pontificia universidad javeriana ";
    this->sede = "Cali";
}

void Universidad::crearActas(){
    string fecha, autor, nombre, tipo;
    int numero, periodo;
    string director, codirector, estado;
    cout << "Digite numero: " << endl;
    cin >> numero;

    cout << "Digite la fecha " << endl;
    cin >> fecha;

    cout << "Digite autor: " << endl;
    cin >> autor;

    cout << "Digite el tipo: " << endl;
    cin >> tipo;

    cout << "Digite el periodo " << endl;
    cin >> periodo;

    cout << "Digite el director: " << endl;
    cin >> director;

    cout << "Digite el codirector: " << endl;
    cin >> codirector;

    cout << "Digite el estado: " << endl;
    cin >> estado;

    listaActas.push_back(Acta(numero, fecha,autor,nombre, tipo, periodo, director, codirector, estado));
}
void Universidad::mostrarActas(){
    for (list<Acta>::iterator acta = listaActas.begin(); acta != listaActas.end(); acta++)
    {
        acta->mostrarActa();
    }
}
void Universidad::agregarJurados(int numero){

}
void Universidad::agregarCriterios(int numero){
    
    // for (list<Acta>::iterator acta = listaActas.begin(); acta != listaActas.end(); acta++)
    // {
        
    // }
}
string Universidad::getNombre(){
    return nombre;
}
string Universidad::getSede(){
    return sede;
}
void Universidad::setNombre(string nombre){
    this->nombre = nombre;
}
void Universidad::setSede(string sede){
    this->sede= sede;
}