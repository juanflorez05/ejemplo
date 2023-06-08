#include <iostream>

int main() {
    int numDatos;

    std::cout << "Ingrese el número de datos a registrar: ";
    std::cin >> numDatos;

    // Ciclo for para registrar los datos
    for (int i = 0; i < numDatos; i++) {
        int dato;
        std::cout << "Ingrese el dato #" << (i + 1) << ": ";
        std::cin >> dato;
    }

    std::cout << "Datos registrados:" << std::endl;

    // Ciclo for para imprimir los datos
    for (int i = 0; i < numDatos; i++) {
        std::cout << "Dato #" << (i + 1) << ": " << dato << std::endl;
    }

    return 0;
}
