#include <iostream>
#include <vector>

using namespace std;

int main() {
    int longitud;
    
    // Solicitar al usuario ingresar la longitud de los vectores
    cout << "Ingrese la longitud de los vectores: ";
    cin >> longitud;

    // Declarar vectores para almacenar los valores ingresados por el usuario
    vector<int> vector1(longitud);
    vector<int> vector2(longitud);
    vector<int> suma(longitud);

    // Solicitar al usuario ingresar los valores para el primer vector
    cout << "Ingrese los valores para el primer vector:" << endl;
    for (int i = 0; i < longitud; ++i) {
        cout << "Valor " << i + 1 << ": ";
        cin >> vector1[i];
    }

    // Solicitar al usuario ingresar los valores para el segundo vector
    cout << "Ingrese los valores para el segundo vector:" << endl;
    for (int i = 0; i < longitud; ++i) {
        cout << "Valor " << i + 1 << ": ";
        cin >> vector2[i];
    }

    // Calcular la suma de los dos vectores
    for (int i = 0; i < longitud; ++i) {
        suma[i] = vector1[i] + vector2[i];
    }

    // Mostrar el resultado (suma de los vectores)
    cout << "La suma de los dos vectores es:" << endl;
    for (int i = 0; i < longitud; ++i) {
        cout << suma[i] << " ";
    }
    cout << endl;

    return 0;
}
