#include <iostream>
using namespace std;

int main(){
    int x, valor;
    cout << "Digite el precio del producto ";
    cin >> x;
    valor = x + ( x * 0.19 );
    cout << "el valor del producto con iva es: " << valor; 
    return 0;
}