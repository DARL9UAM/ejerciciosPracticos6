/*Implementa un programa que solicite al usuario ingresar una matriz y
luego calcule su transposición. La transposición de una matriz se
realiza intercambiando filas por columnas. Imprime la matriz
transpuesta como salida.*/
#include <iostream>
#include<conio.h>

void imprimir();

using namespace std;

main()
{
    imprimir();

    return 0;
}

void imprimir()
{
    int numeros[3][3];

    for(int i = 0; i < 3; i++){
        for(int j= 0; j<3; j++){
            cout << "Digite un numero [" << i <<"]["<< j <<"]: ";
            cin >> numeros[i][j];
        }
    }
    cout << "Matriz Original\n";
    for(int i; i <3; i++){
        for(int j=0; j<3; j ++){
            cout << numeros[i][j]<< " ";

        }
        cout <<"\n";
    }
    cout << "\nSalida\n";
    for(int i= 0; i < 3; i++){
        for(int j=0; j < 3;j++){
           cout << numeros[j][i] << " "; 
        }
        cout << "\n";
    }
}