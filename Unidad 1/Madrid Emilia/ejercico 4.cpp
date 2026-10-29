/*
Algoritmo comprobar intervalo
Inicio
    Leer x
    Si x >= 0 Y x <= 10 Entonces
          Escribir "Pertenece al Intervalo"
    Si No
         Escribir "No pertenece al intervalo"
Fin Si
Fin
*/


#include <iostream>
using namespace std;

int main() {
    double x;
    cin >> x;
    if (x >= 0 && x <= 10) {
        cout << "Pertenece al Intervalo" << endl;
    } else {
        cout << "No pertenece al intervalo" << endl;
    }
    return 0;
}
