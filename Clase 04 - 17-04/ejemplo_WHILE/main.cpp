#include <iostream>
using namespace std;

/*
    Hacer un programa para ingresar una lista de números que
    finaliza cuando se ingresa un cero.
    Luego informar cuántos son positivos.
*/

int main()
{
    int nro, contPos = 0;

    cout << "Ingrese numero: "; /// Inicio
    cin >> nro;

    while(nro != 0)     /// Condición
    {
        if(nro > 0)
        {
            contPos++;
        }

        cout << "Ingrese numero: "; /// Actualización
        cin >> nro;
    }

    cout << "Cant. de Positivos: " << contPos << endl;


    return 0;
}
