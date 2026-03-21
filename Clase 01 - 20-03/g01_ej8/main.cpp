#include <iostream>
using namespace std;

/*
 Hacer un programa para ingresar por teclado una cantidad de minutos y
 mostrar por pantalla a cuantas horas y minutos equivalen.
*/

int main()
{
    int minutos, horas, minRestantes;

    cout << "Ingrese Minutos: ";
    cin >> minutos;

    horas = minutos / 60;
    minRestantes = minutos % 60;

    cout << "Equivalente en Horas " << horas << " ,Equivalente en Minutos " << minRestantes << endl;

    return 0;
}
