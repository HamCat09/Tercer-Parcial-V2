#include <iostream>
#include <string>
using namespace std;
int main()
{
    int acum = 0;
    int fil, col, i, j, numero;
    cout << "Digite el numero de filas: " << endl;
    cin >> col;
    string matriz[fil][col];
    for (i = 0; i <= fil; i++)
    {
        for (j = 1; j <= fil; j++)
        {
            cout << "Digite dato para la fila " << i << "columna " << j << endl;
            cin >> numero;
            matriz[i][j] = numero;
        }
        acum = numero;
    }
    for (i = 1; i <= fil; i++)
    {
        for (j = 1; j <= col; j++)
        {
            cout << matriz[i, j];
        }
    }
    cout << "Todos los elementos de la columna 1, suman un total de: " << acum;

    return 0;
}
