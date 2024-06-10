#include <iostream>
using namespace std;
void NumerosPrim(int num1)
{
    if (num1%2 == 0)
    {
        cout<<"EL NUMERO "<< num1 << " ES PRIMO"<<endl;
    }
    else
    {
        cout<<"EL NUMERO"<< num1 << " NO ES PRIMO"<<endl;
    }
    
    
}

int main()
{
    int num1;
    float prim1, prim2;
    cout<<"INGRESA UN NUMERO NATURAL: ";
    cin>>num1;

    cout<<"INGRESA EL PRIMER NUMERO DECIMAL: ";
    cin>>prim1;
    cout<<"INGRESA EL SEGUNDO NUMERO DECIMAL: ";
    cin>>prim2;
    NumerosPrim(num1);
    return 0;
}

