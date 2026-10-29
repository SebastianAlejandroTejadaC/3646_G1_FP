/*
Inicio
    cantidad = 0
    haySegundo = falso

    Leer num

    Mientras num != 0 Hacer
       Si num > 0 Entonces
           cantidad = cantidad + 1

           Si cantidad == 1 Entonces
                mayor = num
           Si No
              Si num > mayor Entonces
                 segundo = mayor
                 mayor = num
                 hay segundo = verdadero
            Si No
                Si num < mayor Entonces
                    Si haySegundo == falso o num > segundo Entonces
                        segundo = num
                        hay segundo = verdadero
                    Fin Si
                Fin Si
            Fin Si
        Fin Si
    Fin Si
    Leer num
Fin Mientras
*/

#include <iostream>
using namespace std;

int main() {
    int num, cantidad, mayor, segundo;
    bool haySegundo;

    cantidad = 0;
    haySegundo = false;

    cin >> num;
    while (num != 0) {
        if (num > 0) {
            cantidad = cantidad + 1;
            if (cantidad == 1) {
                mayor = num;
            } else {
                if (num > mayor) {
                    segundo = mayor;
                    mayor = num;
                    haySegundo = true;
                } else {
                    if (num < mayor) {
                        if (haySegundo == false || num > segundo) {
                            segundo = num;
                            haySegundo = true;
                        }
                    }
                }
            }
        }
        cin >> num;
    }

    if (cantidad < 2 || haySegundo == false) {
        cout << "No hay suficientes valores distintos" << endl;
    } else {
        cout << "Mayor: " << mayor << endl;
        cout << "Segundo mayor: " << segundo << endl;
    }

    return 0;
}
