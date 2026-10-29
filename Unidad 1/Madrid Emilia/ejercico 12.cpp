/*
Inicio
   leer n
   Si n <= 0 Entonces
      Escribir "Ingrese un entero positivo"
   Sino
      suma = 0
      Mientras n > 0 Hacer
        digito = n % 10
        suma = suma + digito
        n = n / 10
    Fin mientras
    Escribir "La suma de los digitos es", suma
Fin si
Fin
*/


#include <iostream>
using namespace std;

int main() {
    int n, suma, digito;

    cin >> n;
    if (n <= 0) {
        cout << "Ingrese un entero positivo" << endl;
    } else {
        suma = 0;
        while (n > 0) {
            digito = n % 10;
            suma = suma + digito;
            n = n / 10;
        }
        cout << "La suma de los digitos es " << suma << endl;
    }
    return 0;
}
