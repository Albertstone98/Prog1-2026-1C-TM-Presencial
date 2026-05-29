#include <iostream>

using namespace std;

/*
Dada una lista de 10 números, cargarlos en un vector. Luego ingresar un
número e informar el primer índice donde ese número aparece en el vector.
En caso de no aparecer se mostrará el valor índice igual a -1
*/

/// Prototipo de las Funciones
int buscarIndice(int n, int vNumeros[], int tam);
void cargarVector(int vec[], int tam);

int main()
{
    int vNumeros[10];
    int n;
    int indice;


    const int TAM = 10;

    cargarVector(vNumeros, TAM);

    cout << endl;

    cout << "Ingrese el numero a buscar: ";
    cin >> n;

    indice = buscarIndice(n, vNumeros, TAM);

    cout << endl << "El Indice es: " << indice << endl;

    return 0;
}

/// Cuerpo de las Funciones
void cargarVector(int vec[], int tam){
    for(int i=0; i<tam;i++){
        cout << "Ingrese un numero: ";
        cin >> vec[i];
    }
}

int buscarIndice(int n, int vNumeros[], int tam)
{
    //int indice = -1;

    for(int i = 0; i < tam; i++){
        if(n == vNumeros[i]){
            /// Encontramos el elemento buscado
            /*indice = i;
            break;*/
            return i;
        }
    }

    return -1;
}
