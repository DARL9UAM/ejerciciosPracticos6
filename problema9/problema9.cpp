/*Diseña un programa que solicite al usuario ingresar dos matrices y
luego realice la multiplicación de matrices. Asegúrate de que las
dimensiones de las matrices sean compatibles para la multiplicación y
muestra la matriz resultante.*/
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
    int A[100][100], B[100][100], C[100][100];
    int f1, f2, c1, c2;
    cout << "Ingrese el numero de filas para la primera matriz\n";
    cin >> f1;
    cout << "Ingrese el numero de columnas para la primera matriz\n";
    cin >> c1;
    cout << "Ingrese el numero de filas para la segunda matriz\n";
    cin >> f2;
    cout << "Ingrese el numero de columnas para la segunda matriz\n";
    cin >> c2;

    if (c1 == f2)
    {
        for (int i = 0; i < f1; i++)
            for (int j = 0; j < c1; j++)
            {
                cout << "Ingrese el elemento (" << i << "," << j << ") de la primera matriz\n";
                cin >> A[i][j];
            }
        for (int i = 0; i < f2; i++)
            for (int j = 0; j < c2; j++)
            {
                cout << "Ingrese el elemento (" << i << "," << j << ") de la segunda matriz\n";
                cin >> B[i][j];
            }
        // Imprimir las matrizes
        for (int i = 0; i < f1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                cout << A[i][j] << "\t";
            }
            cout << endl;
        }
        cout << endl;
        for (int i = 0; i < f2; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                cout << B[i][j] << "\t";
            }
            cout << endl;
        }
        for (int i = 0; i < f1; i++)
            for (int j = 0; j < c2; j++)
                C[i][j] = 0;

        for (int i = 0; i < f1; i++)
            for (int j = 0; j < c2; j++)
                for (int z = 0; z < c1; z++)
                    C[i][j] = C[i][j] + A[i][z] * B[z][j];
        cout << endl;
        for (int i = 0; i < f1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                cout << C[i][j] << "\t";
            }
            cout << endl;
        }
    }
    else
        cout << "No se puede miltiplicar las matrices";
}