/*
Inicio
   Definir x, y, resto como Entero
   Escribir "Ingrese el dividendo"
   Leer X
   Escribir "Ingrese el divisor"
   Leer Y
   Si y == 0 Entonces
         Escribir "Error: el divisor no puede ser cero"
   Si No
     resto = x % y

     Si resto == 0 Entonces

        Escribir "El primer número es divisible por el segundo"

    Si No
        Escribir "El primer número no es divisible por el segundo"

    Fin Si
Fin Si
Fin
*/
#include <iostream>
using namespace std;

int main() {
    int x, y, resto;
    cout << "Ingrese el dividendo" << endl;
    cin >> x;
    cout << "Ingrese el divisor" << endl;
    cin >> y;
    if (y == 0) {
        cout << "Error: el divisor no puede ser cero" << endl;
    } else {
        resto = x % y;
        if (resto == 0) {
            cout << "El primer número es divisible por el segundo" << endl;
        } else {
            cout << "El primer número no es divisible por el segundo" << endl;
        }
    }
    return 0;
}

