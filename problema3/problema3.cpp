/*Escriba el programa para calcular la suma de los cuadrados de los
números entre 1 y 100.*/
#include <iostream>

using namespace std;

void imprimir();

main()
{
   imprimir();

    return 0;
}

void imprimir(){
 int suma = 0;
    for (int i = 1; i <= 100; i++)
    {
        suma += i * i;
    }
    cout << "La suma de los cuadrados entre 1 y 100 es: " << suma << endl;
}