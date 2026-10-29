/*
Inicio
   Leer n

   Si n <= 0 Entonces
      Escribir "Ingrese un entero positivo"
   Sino
      suma = 0

      Para d = 1 Hasta n-1 Hacer
        Si n % d == 0 Entonces
            suma = suma + d
        Fin Si
    Fin Para

    Si suma == n Entonces
        Escribir "Es un numero perfecto"
    Fin Si
Fin Si
Fin
*/

#include <iostream>
using namespace std;

int main() {
    int n, suma;

    cin >> n;
    if (n <= 0) {
        cout << "Ingrese un entero positivo" << endl;
    } else {
        suma = 0;
        for (int d = 1; d <= n - 1; d++) {
            if (n % d == 0) {
                suma = suma + d;
            }
        }
        if (suma == n) {
            cout << "Es un numero perfecto" << endl;
        } else {
            cout << "No es un número perfecto" << endl;
        }
    }
    return 0;
}
