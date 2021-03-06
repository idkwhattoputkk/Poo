//
// Created by lufe0 on 7/05/2021.
//

#include "Controller.h"
#include "../Model/Mayor13.h"
#include "../Model/DosColores.h"
#include "../Model/FlipACoin.h"

Controller::Controller() {
  this->casino = Casino();
  // Se agregan los juegos disponibles para el casino
  Mayor13 * juego1 = new Mayor13();
  DosColores * juego2 = new DosColores();
  FlipACoin * juego3 = new FlipACoin();
  casino.agregarJuego(juego1);
  casino.agregarJuego(juego2);
  casino.agregarJuego(juego3);

}
void Controller::agregarJugador(long id, string nombreJugador, double dinero)
{
    // Se agrega jugador solo si no existe con anticipacion
    if (casino.verExisteJugador(id) == false){
        // Se convierte el dinero a Gonzos
        float cantGonzos = casino.convertirPesosAGonzos(dinero);
        Jugador * pJugador = new Jugador (id, nombreJugador, cantGonzos);
        casino.agregarJugador(pJugador);

    }else {
        throw std::domain_error("El jugador con la identificacion recibida ya existe\n");
    }
}

bool Controller::jugar(int idJuego, long idJugador, float gonzosApostar) {
    if (casino.verExisteJugador(idJugador) == false){
        throw std::domain_error("El jugador con la identificacion recibida NO existe, no es posible jugar\n");
    }
    if (idJuego > casino.consultarJuegos().size()){
        throw std::domain_error("NO existe el juego que desea jugar\n");
    }
    if (verPuedeContinuar(idJugador)== false){
        throw std::domain_error("No tienes saldo suficiente para jugar\n");
    }
    // Si no hay errores se inicia el juego
    int posJuego = idJuego -1; // Se corrige la posicion para acceder al juego
    Juego * pJuegoAJugar = casino.consultarJuegos().at(idJuego-1);

    // Consutlta al jugador, consulta los gonzos iniciales, juega y obtiene el resultado
    Jugador *pJugador = casino.consultarJugador(idJugador);
    pJugador->actualizarGonzos(-gonzosApostar);
    float resultado =  pJuegoAJugar->jugar(gonzosApostar);
    // Actualiza el saldo del jugador con el resultado
    pJugador->actualizarGonzos(resultado);

    // Actualiza la cantidad de juegos jugados
    pJugador->aumentarJuegos();

    // Retorna verdadero si el jugador ganó y false si el jugador perdio
    bool flag;
    flag = resultado == 0 ? false : true;
    return flag;
}

void Controller::verInfoJugador(long idJugador){
    // En teoría esta excepción no debería salir nunca pero se pone como táctica de programación segura.
    if (casino.verExisteJugador(idJugador) == false){
        throw std::domain_error("El jugador con la identificacion recibida NO existe\n");
    }
    Jugador * pJugador = casino.consultarJugador(idJugador);
    pJugador->mostrarInfo();
}

bool Controller::verPuedeContinuar(int idJugador) {
    // En teoría esta excepción no debería salir nunca pero se pone como táctica de programación segura.
    if (casino.verExisteJugador(idJugador) == false) {
        throw std::domain_error("El jugador con la identificacion recibida NO existe");
    }
    Jugador *pJugador = casino.consultarJugador(idJugador);
    if (pJugador->getCantGonzos() == 0) {
        return false;
    }
    return true;
}

void Controller::retirarJugador(long idJugador) {
    casino.retirarJugador(idJugador);
}

void Controller::recargarGonzos(long idJugador, double dinero) {
    srand(time(NULL));
    double gonzos;
    int suerteNumber = 1+rand()%11;
    verInfoJugador(idJugador);
    Jugador * aRecargar = casino.consultarJugador(idJugador);
    if (dinero <= 0){
        throw std::domain_error("Cantidad de dinero irreal\n");
    }
    gonzos = casino.convertirPesosAGonzos(dinero, suerteNumber);
    aRecargar->actualizarGonzos(gonzos);
    }


}

