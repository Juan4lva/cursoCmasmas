//cadenas
#include<iostream>
#include<cstring>
using namespace std;
int main(){

    char comida_uno[]="papas";
    char comida_dos[]="fritas";

    cout<<strlen(comida_uno)<<endl;
    
    cout<<strcat(comida_uno,comida_dos)<<endl;

    return 0;
}