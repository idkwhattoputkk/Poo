//
// Created by Emanuel Umaña on 12/05/21.
//

#ifndef CASINO_FLIPACOIN_H
#define CASINO_FLIPACOIN_H
#include "Juego.h"
#include<cstdlib>
#include<ctime>

class FlipACoin: public Juego {
protected:
    virtual float calcularResultado(float gonzosApostar) override;
public:
    virtual ~FlipACoin();
    virtual float jugar(float gonzosApostar) override;
};


#endif //CASINO_FLIPACOIN_H
