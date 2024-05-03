#include <iostream>
using namespace std;

int main() {
    int vector_a[3], vector_b[3], dot_product = 0;

    cout << "Enter the elements of the first vector: ";
    for (int i = 0; i < 3; i++) {
        cin >> vector_a[i];
    }

    cout << "Enter the elements of the second vector: ";
    for (int i = 0; i < 3; i++) {
        cin >> vector_b[i];
    }

    for (int i = 0; i < 3; i++) {
        dot_product += vector_a[i] * vector_b[i];
    }

    cout << "Dot product of the two vectors: " << dot_product << endl;

    return 0;
}