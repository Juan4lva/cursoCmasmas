#include<iostream>

using namespace std;

int main()
{
	float a,b,c,d,e,f, resultado = 0;
	
	cout<<"Diigite el valor de a: "; cin>>a;
	cout<<"Diigite el valor de b: "; cin>>b;
	cout<<"Diigite el valor de c: "; cin>>c;
	cout<<"Diigite el valor de d: "; cin>>d;
	cout<<"Diigite el valor de e: "; cin>>e;
	cout<<"Diigite el valor de f: "; cin>>f;
	
	resultado = (a+b/c)/(d+e/f);
	cout.precision(2);
	cout<<"\nEl resultado es: "<<resultado<<endl;
	
	return 0;
}
