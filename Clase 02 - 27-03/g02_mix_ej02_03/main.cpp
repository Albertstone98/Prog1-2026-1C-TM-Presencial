#include <iostream>
using namespace std;

/*
    Hacer un programa para ingresar por teclado dos números y
    luego informar por pantalla con un cartel aclaratorio si
    ambos son par o impar. Además, informar si el
    primer número es múltiplo del segundo.
*/

int main()
{
    int num1, num2;

    cout << "Ingrese un numero: ";
    cin >> num1;
    cout << "Ingrese otro numero: ";
    cin >> num2;

    if (num1 % 2 == 0 && num2 % 2 == 0)
    {
        cout << "Ambos son Pares" << endl;
    }
    else if (num1 % 2 == 0 || num2 % 2 == 0)
    {
        cout << "Al menor uno es par" << endl;
    }
    else{
        cout << "Ambos son Impares" << endl;
    }

    if (num1 % num2 == 0){
        cout << "Son Múltiplos!!" << endl;
    }

    return 0;
}
