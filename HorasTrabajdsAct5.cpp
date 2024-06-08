#include <iostream>
using namespace std;

int main()
{
    float pago,pag;
    int horas,salario;
    cout<<"¿Cuantas Horas Laboraste?\n";
    cin>>horas;
    cout<<"Ingresa Tu Salario Minimo\n";
    cin>>salario;
    if (horas>40)
    {
        pag =horas*salario*0.5*2;
        cout<<"Tu Salario Es De:$ "<< pag <<endl;
    }
    else
    {
        pago = horas*salario;
        cout<<"Tu Salario Es De:$ "<< pago <<endl;
    }
    
    return 0;
}
