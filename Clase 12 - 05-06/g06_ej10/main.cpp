#include <iostream>
using namespace std;

/*
Una empresa comercializa 20 tipos de artículos y por cada venta
realizada genera un registro con los siguientes datos:

    - Número de Artículo (1 a 20)
    - Cantidad Vendida

Puede haber varios registros para el mismo artículo y el último
registro se indica cuando se ingresa un número de artículo
igual a 0. Se pide determinar e informar:

*/
/// a) El número de artículo que más se vendió en total.
/// b) Los números de artículos que no registraron ventas.
/// c) Cuántas unidades se vendieron del número de artículo 10.

int main()
{
    setlocale(LC_ALL, "spanish");

    const int TAM = 5;
    int nroArt;
    int cant;
    int vNroArts[TAM] = {};

    cout << "Ingrese el número de artículo: ";
    cin >> nroArt;

    cout << "Ingrese la cantidad vendida: ";
    cin >> cant;

    while(nroArt != 0)
    {
        /// Punto A
        vNroArts[nroArt - 1]+=cant;

        cout << "--------" << endl;
        cout << "Ingrese el número de artículo: ";
        cin >> nroArt;

        cout << "Ingrese la cantidad vendida: ";
        cin >> cant;
    }

    int maxCant = vNroArts[0];
    int maxNumArt = 1;

    for(int i = 1; i < TAM; i++)
    {
        if( vNroArts[i] > maxCant )
        {
            maxCant = vNroArts[i];
            maxNumArt = i + 1;
        }
    }

    /// PUNTO A
    cout << "El número de artículo máximo es: " << maxNumArt << endl;

    /// PUNTO B
    for(int i = 0; i < TAM; i++)
    {
        if(vNroArts[i] == 0)
        {
            cout << "El artículo " << i + 1 << " no tuvo ventas"  << endl;
        }
    }

    /// PUNTO C
    cout << "El número de artpiculo 10 vendió " << vNroArts[9] << endl;

    return 0;
}
