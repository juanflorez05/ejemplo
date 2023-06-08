#include <iostream>

int main() {
    // Leer tres valores
    int valor1, valor2, valor3;
    std::cout << "Ingrese el primer valor: ";
    std::cin >> valor1;
    std::cout << "Ingrese el segundo valor: ";
    std::cin >> valor2;
    std::cout << "Ingrese el tercer valor: ";
    std::cin >> valor3;

    // Validar que los valores sean diferentes
    if (valor1 != valor2 && valor1 != valor3 && valor2 != valor3) {
        // Determinar el mayor y el menor
        int mayor = std::max(std::max(valor1, valor2), valor3);
        int menor = std::min(std::min(valor1, valor2), valor3);

        // Imprimir el resultado
        std::cout << "El mayor valor es: " << mayor << std::endl;
        std::cout << "El menor valor es: " << menor << std::endl;
    } else {
        // Imprimir mensaje de alerta
        std::cout << "Debe ingresar valores diferentes." << std::endl;
    }

    return 0;
}

//La función std::max() se utiliza para determinar el mayor valor entre tres números
//La función std::min() se utiliza para encontrar el menor valor. 
//Si los valores ingresados son iguales, se muestra un mensaje de alerta.
