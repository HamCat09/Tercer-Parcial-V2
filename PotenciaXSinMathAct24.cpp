#include<iostream>
using namespace std;
int main(){
    int num , expo , r=1 , i;
    cout << "Ingrese un numero: " << endl;
    cin >> num;
    cout << "Ingrese el exponente: " << endl;
    cin >> expo;
    for ( i = 0 ; i < expo; i++)
    {
        r *= num;
    }
    cout << "EL resultado de la potencia es de: " << r << endl;

    return 0;
}
