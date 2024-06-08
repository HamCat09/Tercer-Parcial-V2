#include <iostream>
using namespace std;
int main(){
    int hora; 
    cout << "Ingrese la hora: " << endl;
    cin >> hora;
    if ( hora >= 6 && hora <= 11)
    {
        cout << "Buenos días" << endl; 
    }
    else if ( hora >= 12 && hora <= 19)
    {
        cout << "Buenas tardes" << endl;
    }
    else if ( hora >= 20 && hora <= 24 )
    {
        cout << "Buenas noches" << endl;
    }
    return 0;
}
