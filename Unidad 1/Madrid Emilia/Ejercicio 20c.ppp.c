/*
Inicio
secreto = 37
intentos = 0
Repetir
    Escribir "Adivine el numero entre 1 y 100"
    Leer Intento
    intentos = intentos + 1
    Si Intento < secreto Entonces
        Escribir "Mas alto"
    Si No
        Si Intento > secreto Entonces
            Escribir "Mas bajo"
        Si No
            Escribir "Acertaste"
        Fin Si
    Fin Si
Hasta Que Intento == secreto
Escribir "Intentos utilizados", intentos
Fin
*/

ude <iostream>
 using namespace std;

int main() {
    int secreto = 37;
    int intento;
    int intentos = 0;

    do {
        cout << "Adivine el numero entre 1 y 100" << endl;
        cin >> intento;
        intentos = intentos + 1;
        if (intento < secreto) {
            cout << "Más alto" << endl;
        } else {
            if (intento > secreto) {
                cout << "Mas bajo" << endl;
            } else {
                cout << "Acertaste" << endl;
            }
        }
    } while (intento != secreto);

    cout << "Intentos utilizados " << intentos << endl;
    return 0;
}
