/*
Inicio
     leer a, b

     Si a <= 0 o b <= 0 Entonces
           Escribir "Ingrese enteros positivos"
     SINO
        Mientras b != 0 Hacer
           resto = a % b

           a = b
           b = resto
        Fin Mientras
        Escribir "El MCD es", a
   FinSi
Fin
*/

#include <iostream>
using namespace std;

int main() {
    int a, b, resto;

    cin >> a >> b;
    if (a <= 0 || b <= 0) {
        cout << "Ingrese enteros positivos" << endl;
    } else {
        while (b != 0) {
            resto = a % b;
            a = b;
            b = resto;
        }
        cout << "El MCD es " << a << endl;
    }

    return 0;
}
