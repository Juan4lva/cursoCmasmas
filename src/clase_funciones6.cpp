//funciones
#include <iostream>
using namespace std;

//funcion prototipo

    void fun(int);
    void fun(float);
    
    void fun(int a){
        cout << "el valor de la primera funcion es: "<< a <<endl;

    }

    void fun(float x){
        cout <<"el valor de la segunda funcion es: "<< x << endl;
    }

int main(){

    fun(56);
    fun(34.6);
        
    return 0;
}