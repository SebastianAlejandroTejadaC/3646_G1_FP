/*
Inicio
     Leer N
     i ← 1
     Mientras i * i <= N Hacer
     i ← i + 1
     Fin Mientras
     R ← i - 1
     Escribir "Raiz cuadrada entera", R
Fin
*/


#include <iostream>
using namespace std;

int main() {
    int N, i = 1, R;
    cin >> N;
    while (i * i <= N) {
        i = i + 1;
    }
    R = i - 1;
    cout << "Raiz cuadrada entera " << R << endl;
    return 0;
}
