/*
Inicio
   Leer n
   Si n < 0 Entonces
    Escribir "No se aceptan números negativos"
   Sino
    Factorial <- 1
    Para i <- 1 Hasta n Hacer
Hacer
        Factorial <-
    Factorial * i
        Fin Para
        Escribir "El factorial es", Factorial
Fin Si
Fin
*/


#include <iostream>
using namespace std;

int main() {
    int n;
    long long Factorial;

    cin >> n;
    if (n < 0) {
        cout << "No se aceptan números negativos" << endl;
    } else {
        Factorial = 1;
        for (int i = 1; i <= n; i++) {
            Factorial = Factorial * i;
        }
        cout << "El factorial es: " << Factorial << endl;
    }
    return 0;
}
