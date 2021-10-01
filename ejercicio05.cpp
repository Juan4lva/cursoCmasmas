#include<iostream>

using namespace std; 

int main()
{
	float a, b, c, d, resultado = 0;
	cout<<"ingrese a: ";cin>>a;
	cout<<"ingrese b: ";cin>>b;
	cout<<"ingrese c: ";cin>>c;
	cout<<"ingrese d: ";cin>>d;
	
	resultado = (a+b)/(c+d);
	
	cout.precision(2);
	cout<<"\nEl resultado es: "<<resultado<<endl;
	
	return 0;
}
