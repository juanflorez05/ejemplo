#include <iostream>

int main() {
    // Solicitar las tres notas al usuario
    float nota1, nota2, nota3;
    std::cout << "Ingrese la nota del primer examen: ";
    std::cin >> nota1;
    std::cout << "Ingrese la nota del segundo examen: ";
    std::cin >> nota2;
    std::cout << "Ingrese la nota del tercer examen: ";
    std::cin >> nota3;

    // Calcular el promedio de las notas
    float promedio = (nota1 + nota2 + nota3) / 3;

    // Imprimir la nota y el mensaje de aprobación o no aprobación
    std::cout << "La nota promedio del estudiante es: " << promedio << std::endl;
    if (promedio >= 3.5) {
        std::cout << "¡Aprobado!" << std::endl;
    } else {
        std::cout << "No aprobado." << std::endl;
    }

    return 0;
}
