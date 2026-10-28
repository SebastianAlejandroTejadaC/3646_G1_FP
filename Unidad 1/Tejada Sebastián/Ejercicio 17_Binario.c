//Ejercicio 17, Conversión decimal a binario
#include <stdio.h>

int main()
{
    long long n, bin, pot;   /* el binario se guarda como numero de 0 y 1 */

    printf("Ingrese un entero positivo: ");
    scanf("%lld", &n);
    bin = 0;
    pot = 1;
    while (n > 0)
    {
        bin = bin + (n % 2) * pot;
        pot = pot * 10;
        n = n / 2;
    }
    printf("Binario: %lld\n", bin);
    return 0;
}
