#include <iostream>
#include <cmath>
// Clase circulo
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
class myexception: public exception
{
  virtual const char* what() const throw()
  {
    return "No hay mas espacio en los arreglos";
  }
} myex;
Rectangulo::Rectangulo(float largo, float ancho){
    this->largo = largo;
    this->ancho = ancho;

}
void Rectangulo::calcularPerimetro(){
    float perimetro;
    perimetro = largo + ancho + largo + ancho;
    std::cout << "el perimetro es: " << perimetro << std::endl;  
}
void Rectangulo::calcularArea(){
    float area;
    area = largo * ancho;
    std::cout << "el area es: " << area << std::endl;   

}
Circulo::Circulo(float radio){
    this->radio = radio;
    pi = 3.141592653589793238463;
}
void Circulo::calcularArea(){
    float area;
    area = (powf(radio, 2)) * pi;
    std::cout << "el area es: " << area << std::endl; 
}
void Circulo::calcularPerimetro(){
    float circunferencia;
    circunferencia = 2 * pi * radio;
    std::cout << "la circunferencia es: " << circunferencia << std::endl;
}
int main() {

}