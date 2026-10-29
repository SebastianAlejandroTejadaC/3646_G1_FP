/*
Inicio
   Definir a, b y media como Real
   Escribir "Ingrese el primer número"
   Leer a
   Escribir "Ingrese segundo numero"
   Leer b
   media = (a + b) / 2
   Escribir "La media es.", media
Fin
*/

#include <iostream>
using namespace std;

int main() {
    double a, b, media;
    cout << "Ingrese el primer número: ";
    cin >> a;
    cout << "Ingrese el segundo número: ";
    cin >> b;
    media = (a + b) / 2.0;
    cout << "La media es: " << media << endl;
    return 0;
}

