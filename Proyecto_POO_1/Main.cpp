#include <iostream>
#include "userInterface/Menu.h"
#include "model/Universidad.h"
using namespace std;
int main()
{
    Universidad javeriana;
    int opcion;
    cout << "\n";
    do
    {
        opcion = menu();
        switch (opcion)
        {
        case 0:
            break;
        case 1:
            javeriana.crearActas();
            break;
        case 2:
            cout << "\n";
            javeriana.mostrarActas();
            cout << "\n";
            break;
        case 3:
            int numero;
            cout << "\n";
            cout << "Ingrese el numero de la acta para agregar jurado:  "<< endl;
            cin >> numero;
            javeriana.agregarJurados(numero);
            cout << "\n";
            break;
        case 4:
            int num;
            cout << "\n";
            cout << "Ingrese el numero de la acta para agregar criterios: "<< endl;
            cin >> numero;
            javeriana.agregarCriterios(num);
            cout << "\n";
            break;
        case 5: 
            cout << "\n";
            javeriana.mostrarNumeroAplicado("aplicado");
            cout << "\n";
        case 6: 
            cout << "\n";
            javeriana.mostrarNumeroInvestigacion("investigacion");
            cout << "\n";
        case 7: 
            cout << "\n";
            javeriana.guardarActas();
            cout << "\n";
        default:
            cout << "\nNumero invalido\n"
                      << endl;
            break;
        }
    } while (opcion != 0);
    return 0;
}