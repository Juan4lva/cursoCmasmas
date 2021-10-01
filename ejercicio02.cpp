#include<iostream>

using namespace std;

int main(){
	int precio_estandar, precio_final;
	
	cout<<"ingrese el precio estandar del producto: ";
	cin>>precio_estandar;
	
	precio_final = precio_estandar*1.18;
	cout<<"\nel precio con igv incluido es: "<<precio_final;
	
	return 0;
}
