#include <iostream>
#include <math.h>
using namespace std;

int main()
{
 int m;

  cout<<"CALCULAR AREA DE FIGURAS";
  cout<<"1) Triángulo";
  cout<<"2) Trapecio";
  cout<<"3) Rectángulo";
  cout<<"4) Ninguna";

  cout<<"opción: ";
  cin>>m;

  switch (m) {
    case 1: {
      float area, base, altura;

      cout<<"base del triángulo: ";
      cin>>base;
      cout<<"altura del triángulo: ";
      cin>>altura;

      area = base * altura / 2;
      cout<<"área del triángulo es:"<<area<<endl;
      break;
    }

    case 2: {
      float baseMa, baseMe, altura, area;

      cout<<"base mayor del trapecio: ";
      cin>>baseMa;
      cout<<"base menor del trapecio: ";
      cin>>baseMe;
      cout<<"altura del trapecio: ";
      cin>>altura;

      area = (baseMa + baseMe) * altura / 2;
      cout<<"El área del trapecio es:"<< area<<endl;
      break;
    }

    case 3: {
      float base, altura, area;

      cout<<"base del rectángulo: ";
      cin>>base;
      cout<<"altura del rectángulo: ";
      cin>>altura;

      area = base * altura;
      cout<<"El área del rectángulo es:"<< area<<endl;
      break;
    }

  return 0;
}
