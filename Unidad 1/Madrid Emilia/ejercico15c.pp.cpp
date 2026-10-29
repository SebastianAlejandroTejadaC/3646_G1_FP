/*
Inicio
    leer anio

    Si anio <= 0 Entonces
       Escribir "Ingrese un ano positivo"
    SiNo
      Si (anio % 4 == 0) 0
         ((anio % 100 != 0)) y (anio % 100 = 0) Entonces
          Escribir "El año es bisiesto"
    Si No
        Escribir "El año no es bisiesto"
    Fin Si
Fin Si
Fin
*/


#include <iostream>
using namespace std;

int main() {
    int anio;

    cin >> anio;
    if (anio <= 0) {
        cout << "Ingrese un año positivo" << endl;
    } else {
        if ((anio % 400 == 0) || ((anio % 4 == 0) && (anio % 100 != 0))) {
            cout << "El año es bisiesto" << endl;
        } else {
            cout << "El año no es bisiesto" << endl;
        }
    }
    return 0;
}
