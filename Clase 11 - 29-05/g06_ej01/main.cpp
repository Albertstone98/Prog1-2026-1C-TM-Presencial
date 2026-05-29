#include <iostream>

using namespace std;

/*
Hacer un programa para ingresar 10 números y guardarlos en un vector.
Determinar e informar cuál es la suma de los valores del vector.
*/

int main()
{
    const int TAMANIO = 10; /// Variable para asignar el Tamaño del Vector
    int vNumeros[TAMANIO];  /// Declaración de Vector

    int acu = 0;

    //int n;

    /// 1. Cargamos el Vector
    for(int i = 0; i < TAMANIO; i++){
        cout << "Vuelta# " << i << endl;

        // Opción 1 Ingresar datos
        /*
            cout << "Ingrese numero: ";
            cin >> n;

            cout << "Me voy a posicionar en el indice " << i - 1 << endl;
            vNumeros[i-1] = n;
        */

        // Opción 2 Ingresar datos dentro del vector
        cout << "Ingrese numero: ";
        cin >> vNumeros[i];
    }

    cout << "----------------------------" << endl;

    /// 2. Recorremos el Vector y Acumulamos
    for(int i = 0; i < TAMANIO; i++){
        acu += vNumeros[i];
    }

    cout << "----------------------------" << endl;

    cout << "La Suma del Vector es: " << acu << endl;

/*

    /// Mostramos Vector Cargado
    for(int i = 0; i < TAMANIO; i++){
        cout << "Posicion del Vector #" << i + 1 << endl;

        cout << vNumeros[i] << endl;
    }


    /// Formas de acceder a los elementos del Vector
    vNumeros[4] = 5;

    int n = 1;
    vNumeros[n] = 10;

    vNumeros[9] = vNumeros[4] * vNumeros[1];

    vNumeros[10] = 15;
*/

    return 0;
}
