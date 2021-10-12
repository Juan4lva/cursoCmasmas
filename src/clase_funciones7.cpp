//funciones
#include <iostream>
using namespace std;

//funcion prototipo

int mul(int, int);
float mul(float, int);

int mul(int a, int b){
    return a * b;
}

float mul(double x, int y){
    return x * y;
}

int main(){
    
    int f1 = mul(3, 3);
    float f2 = mul(3.5,9);

    cout<<"f1 es: "<< f1 <<endl;
    cout<<"f2 es: "<< f2;

    return 0;
}