#include <iostream>
#include <string>
#include "Acta.h"
using namespace std;

int menu()
{
    int opcion;
    cout << "Menu Actas\n"<< endl;
    cout << "1. Agregar Actas" << endl;
    cout << "0. Salir\n" <<endl;
    cout << "Digita el numero: " << endl;
    cin >> opcion;
    return opcion;
}
