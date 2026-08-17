#include <iostream>
#include <cmath>

using namespace std;

// Declaración de funciones por estudiante
void calcularAreaTriangulo();   // Estudiante 1
void ConvertirCelsiusFahrenheit(); // Estudiante 2
void determinarParImpar();      // Estudiante 3
void calcularPromedioNotas();   // Estudiante 4
void calcularFactorial();       // Estudiante 5
void tablaMultiplicar();        // Estudiante 6
void calcularDescuento();       // Estudiante 7
void calcularIMC();             // Estudiante 8
void generarSerieFibonacci();   // Estudiante 9

int main() {
    int opcion = 0;

    do {
        cout << "\n==========================================" << endl;
        cout << "   SUITE DE HERRAMIENTAS MATEMATICAS      " << endl;
        cout << "==========================================" << endl;
        cout << "1. Area de un Triangulo" << endl;
        cout << "2. Conversor Celsius a Fahrenheit" << endl;
        cout << "3. Determinar si un Numero es Par o Impar" << endl;
        cout << "4. Promedio de 3 Notas" << endl;
        cout << "5. Calcular Factorial de un Numero" << endl;
        cout << "6. Tabla de Multiplicar" << endl;
        cout << "7. Calcular Descuento en Compra" << endl;
        cout << "8. Indice de Masa Corporal (IMC)" << endl;
        cout << "9. Serie de Fibonacci (N terminos)" << endl;
        cout << "10. Salir" << endl;
        cout << "==========================================" << endl;
        cout << "Ingrese su opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:  calcularAreaTriangulo(); break;
            case 2:  ConvertirCelsiusFahrenheit(); break;
            case 3:  determinarParImpar(); break;
            case 4:  calcularPromedioNotas(); break;
            case 5:  calcularFactorial(); break;
            case 6:  tablaMultiplicar(); break;
            case 7:  calcularDescuento(); break;
            case 8:  calcularIMC(); break;
            case 9:  generarSerieFibonacci(); break;
            case 10: cout << "\nSaliendo del programa..." << endl; break;
            default: cout << "\nOpcion no valida. Intente de nuevo." << endl; break;
        }
    } while (opcion != 10);

    return 0;
}

// -------------------------------------------------------------
// IMPLEMENTACIÓN DE FUNCIONES (ASIGNACIÓN INDIVIDUAL)
// -------------------------------------------------------------

// Estudiante 1: Pide base y altura e imprime el área ( (base * altura) / 2 ).
void calcularAreaTriangulo() {
    cout << "\n[Opcion 1] En proceso de desarrollo..." << endl;
}

// Estudiante 2: Pide grados Celsius e imprime la conversión a Fahrenheit ( (C * 9/5) + 32 ).
void ConvertirCelsiusFahrenheit() {
    cout << "\n[Opcion 2] En proceso de desarrollo..." << endl;
}

// Estudiante 3: Pide un número entero e indica si es Par o Impar usando el operador %.
void determinarParImpar() {
    cout << "\n[Opcion 3] En proceso de desarrollo..." << endl;
}

// Estudiante 4: Pide 3 notas float, calcula el promedio y muestra si aprueba (>=60).
void calcularPromedioNotas() {
    cout << "\n[Opcion 4] En proceso de desarrollo..." << endl;
}

// Estudiante 5: Pide un número entero positivo y muestra su factorial usando un ciclo.
void calcularFactorial() {
    cout << "\n[Opcion 5] En proceso de desarrollo..." << endl;
}

// Estudiante 6: Pide un número entero y muestra su tabla del 1 al 10 con un ciclo for.
void tablaMultiplicar() {
    cout << "\n[Opcion 6] En proceso de desarrollo..." << endl;
}

// Estudiante 7: Pide el precio y el % de descuento, muestra el total a pagar.
void calcularDescuento() {
    cout << "\n[Opcion 7] En proceso de desarrollo..." << endl;
}

// Estudiante 8: Pide peso (kg) y altura (m), calcula el IMC (peso / altura^2).
void calcularIMC() {
    cout << "\n[Opcion 8] En proceso de desarrollo..." << endl;
}

// Estudiante 9: Pide la cantidad N de términos a mostrar de la serie de Fibonacci.
void generarSerieFibonacci() {
    cout << "\n[Opcion 9] En proceso de desarrollo..." << endl;
}