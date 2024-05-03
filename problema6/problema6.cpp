/*Hacer un programa que sume los números pares comprendidos entre
100 y 200.*/
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
    int suma = 0;
    for (int i = 100; i <= 200; i++)
    {
        if (i % 2 == 0)
        {
            suma += i;
        }
    }
    cout << "La suma de los pares entre 100 y 200 es: " << suma << endl;
}