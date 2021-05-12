//
// Created by Emanuel Umaña on 12/05/21.
//

#include "FlipACoin.h"


float FlipACoin::calcularResultado(float gonzosApostar) {
    float resultado;
    if(numeroJugador  == numeroCasino){
        resultado = gonzosApostar * 1.6;
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
    numeroCasino = 1+rand()%2;
    cout << "Escoge que lado caera la moneda: 0. cara, 1 sello. " << endl;
    cin >> numeroJugador;
    resultado = calcularResultado(gonzosApostar);
    cout << "La moneda cayo en: " << numeroCasino <<endl ;
    cout << "Tu numero: " << numeroCasino <<endl ;
    return resultado;
}
