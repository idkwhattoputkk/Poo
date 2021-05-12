//
// Created by lufe0 on 7/05/2021.
//

#include "View.h"

View::View(){
    controller = Controller();
}
void View::agregarJugador()
{
    string nombreJugador;
    float dineroPesos;
    long idJugador;
    cout << "Ingrese el nombre del jugador \n";
    cin.ignore(100, '\n');
    getline(cin, nombreJugador);
    // Id del jugador
    cout << "Ingrese el id del jugador \n";
    cin >> idJugador;
    // Validacion de los datos del jugador
    do
    {
        cout << "Ingrese el dinero en pesos \n";
        cin >> dineroPesos;
    } while (dineroPesos <= 0);

    // Esta linea de codigo controla la excepcion que lanza el controller y lo muestra en pantalla
    try {
        controller.agregarJugador(idJugador, nombreJugador, dineroPesos);
    } catch (std::domain_error ex) {
        cout << "ERROR: " << ex.what();
    }
}


void View::pedirUsuario(){
    try {
        long idJugador;
        cout << "Ingrese el id del jugador para el que quiere jugar \n";
        cin >> idJugador;
        controller.verInfoJugador(idJugador);

        // LLama a la función que hacer toda la logica de jugar.
        jugarView(idJugador);

    }catch (std::domain_error ex){
        // Se muestra un error si el usuario no existe
        cout << ex.what();
    }
}

void View:: jugarView(long idJugador) {
    int opcion;
    float cantGonzos;
    int idJuego;
    do{
        try {
            do {
                cout << "Cuantos gonzos desea apostar: \n";
                cin >> cantGonzos;
            } while (cantGonzos <= 0);
            do{
                cout << "Seleccione el juego que quieres jugar: 1. el mayor 13, Dos colores 2, 3. tirar  la moneda \n";
                cin >> idJuego;
            }while(idJuego != 1 && idJuego != 2 && idJuego != 3);
            bool  resultado = controller.jugar(idJuego, idJugador, cantGonzos);
            cout << "Apostaste: " << cantGonzos <<" gonzos \n";
            if(resultado == true){
                cout << "Ganaste\n";
            }else{
                cout << "Perdiste\n";
            }
            cout << "Tu info actualizada es la siguiente \n";
            controller.verInfoJugador(idJugador);
            cout << "Deseas continuar? 1. si, 0. no " << endl;
            cin >> opcion;
            if (!controller.verPuedeContinuar(idJugador)){
                cout << "Tu saldo es 0. Por favor compra mas gonzos para seguir jugando\n";
                opcion = 0;
            }
        } catch (std::domain_error ex){
            cout << ex.what();
        }
    }while (opcion!=0);
}

int View::mostrarMenu()
{
    int opcion;
    cout << "Menu\n";
    cout << "1. Agregar jugador " << std::endl;
    cout << "2. Jugar" << std::endl;
    cout << "3. Consultar jugador  " << std::endl;
    cout << "4. Vender gonzos  " << std::endl;
    cout << "5. ELiminar jugador"  << std::endl;
    cout << "0. Salir\n"
         << std::endl;
    cout << "Digita el numero: ";
    cin >> opcion;
    return opcion;
}

void View::verPrincipal()
{
    int opcion;
    do
    {
        opcion = mostrarMenu();
        switch (opcion)
        {
            case 1: agregarJugador();
                break;
            case 2:
                pedirUsuario();
                break;
            case 3:
                mostrarJugador();
                break;
            case 4:
                recargarGonzos();
                break;
            case 5:
                retirarJugador();
        }
    } while (opcion != 0);
}

void View::mostrarJugador() {
    try{
        long idJugador;
        cout  << "Id del jugador a mostrar\n";
        cin >> idJugador;
        controller.verInfoJugador(idJugador);
    }catch (std::domain_error ex){
        cout << ex.what();
    }

}
void View::recargarGonzos() {
    try{
        long idJugador;
        cout << "Id del jugador para realizar la recarga" << endl;
        cin >> idJugador;
        controller.recargarGonzos(idJugador);
    } catch (std::domain_error ex) {
        cout << ex.what();
    }

}
void View::retirarJugador() {
    try {
        long idJugador;
        int opcion;
        cout  << "Id del jugador a retirar\n";
        cin >> idJugador;
        cout << "Jugador a eliminar" << std::endl;
        controller.verInfoJugador(idJugador);
        controller.retirarJugador(idJugador);
    }catch (std::domain_error ex){
        cout << ex.what();
    }


    }

