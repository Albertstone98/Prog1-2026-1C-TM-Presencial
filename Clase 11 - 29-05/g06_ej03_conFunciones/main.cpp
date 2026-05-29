#include <iostream>

using namespace std;
/*
Cargar 10 números y guardarlos en un vector.
Determinar e informar cuál es el valor máximo y su posición
dentro del vector.
Nota: en caso de que el valor máximo se repita en más de una
posición, se deberá informar la primera aparición encontrada.
*/

/// Prototipos de Funciones
void cargarVector(int [], int);
int buscarMaximo(int [], int);

int main()
{
    const int TAMANIO = 10;
    int vNumeros[TAMANIO];

    /// 1. Cargamos Vector
    cargarVector(vNumeros, TAMANIO);

    /// 2. Búsqueda de Máximo en el Vector utilizando posMax
    int posMax = buscarMaximo(vNumeros, TAMANIO);

    /// 3. Mostramos Máximo dentro del Vector y su Posición "real" al Usuario
    cout << "-----------------------------" << endl;
    cout << "El Maximo es: " << vNumeros[posMax] << endl;
    cout << "Posicion del Maximo: " << posMax + 1 << endl;
    cout << "-----------------------------" << endl;

    return 0;
}

/// Cuerpo de las Funciones
void cargarVector(int v[], int t){
    for(int i = 0; i < t; i++){
        cout << "Ingrese numero: ";
        cin >> v[i];
    }
}

int buscarMaximo(int v[], int t){
    int posMax = 0;

    for(int i = 1; i < t; i++){
        if(v[i]>v[posMax]){
            posMax = i;
        }
    }

    return posMax;
}
