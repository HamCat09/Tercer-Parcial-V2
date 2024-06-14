#include <iostream>
using namespace std;
int main()
{
    int fil, col, i, j, numero;
    cout << "Digite el numero de files: " << endl;
    cin >> fil;
    cout << "Digite el numero de columnas: " << endl;
    cin >> col;
    int matriz[fil][col];
    for (i = 1; i <= fil; i++)
    {
        for (j = 1; j <= col; j++)
        {
            cout << "Digite dato para la fila " << i << "columna " << j;
            cin >> numero;
            matriz[i][j] = numero;
        }
    }
    for (i = 1; i <= fil; i++)
    {
        for (j = 1; j <= col; j++)
        {
            cout << "Los datos que hay en la matriz son: " << matriz[i][j] << endl;
        }
    }

    return 0;
}
