//#ifndef CUADRADO_H
// Guardas
//#define CUADRADO_H

//CLASE Cuadrado
#include <iostream>
#include <cstdlib>

#include "FiguraGeometrica.h"

using std::cin;
using std::cout;
using std::endl;

class Cuadrado : public FiguraGeometrica
{
private:
    float base, altura;

public:
    Cuadrado(); //no olvidar
    Cuadrado(float, float);
    virtual void calcularArea();
    virtual void calcularPerimetro();
    virtual void mostrarFigura();
    float getBase();
    float getAltura();
    void setBase(float);
    void setAltura(float);
};

//#endif /* !CUADRADO_H */