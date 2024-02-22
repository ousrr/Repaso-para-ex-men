#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // Calcular la ra�z cuadrada de un n�mero
    float num = 25.0;
    float raiz_cuadrada = sqrt(num);
    cout << "La raiz cuadrada de " << num << " es: " << raiz_cuadrada << std::endl;

    // Calcular el seno de un �ngulo en radianes
    float angulo_rad = 1.57; // 90 grados en radianes
    float seno = sin(angulo_rad);
    cout << "El seno de " << angulo_rad << " radianes es: " << seno << std::endl;

    // Calcular el coseno de un �ngulo en radianes
    float coseno = cos(angulo_rad);
    cout << "El coseno de " << angulo_rad << " radianes es: " << coseno << std::endl;

    return 0;
}

