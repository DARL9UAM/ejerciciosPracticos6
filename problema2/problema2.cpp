/*Desarrollar un programa que imprima los números impares en orden
descendente que hay entre 1 y 100*/
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

    int i;
    for (i = 1; i <= 100; i++)
    {
        if (i % 2 == 1)
        {
            cout << i << endl;
        }
    }
}