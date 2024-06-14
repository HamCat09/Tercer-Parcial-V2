#include <iostream>
using namespace std;
int main()
{
    int num[5];
    int i, numero;
    for (i = 0; i <= 5-1; i++)
    {
        cout << "Digite un numero para la posocion: \n";
        cin >> numero;
        num[i] = numero;
    }
    for (i = 0; i <= 5-1; i++)
    {
        cout << "El dato  en la posicion " << i << " es: " << num[i] << endl;
    }
    return 0;
}
