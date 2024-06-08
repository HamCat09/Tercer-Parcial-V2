#include <iostream>
using namespace std;
int main()
{
    int x,min,i;
    for (i = 0; i < 5; i++)
    {
        cout<<"Ingresa los numeros: ";
        cin>>x;
        if (x < min)
        {
            min = x;
        }
        
    }
    cout<<"El numero menor es: "<< min <<endl;
   //comentario de prueba
    //linea del 29-abril-24
    return 0;
}
