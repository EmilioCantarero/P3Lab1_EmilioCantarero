// P3Lab1_EmilioCantarero.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;
int esPrimo(int n);
void sumaPrimos(int n);
//---------------------
int main() {
    int n;
    cout << "Introduce un numero mayor que 2, pero menor que 100: ";
    cin >> n;
    if (n > 2 && n < 100)
        for (unsigned k = 3; k <= n; k++)
            sumaPrimos(k);
    else
        cout << "Ejecucion finalizada por un dato erroneo";
    return 0;
}
//----------------------
void sumaPrimos(int n) {

    if (n % 2 == 0)
    {
        for (int i = 2; i < n; i++) {
            if (n - i == 1) {
            }
            else
                if (esPrimo(i) && esPrimo(n - i))
                    cout << i << " + " << n-i << " = " << n << endl;
        }
    }
}

int esPrimo(int m) {
    int temp = 2;
    bool primo = true;
    while (primo && temp < m) {
        if (m % temp == 0) primo = false;
        ++temp;
    }
    if (primo) return m;
    else return 0;
}



// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
