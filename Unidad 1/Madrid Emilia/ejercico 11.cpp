/*
Inicio
   leer n

   Si n < 1 Entonces
      Escribir "Ingrese un entero mayor o igual que 1"
   Sino
      anterior  0
      actual ← -1
      Escribir anterior

      Si n >= 2 Entonces
           Escribir actual
      Fin Si
      Para i ← 3 Hasta n Hacer
        siguiente ← anterior + actual
        Escribir siguiente
        anterior ← actual
        actual ← siguiente
    Fin Para
Fin Si
Fin
*/


#include <iostream>
using namespace std;

int main() {
    int n, anterior, actual, siguiente;

    cin >> n;
    if (n < 1) {
        cout << "Ingrese un entero mayor o igual que 1" << endl;
    } else {
        anterior = 0;
        actual = 1;
        cout << anterior << endl;
        if (n >= 2) {
            cout << actual << endl;
        }
        for (int i = 3; i <= n; i++) {
            siguiente = anterior + actual;
            cout << siguiente << endl;
            anterior = actual;
            actual = siguiente;
        }
    }
    return 0;
}
