//recursividad
#include <iostream>
using namespace std;
//funcion prototipo
int factorial(int);

int main(){
    int n, result;
    cout <<"ingrese un numero: ";
    cin >> n;

    result = factorial(n);
    cout <<"el factorial de: "<< n <<" es "<<result;
    return 0;
}

int factorial(int n){
    if (n > 1){
        return n * factorial(n - 1);
    }
    else{
        return 1;
    }
}