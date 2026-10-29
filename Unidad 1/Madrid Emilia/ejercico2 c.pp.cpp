/*
Inicio
   Definir x, absoluto, resultado como real
   Escribir "Ingrese un número"
   Leer x
   Si x < 0 Entonces
        absoluto = -x
   Si No
        absoluto = x
   Fin Si

   resultado = absoluto * absoluto * absoluto

   Escribir "El resultado es:", resultado
Fin
*/
#include <iostream>
using namespace std;

int main() {
    double x, absoluto, resultado;
    cout << "Ingrese un número: ";
    cin >> x;
    if (x < 0) {
        absoluto = -x;
    } else {
        absoluto = x;
    }
    resultado = absoluto * absoluto * absoluto;
    cout << "El resultado es: " << resultado << endl;
    return 0;
}
