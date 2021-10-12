#include <iostream>
using namespace std;

void tipos_numeros(int n1, float n2){
    cout << "tipo entero: " << n1 << endl;
    cout << "tipo decimal: " << n2 << endl;
}

int main(){
    
    int num1 = 5;
    float num2 = 10.6;
    float x = 12.56;


    tipos_numeros(num1, x);
    return 0;
}