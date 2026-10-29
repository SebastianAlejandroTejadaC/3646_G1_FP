/*
Algoritmo Numero Primo
   Leer n
   Si n <= 1 Entonces
      Escribir "Ingrese un entero mayor que 1"
   Sino
      primo = Verdadero
      i ← 2
      Mientras i < n y primo = Verdadero Hacer
        Si n MOD i = 0 Entonces
            primo  Falso
        Sino
            i ← i + 1
        Fin Si
    Fin Mientras

    Si primo = Verdadero Entonces
        Escribir "El número es primo"
    Sino
        Escribir "El número no es primo"
    Fin Si
  Fin Si
Fin Algoritmo
Fin
*/


#include <iostream>
using namespace std;

int main() {
    int n, i;
    bool primo;

    cin >> n;
    if (n <= 1) {
        cout << "Ingrese un entero mayor que 1" << endl;
    } else {
        primo = true;
        i = 2;
        while (i < n && primo == true) {
            if (n % i == 0) {
                primo = false;
            } else {
                i = i + 1;
            }
        }
        if (primo == true) {
            cout << "El número es primo" << endl;
        } else {
            cout << "El número no es primo" << endl;
        }
    }
    return 0;
}
