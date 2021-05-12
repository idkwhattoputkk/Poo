//
// Created by lufe0 on 7/05/2021.
//

#include "Casino.h"

// Constructor que inicializa las ganancias y perdidas en cero
Casino::Casino() {
    cout <<"Inicialice casino";
    jugadoresMap.clear(); // Se limpian los jugadores del casino
}


void Casino::agregarJuego(Juego * juego) {
    juegosDisponibles.push_back(juego);
}



void Casino::agregarJugador(Jugador *pJugador) {
    // Se agrega el jugador al mapa de jugadores del casino
    jugadoresMap[pJugador->getId()] = pJugador;
}

bool Casino::verExisteJugador(long id) {
    bool flag;
    // Si el jugador se encuentra en el mapa retorna true, de lo contrario retorna false
    if(jugadoresMap[id] == nullptr ){
         flag = false;
    }else{
        flag = true;
    }
    return flag;
}

Jugador *Casino::consultarJugador(long id) {
    return jugadoresMap[id]; // Retora el apuntador a jugador.
}

double Casino::convertirPesosAGonzos(double dinero) {
    double gonzos;
    // Cada 10 mil pesos equivalen a 100 Gonzos
    gonzos = (100  * dinero)/(10000);
    return gonzos;
}

vector<Juego *> &Casino::consultarJuegos() {
    return juegosDisponibles;
}

void Casino::retirarJugador(long id) {
    jugadoresMap.erase(id);
}


double Casino::convertirGonzosPesos(float gonzos) {
    double pesos;
    pesos = (10000  * gonzos)/(100);
    return pesos;
}

Casino::~Casino() {

}