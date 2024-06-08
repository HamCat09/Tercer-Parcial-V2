#include<iostream>
using namespace std;
int main(){
    int ma=0, me=1, sum=0, i=0;
    int mah;
    while (i<10)
    {
        cout << "Ingrese el numero: " << i+1 << endl;
        cin >> mah;
        i++;
        if(mah>ma){
            ma = mah;
        }
        else if(mah<ma){
            me = mah;
        }
        sum+=mah;
    }
    cout << "La suma de los numeros es de: " << sum << endl;
    cout << "El mayor es: " << ma << endl;
    cout << "El menor es: " << me << endl;

    return 0;
}
