#include <iostream>
using namespace std;

void CalcularProm(int calif1, int calif2, int calif3)
{
    int suma;
    calif1 = calif1 *2;
    calif2 = calif2 *2;
    calif3 = calif3 *6;
    suma = (calif1 + calif2 + calif3)/10; 
    cout<<"TU PROMEDIO ES DE: "<< suma <<endl;
}

void CompararProm(int calif1, int calif2, int calif3)
{
    float mayor;
    calif1 = calif1 *2;
    calif2 = calif2 *2;
    calif3 = calif3 *6;
    mayor=calif1;
    if (mayor < calif2)
    {
        mayor = calif2;
    }
    if (mayor < calif3)
    {
        mayor = calif3;
    }
    cout<<"TU NOTA MAS ALTA ES: "<< mayor<<endl;
    
    
}

int main()
{
    int calif1,calif2,calif3;

    cout<<"INGRESA TU CALIFICACION DEL 1 PARCIAL: ";
    cin>>calif1;
    cout<<"INGRESA LA CALIFICACION DEL 2 PARCIAL: ";
    cin>>calif2;
    cout<<"INGRESA TU CALIFICACION DEL 3 PARCIAL: ";
    cin>>calif3;

    CalcularProm(calif1, calif2, calif3);
    CompararProm(calif1, calif2, calif3);
    return 0;
}





