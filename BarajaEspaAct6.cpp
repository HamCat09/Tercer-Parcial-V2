#include <iostream>
using namespace std;

int main()
{
    int carta;
    cout<<"Ingresa El Numero De Carta\n";
    cin>>carta;

    switch (carta)
    {
    case 1:cout<<"ES UN AS";break;
    case 10:cout<<"ES UN SOTA";break;
    case 11:cout<<"CABALLO";break;
    case 12:cout<<"REY";break;
    default:
    if (carta>=2 && carta<=9)
    {
      cout<<"NO ES NINGUNA CARTA";    
    }
    else
    {
     cout<<"NO ES NINGUNA CARTA DE LA BARAJA ESPANOLA";
    }
    break;
    return 0;
 
    }
}
