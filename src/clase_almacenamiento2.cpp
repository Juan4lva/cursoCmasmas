//clases de almacenamiento
#include <iostream>
using namespace std;

int numero_global = 9;

//funcion prototipo
void ejemplo ();

int main(){
    ejemplo();
    ejemplo();
    return 0;
}

void ejemplo(){
    static int numero = 700;
    numero++;
    cout << numero << endl;
}
