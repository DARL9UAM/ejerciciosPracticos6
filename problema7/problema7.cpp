/*Desarrolla un programa que solicite al usuario ingresar dos vectores
de igual longitud y luego calcule la suma de ambos vectores. El
resultado debe mostrarse en un tercer vector.*/
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
    vector<int> suma(longitud);

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
        suma[i] = vector1[i] + vector2[i];
    }

    cout << "La suma del tercer vector es: " << endl;
    for (int i = 0; i < longitud; ++i)
    {
        cout << suma[i] << " ";
    }
    cout << endl;
}