/*
Algoritmo Primos Entre Dos Numeros
   Leer a, b

   Si a < b Entonces
    inicio ← a
    fin ← b
   Si no
    inicio ← b
    fin ← a
   FinSi

   hayPrimos ← Falso
   numero ← inicio

   Mientras numero <= fin Hacer
    Si numero > 1 Entonces
        primo ← Verdadero
        i ← 2
        Mientras i < numero y primo = Verdadero Hacer
            Si numero MOD i = 0 Entonces
                primo ← Falso
            Sino
                i ← i + 1
            Fin si
        Fin Mientras

        Si primo = Verdadero Entonces
           Escribir numero
           hayPrimos ← Verdadero
        Fin Si
    FinSi

    numero ← numero + 1
 Fin Mientras
 Si hayPrimos = Falso Entonces
    Escribir "No hay números primos"
 Fin Si
Finalgoritmo
*/


#include <iostream>
using namespace std;

int main() {
    int a, b, inicio, fin, numero, i;
    bool hayPrimos, primo;

    cin >> a >> b;
    if (a < b) {
        inicio = a;
        fin = b;
    } else {
        inicio = b;
        fin = a;
    }

    hayPrimos = false;
    numero = inicio;

    while (numero <= fin) {
        if (numero > 1) {
            primo = true;
            i = 2;
            while (i < numero && primo == true) {
                if (numero % i == 0) {
                    primo = false;
                } else {
                    i = i + 1;
                }
            }
            if (primo == true) {
                cout << numero << endl;
                hayPrimos = true;
            }
        }
        numero = numero + 1;
    }

    if (hayPrimos == false) {
        cout << "No hay números primos" << endl;
    }

    return 0;
}
