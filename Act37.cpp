#include <iostream>
using namespace std;

int main()
{
    int acum = 0, acum2 = 0, t, i, num;

    cout << "Digite el tamanoo del vector 1: ";
    cin >> t;
    int vector[t];
    for (i = 0; i < t; i++) 
    {
        cout << "Digite un numero: ";
        cin >> num;
        vector[i] = num;
        acum += vector[i]; 
    }

    cout << "Digite el tamano del vector 2: ";
    cin >> t;
    int vector2[t];
    for (i = 0; i < t; i++) 
    {
        cout << "Digite un numero: ";
        cin >> num;
        vector2[i] = num;
        acum2 += vector2[i]; 
    }

    int vector3[2];
    vector3[1] = acum2 + acum;
    cout << "Resultado total: " << vector3[1] << endl; 

    return 0;
}
