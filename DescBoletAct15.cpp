#include<iostream>
#define bol 70
using namespace std;
int main(){
    float b1,b2; 
    int ed;
    cout << "Ingrese su edad: " << endl;
    cin >> ed;
    b2 = bol-(bol*0.55);
    b1 = bol-(bol*0.6);
    if(ed<5){
        cout << "El precio del boleto es de: $" << b1 << endl;
    }
    else if(ed>60){
        cout << "El precio del boleto es de: $" << b2 << endl;
    }
    else{
        cout << "El precio del boleto es de: $70" << endl;
    }

    return 0;
}
