/*
Inicio
    Leer n

    Sino
    Original = n
    Invertido =

    Mientras n > 0 Hacer
        digito = n % 10
        Invertido = Invertido * 10 + digito
        n = n / 10
    Fin Mientras

    Si Original = Invertido Entonces
        Escribir "El numero es capicua"
    Sino
        Escribir "El número no es capicua"
    Fin Si
  Fin Si
Fin
*/


#include <iostream>
using namespace std;

int main() {
    int n, Original, Invertido, digito;

    cin >> n;
    if (n <= 0) {
        cout << "Ingrese un entero positivo" << endl;
    } else {
        Original = n;
        Invertido = 0;
        while (n > 0) {
            digito = n % 10;
            Invertido = Invertido * 10 + digito;
            n = n / 10;
        }
        if (Original == Invertido) {
            cout << "El numero es capicua" << endl;
        } else {
            cout << "El número no es capicua" << endl;
        }
    }
    return 0;
}


