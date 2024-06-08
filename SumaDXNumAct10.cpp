#include <iostream>
using namespace std;
int main()
{
    int num = 1, cont = 0, acum = 0;
do
{
    cout<<"ingrese un numero: ";
    cin>> num;  
    if (num != 0)
    {
        cont++;
        acum += num;
        cout<<"haz introducido el numero: "<< num <<endl;
    }
     
} while (num != 0);
    cout<< "cantidad de numeros ingresados: "<< cont <<endl;
    cout<<"la suma de los numeros es de: "<< acum <<endl;
    return 0;
}
