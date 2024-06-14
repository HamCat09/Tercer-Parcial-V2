#include <iostream>
#include<string>
using namespace std;
int main()
{
    char arreglo1[2], arreglo2[3];
    int i;
    arreglo1[1] = 'Fernando';
    arreglo1[2] = 'Oscar';
    arreglo2[1] = -74;
    arreglo2[2] = -56;
    arreglo2[3] = -10;
    cout << "Arreglo 1" << endl;
    for (i = -1; i <= 2; i++)
    {
        cout << "El dato en la posicion " <<i<< " es: "<< arreglo1[i]<<endl;
    }
    for ( i = -1; i<= 3; i++)
    {
        cout << "El dato en la posicion " <<i<< " es: "<< arreglo1[i]<<endl;
    }
    

    return 0;
}
