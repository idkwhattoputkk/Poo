#include "Cuadrado.h"

// Constructores Cuadrado

Cuadrado::Cuadrado(){}

Cuadrado::Cuadrado(float base, float altura){
    this->base = base;
    this->altura = altura;
}
// Metodos cuadrado
void Cuadrado::calcularArea()
{
    this->area = this->base * this->altura;
}
void Cuadrado::calcularPerimetro()
{
    this->perimetro = (2 * this->base) + (2 * this->altura);
}
void Cuadrado::mostrarFigura(){
    cout << "El base: " << this->base << " -- "
         << "la altura: " << this->altura << endl;
    if (this->area == 0) // si no he calculado el area
    {
        this->calcularArea();
    }
    if (this->perimetro == 0)
    {
        this->calcularPerimetro();
    }
    cout << "El area del rectangulo es: " << this->area << endl;
    cout << "El perimetro del rectangulo es : " << this->perimetro << endl;

    // LLamo al mostrarFigura delegado
    FiguraGeometrica::mostrarFigura();
}

float Cuadrado::getBase() {
    return this->base;
}

float Cuadrado::getAltura() {
    return this->altura;
}

void Cuadrado::setBase(float base) {
    this->base = base;
}

void Cuadrado::setAltura(float altura) {
    this->altura = altura;
}
