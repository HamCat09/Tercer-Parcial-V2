#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char name[20];
    char list[20];
    int intent=0;

    do
    {
        cout<<" ingresa tu nombre: ";
        cin>>name;
        cout<<"ingresa tu contrasena: ";
        cin>>list;
        if(strcmp(name, "hellen") == 0 && strcmp(list, "2b15") == 0)
        {
            cout<<"BIENVENIDO AL SISTEMA :D";
        }
        else
        {
            cout<<"INFORMACION INCORRECTA INTENTOS RESTANTES"<<3-intent<<endl;
            intent++;
        }
    } while(intent < 3);
    if(intent == 3)
    {
        cout<<"**INTENTOS SUPERADOS**";
    }

    float artc,cant,total=0;

    do
    {
        cout<<"precio de los articulos: ";
        cin>>artc;
        if(cant <= 0)
        {
            cout<<"**LA CANTIDAD DEBE SER UN NUMERO POSITIVO**";
        }
            total+= artc * cant;
    } while(cant != 0);
        cout<<"importe total de compra es: "<<total<<endl;

        return 0;   
}

