#include <iostream>
using namespace std;

/*
    (Mix. Ej. 5 y Ej. 6) Hacer un programa para ingresar un N valor que
    indica la cantidad de números que componen una lista y luego solicitar
    se ingresen esos N números.
    Se pide informar cuantos son positivos, cuantos son negativos y cuantos.
    son ceros
*/

int main()
{
    int nro, n;
    int contPos = 0, contNeg = 0, contCeros = 0;

    cout << "Diga cantidad de numeros a ingresar: ";
    cin >> nro;

    for(int i = 0; i < nro; i++){
        cout << "Ingrese numero " << i + 1 << ": ";
        cin >> n;

        if(n > 0){
            contPos++;
        }
        else if(n < 0){
            contNeg++;
        }
        else{
            contCeros++;
        }
    }
    cout << endl;
    cout << "--------------------------------" << endl;
    cout << "Cant. Positivos: " << contPos << endl;
    cout << "Cant. Negativos: " << contNeg << endl;
    cout << "Cant. Ceros: " << contCeros << endl;
    cout << "--------------------------------" << endl;

    return 0;
}
