//funciones
#include <iostream>
using namespace std;

//funcion prototipo
int suma(int, int);


int main(){
    int s;
    s = suma(70, 60);
    cout <<"la suma es: "<< s;

    return 0;
}

//definir funcion

int suma(int a, int b){
    return (a + b);
}