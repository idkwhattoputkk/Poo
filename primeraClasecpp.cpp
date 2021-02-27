#include <iostream>
#include <cmath>
#include <exception>
// Clase circulo
using namespace std;
class Circulo{

    //atributos
    private:
    float radio, pi;
    
    //metodos
    public:
    Circulo(float);
    void calcularArea(); // PI * R^2
    void calcularPerimetro(); //circunferencia
    float getRadio(){
        return radio;
    }

};
// Clase Rectangulos
class Rectangulo{
    
    //Atributos
    private: 
    float largo, ancho; 
    //metodos 
    public: 
    Rectangulo(float,float);
    void calcularPerimetro();
    void calcularArea();
};
// excepcion propia 
class myexception: public exception{
  virtual const char* what() const throw()
  {
    return "My exception happened";
  }
} myex;

class Triangulo{
    //atributos
    private:
    float base, altura;

    //metodos
    Triangulo(float,float);
    void calcularArea();
    void calcularPerimetro();
};
Rectangulo::Rectangulo(float largo, float ancho){
    this->largo = largo;
    this->ancho = ancho;

}
void Rectangulo::calcularPerimetro(){
    float perimetro;
    perimetro = largo + ancho + largo + ancho;
    cout << "el perimetro es: " << perimetro << endl;  
}
void Rectangulo::calcularArea(){
    float area;
    area = largo * ancho;
    cout << "el area es: " << area << endl;   

}
Circulo::Circulo(float radio){
    this->radio = radio;
    pi = 3.141592653589793238463;
}
void Circulo::calcularArea(){
    float area;
    area = (powf(radio, 2)) * pi;
    cout << "el area es: " << area << endl; 
}
void Circulo::calcularPerimetro(){
    float circunferencia;
    circunferencia = 2 * pi * radio;
    cout << "la circunferencia es: " << circunferencia << endl;
}
Triangulo::Triangulo(float base, float altura){
    this->base = base;
    this->altura = altura;
}
void Triangulo::calcularArea(){
    float area;
    area = (base*altura)/2;
    cout << "el area es: " << area << endl; 
}
void Triangulo::calcularPerimetro(){
    float perimetro;
    //perimetro = ; TODO
}
int main() {
    int option;
    switch (option)
    {
    case /* constant-expression */:
        /* code */
        break;
    
    default:
        break;
    }
}