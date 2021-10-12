#include <iostream> //contiene prototipo de funciones para las funciones de entrada y salida estandar en c++
#include <cmath>
using namespace std;
int main(){
    double numero, raiz_cuadrada;
    cout <<"ingrese un numero: ";
    cin >> numero;

    raiz_cuadrada = sqrt(numero);
    cout <<"la raiz cuadrada de: "<< numero <<" es: " << raiz_cuadrada;
    return 0;
}