//cadenas
#include<iostream>
#include<cstring>
using namespace std;
int main(){

    char colores[]="rojo";
    char pintura[]="azul";
    char rojo[]="rojo";
    char amarillo[]="amarillo";

    cout << strcmp(colores,pintura)<<endl;
    //si da 1, no son similares
    cout << strcmp(colores,rojo)<<endl;
    //si da 0, son iguales
    cout << strcmp(amarillo,rojo)<<endl;
    //si da -1, el priumero es mayor
    cout << strcmp(rojo,amarillo);
    //si da 1, también segundo es mayor
    return 0;
}