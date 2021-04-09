#include <iostream>
#include "menu.h"
#include "Universidad.h"

int main()
{
    Universidad javeriana;
    int opcion;
    std::cout << "\n";
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
            std::cout << "\n";
            javeriana.mostrarActas();
            std::cout << "\n";
            break;
        case 3:
            int numero;
            std::cout << "\n";
            std::cout << "Ingrese el numero de la acta para agregar jurado";
            std::cin >> numero;
            javeriana.agregarJurados(numero);
            std::cout << "\n";
            // std::cout << "Lo siento no esta hecha \n";
            break;
        case 4:
            int numero;
            std::cout << "\n";
            std::cout << "Ingrese el numero de la acta para agregar criterios";
            std::cin >> numero;
            javeriana.agregarCriterios(numero);
            std::cout << "\n";
            // std::cout << "Lo siento no esta hecha \n";
            break;
        default:
            std::cout << "\nNumero invalido\n"
                      << std::endl;
            break;
        }
    } while (opcion != 0);
    return 0;