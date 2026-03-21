#include <iostream>
using namespace std;

/*
    Hacer un programa para un cajero automático para ingresar un importe a retirar
y convertir el mismo en la cantidad de billetes de $1.000, $500, $200 y $100 a
entregar.
Ejemplo A: Si el importe a retirar es $2500 se mostrará por pantalla que se
deberán entregar 2 billetes de $1.000, 1 billete de $500, 0 billetes de $200 y 0
billetes de $100
*/

int main()
{
    int importeRetirar, billete1000, billete500, billete200, billete100, restante;

    cout << "Ingrese Monto a retirar: $ ";
    cin >> importeRetirar;

    billete1000 = importeRetirar / 1000;
    restante = importeRetirar % 1000;

    //billete500 = importeRetirar % 500;

    cout << "Cant. Billetes de $1000: " << billete1000 << endl;
    cout << "Me sobran $ " << restante << endl;

    return 0;
}
