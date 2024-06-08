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
    float unidad, cantidad, import = 0;

  while (1) {
    cout<<"Introduzca el precio: ";
    cin>>unidad;

    if (unidad <= 0) {
      cout<<"el precio debe ser número positivo";
      continue;
    }

    cout<<"cantidad vendida: ";
    cin>>cantidad;

    if (cantidad <= 0) {
      cout<<"la cantidad vendida debe ser un número positivo";
      continue;
    }

    import += unidad * cantidad;

    cout<<"ToltalVenta: "<<import<<endl;

    if (unidad == 0) 
    {
      break;
    }
  }
  
  cout<<"Importe total de la factura: "<<import<<endl;

  return 0;
}
