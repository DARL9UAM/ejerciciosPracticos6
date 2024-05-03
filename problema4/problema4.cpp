/*Realice un programa que permita calcular y dar como salida el
promedio general de una sección, tomando en cuenta que está
compuesta por 10 estudiantes y que se tiene la nota de cada uno de
ellos*/
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
    float corte1, corte2, corte3, totalCorte;
    int totalEstudiantes = 1;

    for (; totalEstudiantes <= 10; totalEstudiantes++)
    {
        cout << "Ingrese las notas del corte " << totalEstudiantes << ": ";
        cin >> corte1;
        cout << "Ingrese las notas del corte " << totalEstudiantes << ": ";
        cin >> corte2;
        cout << "Ingrese las notas del corte " << totalEstudiantes << ": ";
        cin >> corte3;
        totalCorte = (corte1 + corte2 + corte3) / 3;

        cout << "La nota promedio del estudiante #" << totalEstudiantes << "...es :" << totalCorte << endl;
    }
}