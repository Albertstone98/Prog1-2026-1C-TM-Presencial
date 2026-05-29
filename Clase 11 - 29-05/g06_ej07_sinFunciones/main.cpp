#include <iostream>

using namespace std;

/*
Dada una lista de 10 números, cargarlos en un vector. Luego ingresar un
número e informar el primer índice donde ese número aparece en el vector.
En caso de no aparecer se mostrará el valor índice igual a -1
*/

int main()
{
    int vNumeros[10];
    int n;
    int indice = -1;
    bool primerIndice = false;

    for(int i=0; i<10;i++){
        cout << "Ingrese un numero: ";
        cin >> vNumeros[i];
    }

    cout << endl;

    cout << "Ingrese el numero a buscar: ";
    cin >> n;

    for(int i = 0; i < 10; i++){
        if(n == vNumeros[i] && !primerIndice){
            /// Encontramos el elemento buscado
            indice = i;
            primerIndice = true;
        }
    }

    cout << endl << "El Indice es: " << indice << endl;

    return 0;
}
