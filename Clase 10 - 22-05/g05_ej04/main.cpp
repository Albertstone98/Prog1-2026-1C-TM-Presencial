#include <iostream>
using namespace std;

/*
4. Hacer una función que reciba un número entero por valor llamado dia y un string llamado nombreDia por referencia y le asigne el nombre correspondiente según el número de día.

Siendo:
0 - Domingo
3 - Miércoles
6 - Sábado
*/

void nombrarDia(int, string&);

int main()
{
    int n;
    string dia;

    n = 9;

    nombrarDia(n, dia);

    cout << "El dia es " << dia << endl;

    return 0;
}

void nombrarDia(int dia, string& nombreDia)
{
    switch(dia)
    {
    case 0:
        nombreDia = "Domingo";
        break;
    case 1:
        nombreDia = "Lunes";
        break;
    case 2:
        nombreDia = "Martes";
        break;
    case 3:
        nombreDia = "Miercoles";
        break;
    case 4:
        nombreDia = "Jueves";
        break;
    case 5:
        nombreDia = "Viernes";
    break;
    case 6:
        nombreDia = "Sabado";
        break;
    default:
        nombreDia = "No existe dia";
    }
}
