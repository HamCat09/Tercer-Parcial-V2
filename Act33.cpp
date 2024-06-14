#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Digite el numero de posiciones: ";
    cin >> n;

    string personas[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Digite un nombre para la posicion: " << i <<endl;
        cin >> personas[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << "El dato de la posiccion " << i << " es " << personas[i] << endl;
    }
    
    return 0;
}

