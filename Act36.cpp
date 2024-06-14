#include <iostream>
using namespace std;
int main()
{
    int acum = 0, t, i, num;
    cout << "Digite el tamano del vector (arreglo)" << endl;
    cin >> t;
    int vector[t];
    for (i = 0; i <= t; i++)
    {
        cout << "Digite un numero: " << endl;
        cin >> num;
        vector[i] = num;
        acum = acum + vector[i];
    }
    for (i = 0; i <= t; i++)
    {
        cout << "La suma de: " << vector[i] << endl;
    }
    cout << "Es: " << acum << endl;

    return 0;
}
