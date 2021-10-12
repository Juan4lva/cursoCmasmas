//matrices
#include<iostream>
using namespace std;
int main(){  

    int a [3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    cout<<a[2][1]<<endl;//elemento 8, 2 representa la fila, 1 la columna, no olvidar que la numeración empieza en 0

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<"DATOS DE LA MATRIX a["<< i << "]["<<j<<"]: ";
            cout<<a[i][j]<<endl;
        }
    }
    return 0;
}