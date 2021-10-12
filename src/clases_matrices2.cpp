//matrices
#include<iostream>
using namespace std;
int main(){

    int a [2][2][2] = //la primer, identifica a matriz, las cuales empiezan en 1, la 2, fila, la 3 columna, ambas empiezan en 0
        {
            {{1,2},{3,4}},
            {{5,6},{7,8}}
        };

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                cout<<"DATOS DE LA MATRIX a["<< i << "]["<<j<<"]["<<k<<"]:";
                cout<<a[i][j][k]<<endl;
            }
        }
    }
    

    //cout << a[1][0][0];
    return 0;
}