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
    for (list<Acta>::iterator acta = listaActas.begin(); acta != listaActas.end(); acta++)
        {
            if(acta->getNumero() == numero){
                acta->addJurado();
            }
        }
}
void Universidad::agregarCriterios(int numero){
    
    for (list<Acta>::iterator acta = listaActas.begin(); acta != listaActas.end() ; acta++)
    {
        if(acta->getNumero() == numero){
            acta->addCriterio();
        }
    }
}
void Universidad::mostrarNumeroAplicado(string tipo){
    int numApli; // numero de aplicado
    for (list<Acta>::iterator acta = listaActas.begin(); acta != listaActas.end() ; acta++)
    {
        if(acta->getTipo() == tipo){
            numApli++;
        }
    }
    cout<< "Numero de actas del tipo aplicado: "<<endl;
    cout<< numApli;
}
void Universidad::mostrarNumeroInvestigacion(string tipo){
    int numInves; // numero de investigacion
    for (list<Acta>::iterator acta = listaActas.begin(); acta != listaActas.end() ; acta++)
    {
        if(acta->getTipo() == tipo){
            numInves++;
        }
    }
    cout<< "Numero de actas del tipo investigacion: "<<endl;
    cout<< numInves;
}
//metodo que guarda las actas cerradas
void Universidad::guardarActas(){
    for (list<Acta>::iterator acta = listaActas.begin(); acta != listaActas.end() && acta->getEstado()=="cerrado" ; acta++)
    {
        ofstream file1;
        file1.open("Actas.txt", ios::app);
        file1.write((char*)&acta,sizeof(acta));
        file1.close();
    }
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