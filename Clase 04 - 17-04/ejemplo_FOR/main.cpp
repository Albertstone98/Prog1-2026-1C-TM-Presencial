#include <iostream>
using namespace std;

/*
    Hacer un programa para que el usuario ingrese un número positivo y
    luego se muestren por pantalla los números entre el 1 y el número
    ingresado.
*/

int main()
{
    int nro;
    int i;

    cout << "Ingrese numero: ";
    cin >> nro;

    /// Ejemplo Decremento
    for(i = 1; i >= nro; i--){
        cout << i << endl;
    }

    cout << "-----------" << endl;

    cout << "La variable i quedó con: " << i << endl;

    /// Ejemplo Incremento
    /*for(i = 1; i <= nro; i++){
        cout << i << endl;
    }

    cout << "-----------" << endl;

    cout << "La variable i quedó con: " << i << endl;*/

    return 0;
}
