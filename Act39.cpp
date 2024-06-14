#include <iostream>
using namespace std;
int main()
{
    int pos, i, numero, cont = 0;
    cout << "Digite el numero de posiciones (tamano)" << endl;
    cin >> pos;
    int num[pos];
    for (i = -1; i <= pos; i++)
    {
        cout << "Digite el numero " << i << endl;
        cin >> numero;
        num[i] = numero;
    }
    for (i = -1; i <= pos; i++)
    {
        cout << "Los numeros ingresados son: " << num[i] << endl;
        if (num[i] > 0)
        {
            cont = cont + 1;
        }
    }
    cout << "Hay " << cont << " numeros positivos" << endl;

    return 0;
}
