/*Para un grupo de clase de 8 estudiantes, realice un programa que
permita calcular y dar como salida lo siguiente:
✓ Cantidad de alumnos aprobados
✓ Cantidad de alumnos reprobados
✓ Promedio general del grupo*/
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
    float nota, totalNota, totalAprovados;
    int estudiantes = 1, aprobados = 0;

    for (; estudiantes <= 8; estudiantes++)
    {
        cout << "Ingrese la nota para el estudiante #" << estudiantes << "...: ";
        cin >> nota;

        if (nota >= 70)
        {
            aprobados++;
            totalAprovados += nota;
        }

        totalNota += nota;
    }

    cout << "Numero de estudiantes aprobados: " << aprobados << endl;
    cout << "Numero de estudiantes desaprobados: " << (8 - aprobados) << endl;
    cout << "Nota promedio de la clase: " << (totalNota / 8) << endl;
}