#include <iostream>
using namespace std;

/*
    Hacer un programa para ingresar por teclado un número y
    emitir por pantalla un mensaje aclaratorio que indique si
    el mismo es positivo, caso contrario indicar que no es positivo.
*/

int main()
{
    int num;

    cout << "Ingrese numero: ";
    cin >> num;

    if(num > 0){
        cout << "El Numero es POSITIVO" << endl;
    }
    else if(num == 0){
            cout << "El Numero es CERO" << endl;
    }
    else{
        cout << "El Numero es NEGATIVO" << endl;
    }

    return 0;
}
