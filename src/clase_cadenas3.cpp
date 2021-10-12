//cadenas
#include<iostream>
#include<cstring>
using namespace std;
int main(){

    char real_madrid [] = "cristiano ronaldo";
    char juventus[20];

    strcpy(juventus,real_madrid);

    cout << real_madrid;
    cout << juventus;

    return 0;
}