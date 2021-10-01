#include<iostream>
using namespace std;
int main(){
	float n1, n2, n3, n4, nota_media;
	cout<<"ingrese la primera nota: ";cin>>n1;
	cout<<"ingrese la segunda nota: ";cin>>n2;
	cout<<"ingrese la tercera nota: ";cin>>n3;
	cout<<"ingrese la cuarta nota: ";cin>>n4;
	
	nota_media = (n1+n2+n3+n4)/4;
	
	cout<<"\nLa nota media de los alumnos es: "<<nota_media<<endl;
	
	return 0;
}
