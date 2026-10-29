/*
Algoritmo: Conversión de tiempo
Inicio
   Leer C
   dias = C / 86400
   resto = C % 86400
   horas = resto / 3600
   resto = resto % 3600
   minutos = resto / 60
   segundos = resto % 60
   Escribir dias
   Escribir horas
   Escribir minutos
   Escribir segundos
Fin
*/


#include <iostream>
using namespace std;

int main() {
    int C, dias, horas, minutos, segundos, resto;
    cin >> C;
    dias = C / 86400;
    resto = C % 86400;
    horas = resto / 3600;
    resto = resto % 3600;
    minutos = resto / 60;
    segundos = resto % 60;
    cout << dias << endl;
    cout << horas << endl;
    cout << minutos << endl;
    cout << segundos << endl;
    return 0;
}
