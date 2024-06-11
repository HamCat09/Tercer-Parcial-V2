#include <iostream>
using namespace std;

int main(){
    int usuario;
    cout<<"Ingresa tu tipo de usuario: "<<endl;
    cout<<"Anonimo:1, Registrado:2, Administrador:3 "<<endl;
    cin>>usuario;
    if (usuario==1)
    {
        cout << "1. Identificarse (loging)"<<endl;
        cout << "2. Ver todos los productos a la venta"<<endl;
        cout << "3.Salir de la aplicacion"<<endl;
    }
    if (usuario == 2)
    {
        cout<<"1.modificar mis datos personales"<<endl;
        cout<<"2.Mostrar mis vendedores recomenndados"<<endl;
        cout<<"3. Recomendar un vendedor"<<endl;
        cout<<"4.Ver todos los productos a la venta"<<endl;
    
    if(usuario==3)
    {
        cout<<"1.Dar de alta un n nuevo usuario"<<endl;
        cout<<"2.Modificar los datos de un usario"<<endl;
        cout<<"3.Mostrar todos los usuarioos"<<endl;
        cout<<"4.Mostrar todos los vendedores recomendados por un usuario"<<endl;
        cout<<"5.Ver los productos ofrecidos por un vendedor"<<endl;
        cout<<"6.Mopstrar todos los productos a la venta"<<endl;
        cout<<"7.Desconectarse colver a anonimo"<<endl;
        cout<<"0.Slir de la aplicacion"<<endl;
    }
    return 0;
}
