#include <iostream>
#include <string.h>
using namespace std;
int main() {
  char nombre[20];
  char grupoLista[20];
  int intentos = 0;
  do {
    cout<<"Usuario: ";
    cin>>nombre;
    cout<<"contrasena: ";
    cin>>grupoLista;
    if (strcmp(nombre, "hellen") == 0 && strcmp(grupoLista, "2b15") == 0) {
      cout<<"Bienvenido al sistema";
      break;
    } else {
      intentos++;
      cout<<"intentos restantes: "<< 3 - intentos<<endl;
    }
  } while (intentos < 3);
  if (intentos == 3) {
    cout<<"**INTENTOS AGOTADOS**";
}
