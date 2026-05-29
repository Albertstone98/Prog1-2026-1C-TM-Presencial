#include <iostream>

using namespace std;
/*
Cargar 10 números y guardarlos en un vector.
Determinar e informar cuál es el valor máximo y su posición
dentro del vector.
Nota: en caso de que el valor máximo se repita en más de una
posición, se deberá informar la primera aparición encontrada.
*/
int main()
{
    const int TAMANIO = 10;
    int vNumeros[TAMANIO];

    /// 1. Cargamos Vector
    for(int i = 0; i < TAMANIO; i++){
        cout << "Ingrese numero: ";
        cin >> vNumeros[i];
    }

    /// 2. Búsqueda de Máximo en el Vector utilizando posMax
    int posMax = 0;
    for(int i = 1; i < TAMANIO; i++){
        if(vNumeros[i]>vNumeros[posMax]){
            posMax = i;
        }
    }

    cout << "-----------------------------" << endl;

    cout << "El Maximo es: " << vNumeros[posMax] << endl;
    cout << "Posicion del Maximo: " << posMax + 1 << endl;

    return 0;
}
