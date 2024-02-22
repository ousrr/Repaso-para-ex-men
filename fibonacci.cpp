#include <iostream>

using namespace std;

// Función para calcular el término n de la secuencia de Fibonacci
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int n;
    cout << "Ingrese el numero de terminos de la secuencia de Fibonacci que desea calcular: ";
    cin >> n;

    cout << "Secuencia de Fibonacci hasta el termino " << n << ":\n";
    for (int i = 0; i < n; ++i) {
        cout << fibonacci(i) << " ";
    }
    cout << endl;

    return 0;
}

