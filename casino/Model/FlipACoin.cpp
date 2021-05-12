//
// Created by Emanuel Umaña on 12/05/21.
//

#include "FlipACoin.h"


float FlipACoin::calcularResultado(float gonzosApostar) {
    float resultado;
    if(numeroJugador  == numeroCasino){
        resultado = gonzosApostar * 1.6
    }else{
        resultado = 0;
    }
    return resultado;
}

FlipACoin::~FlipACoin() {

}

float FlipACoin::jugar(float gonzosApostar) {
    srand(time(NULL));
    float resultado;
    numeroCasino = 1+rand()%14;
    cout << "Escoge que lado caera la moneda: 1. cara, 2 sello. " << endl;
    cin >> numeroJugador;
    resultado = calcularResultado(gonzosApostar);
    return resultado;
}
