#include<iostream>
using namespace std;
int main()
{
	int x,y,aux;w
	
	cout<<"Digite el valor de x: "; cin>>x;
	cout<<"Digite el valor de y: "; cin>>y;
	
	aux = x;
	x = y;
	y = aux;
	
	cout<<"\nel nuevo valor de x: "<<x<<endl;
	cout<<"el nuevo valor de y: "<<y<<endl;
}
