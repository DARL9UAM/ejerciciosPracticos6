#include <iostream>

int main() {
    int n, suma = 0;

    // Pedir al usuario que ingrese un número
    std::cout << "Ingrese un número natural: ";
    std::cin >> n;

    // Calcular la suma de los números naturales desde 1 hasta n
    for (int i = 1; i <= n; i++) {
        suma += i;
    }

    // Mostrar el resultado
    std::cout << "La suma de los números naturales desde 1 hasta " << n << " es: " << suma << std::endl;

    return 0;
}