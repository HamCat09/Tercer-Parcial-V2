#include <iostream>
using namespace std;
int main()
{
    char x;
    cout<< "Introduzca una letra una letra: ";
    cin>>x;
    switch (x)
    {
    case 'a':
        cout << "Es una vocal";
        break;
    case 'e':
        cout << "Es una vocal";
        break;
    case 'i':
        cout << "Es una vocal";
        break;
    case 'o':
        cout << "Es una vocal";
        break;
    case 'u':
        cout << "Es una vocal";
        break;
    default:
        cout << "Es una consonante";
        break;
    }

    return 0;
}


