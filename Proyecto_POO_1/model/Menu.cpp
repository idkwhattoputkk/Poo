#include "Menu.h"

using namespace std;
//Metodo comunicacion con el usario.
int menu()
{
    int opcion;
    cout << "Menu Actas\n"<< endl;
    cout << "1. Agregar Actas" << endl;
    cout << "2. Ver Actas" << endl;
    cout << "3. Añadir jurados" << endl;
    cout << "4. Añadir criterios" <<endl;
    cout << "0. Salir\n" <<endl;
    cout << "Digita el numero: " << endl;
    cin >> opcion;
    return opcion;
}
