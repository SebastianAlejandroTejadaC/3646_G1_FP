/*
Inicio
   leer n

   Si n <= 0 Entonces
    Escribir "Ingrese un entero positivo"
   Si No
       binario = ""
       Mientras n > 0 Hacer
        resto = n % 2
        binario = Convertir Al Texto (resto) + binario
        n = n / 2
    Fin Mientras

    Escribir "El numero binario es: ", binario
   Finsi
Fin
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, resto;
    string binario;

    cin >> n;
    if (n <= 0) {
        cout << "Ingrese un entero positivo" << endl;
    } else {
        binario = "";
        while (n > 0) {
            resto = n % 2;
            binario = to_string(resto) + binario;
            n = n / 2;
        }
        cout << "El numero binario es: " << binario << endl;
    }
    return 0;
}
