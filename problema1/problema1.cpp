/*Dado un número natural n se desea calcular la suma de los números
naturales desde 1 hasta n. Codifica el programa que resuelva este
planteamiento.*/
#include <iostream>

using namespace std;

void imprimir();

main()
{
    imprimir();
    return 0;
}

void imprimir()
{
    int n, suma = 0;
    cout << "Dime un numero natural: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        suma += i;
    }

    cout << " La suma de los numeros desde 1 hasta..." << n << "...es: " << suma << endl;
}