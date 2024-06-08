#include <iostream>
using namespace std;

int main()
{
    int num, i;
    cout<<"¿Cuantos Numeros Vas A Ingresar?: ";
    cin>>num;
    for ( i = 0; i <= num; i++)
    {
        cout<<i*5<<endl;
    }

    return 0;
}

