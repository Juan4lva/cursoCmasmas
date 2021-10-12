//clases de almacenamiento
#include <iostream>
using namespace std;

int numero_global = 9;

//funcion prototipo
void ejemplo ();

int main(){
    //variable local de main
    int numero = 100;
    cout << numero << endl;
    ejemplo();
    return 0;
}

void ejemplo(){
    //variable local de ejemplo
    int numero_dos = 200;
    cout << numero_global;

}