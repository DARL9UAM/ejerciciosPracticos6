#include <iostream>

using namespace std;

int main() {
    int suma = 0;

    // Iterar sobre los números del 1 al 100 y calcular el cuadrado de cada uno
    for (int i = 1; i <= 100; ++i) {
        suma += i * i; // Agregar el cuadrado del número actual a la suma
    }

    // Mostrar la suma de los cuadrados
    cout << "La suma de los cuadrados de los numeros del 1 al 100 es: " << suma << endl;

    return 0;
}