/*
Inicio
  Leer n

  Si n < 1 Entonces
    Escribir "Ingrese un entero mayor o igual que 1"
  Si No
     Para i = 1 Hasta n Hacer
        Para j = 1 Hasta i Hacer
            Escribir "*" Sin Saltar

        Fin Para
        Escribir ""
    Fin Para
 Fin Si
Fin
*/

#include <iostream>
using namespace std;

int main() {
    int n;

    cin >> n;
    if (n < 1) {
        cout << "Ingrese un entero mayor o igual que 1" << endl;
    } else {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                cout << "*";
            }
            cout << endl;
        }
    }
    return 0;
}
