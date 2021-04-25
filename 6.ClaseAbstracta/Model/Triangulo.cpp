#include "triangulo.h"

//CONSTRUCTORES TRIANGULO

Triangulo::Triangulo() {}

Triangulo::Triangulo(float base, float altura)
{

    this->base = base;
    this->altura = altura;
}

//METODOS TRIANGULO

void Triangulo::calcularArea()
{
    this->area = (this->base * this->altura) / 2;
}

void Triangulo::calcularPerimetro()
{
    float temp;
    temp = this->base / 2;
    this->perimetro = 2 * ((sqrt((temp * temp)) + (this->altura * this->altura))) + this->base;
}
void Triangulo::mostrarFigura(){
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
float Triangulo::getBase() {
    return this->base;
}

float Triangulo::getAltura() {
    return this->altura;
}

void Triangulo::setBase(float base) {
    this->base = base;
}

void Triangulo::setAltura(float altura) {
    this->altura = altura;
}
