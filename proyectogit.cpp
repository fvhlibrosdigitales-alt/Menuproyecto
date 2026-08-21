#include <iostream>
#include <cmath>

using namespace std;

// Declaración de funciones por estudiante
void calcularAreaTriangulo();   // Diego
void ConvertirCelsiusFahrenheit(); // Luis Angel
void determinarParImpar();      // Javier
void calcularPromedioNotas();   // Owen
void calcularFactorial();       // Merly
void tablaMultiplicar();        // Helany
void calcularDescuento();       // Jefferson
void calcularIMC();             // Sergio
void multiplicar5numeros();   // Dani

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
            case 9:  multiplicar5numeros(); break;
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
    
    float C;
    cout<<"Ingrese su Temperatura en celsius: ";
	cin>>C;
	
	cout<<C<<"C"<<" = "<<(C * 9/5) + 32<<"F"<<endl;    
}

// Estudiante 3: Pide un número entero e indica si es Par o Impar usando el operador %.
void determinarParImpar() {
    int a;
    cout<<"ingrese su primer numero: "<<endl;
    cin>>a;
    
    if(a%2 == 0){
    	
    	cout<<"el numero es par"<<endl;
    	
	}else{
		cout<<"el numero es impar"<<endl;
	}
    
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
    float precio;
	float descuento;
	float total;
	string producto;

	cout << "\n[Opcion 7] Calculador de Descuento del 5%" << endl;
	cout << "Ingrese el producto\n";
	cin >> producto;

	cout << "Ingrese el precio de la compra: Q";
	cin >> precio;

	descuento = precio * 0.05;
	total = precio - descuento;
	cout << "El precio del producto:  "<< producto << endl;

	cout << "\nPrecio original: Q" << precio << endl;
	cout << "Descuento (5%): Q" << descuento << endl;
	cout << "Total a pagar: Q" << total << endl;
}

// Estudiante 8: Pide peso (kg) y altura (m), calcula el IMC (peso / altura^2).
void calcularIMC() {
     	float peso,altura,imc;
   	cout<<"ingrese su peso en kg"<<endl;
   	cin>>peso;
   	cout<<"ingrese su altura en metros "<<endl;
   	cin>>altura;
   	imc = peso / (altura * altura);
   	cout << "Tu IMC es: " << imc << endl;
   	
    if (imc < 18.5) {
        cout << "Clasificacion: Bajo peso" <<endl;
    } else if (imc >= 18.5 && imc < 25) {
        cout << "Clasificacion: Peso normal" <<endl;
    } else if (imc >= 25 && imc < 30) {
        cout << "Clasificacion: Sobrepeso" <<endl;
    } else {
        cout << "Clasificacion: Obesidad" <<endl;
    }

// Estudiante 9: Multiplica 5 numeros.
void multiplicar5numeros() {
    
    int n1,n2,n3,n4,n5;
    cout"ingrese  cinco numeros "endl;
    cin>>n1;
    cin>>n2;
    cin>>n3;
    cin>>n4;
    cin>>n5;
    
    cout<<"el resultado de los 5 numeros es "<<n1*n2*n3*n4*n5<<endl;
}
