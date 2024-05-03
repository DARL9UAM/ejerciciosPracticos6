/*Crea un programa que permita al usuario ingresar dos vectores de la
misma longitud y luego calcule su producto punto. Muestra el resultado
al finalizar el cálculo.*/
#include <iostream>
#include <vector>
using namespace std;

void imprimir();

main()
{
    imprimir();
    return 0;
}

void imprimir()
{
    int longitud;

    cout << "Ingrese la longitud de los vectores: ";
    cin >> longitud;

    vector<int> vector1(longitud);
    vector<int> vector2(longitud);
    vector<int> producto(longitud);

    cout << "Ingrese los valores del primer vector :" << endl;
    for (int i = 0; i < longitud; ++i)
    {
        cout << "Valor" << i + 1 << " : ";
        cin >> vector1[i];
    }

    cout << "Ingrese los valores del sugundo vector :" << endl;
    for (int i = 0; i < longitud; ++i)
    {
        cout << "Valor" << i + 1 << " : ";
        cin >> vector2[i];
    }

    for (int i = 0; i < longitud; ++i)
    {
        producto[i] = vector1[i] * vector2[i];
    }

    cout << "El producto punto de los vectores es: " << endl;
    for (int i = 0; i < longitud; ++i)
    {
        cout << producto[i] << " ";
    }
    cout << endl;
}