/*
Inicio

   Suma ← 0

   contador ← 0



   Leer altura



   Mientras altura >= 0 Hacer



       Si contador = 0 Entonces



        maximo ← altura

        minimo ← altura

       Si No

        Si altura > maximo Entonces

            maximo ← altura

       Fin Si

        Si altura < minimo Entonces

            minimo ← altura

      Fin Si

Fin Si
*/
#include <iostream>
using namespace std;

int main() {
    // Declaración de variables
    double altura;
    double Suma = 0;
    int contador = 0;
    double maximo, minimo, media;

    // Leer primera altura
    cout << "Ingrese la altura: ";
    cin >> altura;

    // Ciclo mientras la altura sea mayor o igual a 0
    while (altura >= 0) {
        if (contador == 0) {
            maximo = altura;
            minimo = altura;
        } else {
            if (altura > maximo) {
                maximo = altura;
            }
            if (altura < minimo) {
                minimo = altura;
            }
        }

        // Acumular la suma e incrementar el contador
        Suma += altura;
        contador++;

        // Leer la siguiente altura
        cout << "Ingrese la altura (-1 para salir): ";
        cin >> altura;
    }

    // Mostrar resultados finales si se ingresaron datos válidos
    if (contador > 0) {
        media = Suma / contador;
        cout << "\n--- Resultados ---" << endl;
        cout << "Suma total: " << Suma << endl;
        cout << "Cantidad de alturas: " << contador << endl;
        cout << "Media: " << media << endl;
        cout << "Máximo: " << maximo << endl;
        cout << "Mínimo: " << minimo << endl;
    } else {
        cout << "\nNo se ingresaron alturas válidas." << endl;
    }

    return 0;
}


