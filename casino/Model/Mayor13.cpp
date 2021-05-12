//
// Created by lufe0 on 7/05/2021.
//

#include "Mayor13.h"

float Mayor13::jugar(float gonzosApostar) {
    int opcion;
    float gonzosResulado;
    srand(time(NULL));
    // para calcular numero aleatorio variable = limite_inferior + rand() % (limite_superior +1 - limite_inferior) ;
    numeroJugador = 1+rand()%14;// numeros de 1 a 13
    numeroCasino = 1+rand()%14;// numeros de 1 a 13

    cout << "Tu numero aleatorio es: "<< numeroJugador <<"\n";
    cout << "Deseas continuar? 1.si, 2. no";
    cin >> opcion;
    if(opcion == 1){
        gonzosResulado  = gonzosApostar  * 0.5;
    }else{
        gonzosResulado = calcularResultado(gonzosApostar);
    }
    return gonzosResulado;
}


float Mayor13::calcularResultado(float gonzosApostar) {
    float resultado;
    if(numeroJugador <= numeroCasino){
        resultado = 0;
    }else{
        resultado = gonzosApostar * 2;
    }
    return resultado;
}

Mayor13::~Mayor13() {

}
