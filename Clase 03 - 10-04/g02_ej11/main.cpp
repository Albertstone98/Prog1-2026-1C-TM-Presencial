#include <iostream>

using namespace std;

int main()
{
    int cantHoras;
    char lenguaje;
    bool urgente;

    const float VALOR_C = 7500;
    const float VALOR_P = 5400;
    const float VALOR_CC = 6100;
    const float VALOR_G = 5000;

    float costo;

    cout << "Ingrese Cantidad Horas: ";
    cin >> cantHoras;
    cout << "Ingrese Lenguaje: ";
    cin >> lenguaje;
    cout << "Ingrese 1 si es Urgente o 0 si no lo es: ";
    cin >> urgente;

    /// true se toma 1
    /// false se toma 0

    switch(lenguaje)
    {
    case 'C':
    case 'c':
        costo = cantHoras * VALOR_C;
        break;
    case '#':
        costo = cantHoras * VALOR_CC;
        break;
    case 'P':
    case 'p':
        costo = cantHoras * VALOR_P;
        break;
    case 'G':
    case 'g':
        costo = cantHoras * VALOR_G;
        break;
    default:
        cout << "Lenguaje Inexistente. Ingrese nuevamente." << endl;
    }

    if(urgente){
       //costo *= 2.20;
       costo = costo * 2.20;
    }

    cout << "El Valor del Proyecto $ " << costo << endl;

    return 0;
}
