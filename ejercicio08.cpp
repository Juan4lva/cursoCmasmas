#include<iostream>
using namespace std;
int main(){
	float practica, teorica, participacion, nota_final=0;
	
	cout<<"ingrese la nota de practica: ";cin>>practica;
	cout<<"ingrese la nota de teorica: ";cin>>teorica;
	cout<<"ingrese la nota de participacion: ";cin>>participacion;
	
	practica *= 0.3; //practica = practica * 0.3;
	teorica *= 0.6;
	participacion *=0.1;
	
	nota_final = practica+teorica+participacion;
	
	cout<<"\nLa nota final es: "<<nota_final<<endl;
	return 0;
}
