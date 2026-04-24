#include <iostream>
using namespace std;

/*
- Número del cliente
- Número de sucursal (1, 2, 3 o 4)
- Saldo del cliente
El lote finaliza cuando se ingresa un registro con número de sucursal igual a 10.

c) Para cada una de las sucursales la suma de los saldos de todos sus
clientes. Se listan 4 resultados.
*/

int main()
{
    /// VARIABLES DEL REGISTRO
    int nroCliente;
    int nroSucursal;
    float saldo;

    /// ACUMULADORES PUNTO C
    float acuSuc1, acuSuc2, acuSuc3, acuSuc4;
    acuSuc1 = acuSuc2 = acuSuc3 = acuSuc4 = 0;

    /// PIDO EL PRIMER REGISTRO

    /*cout << "Nro. Cliente: ";
    cin >> nroCliente;
    cout << "Nro. Sucursal (1, 2, 3 o 4): ";
    cin >> nroSucursal;
    cout << "Saldo: $ ";
    cin >> saldo;

    while(nroSucursal != 10)
    {
        // PROCESAMOS






        /// PEDIMOS EL SIGUIENTE REGISTRO
        cout << "----------------------" << endl;
        cout << "Nro. Cliente: ";
        cin >> nroCliente;
        cout << "Nro. Sucursal (1, 2, 3 o 4): ";
        cin >> nroSucursal;
        cout << "Saldo: $ ";
        cin >> saldo;
    }*/

    /// OPCION 2 - PEDIR SOLO SUCURSAL
    cout << "Nro. Sucursal (1, 2, 3 o 4): ";
    cin >> nroSucursal;

    while(nroSucursal != 10)
    {
        /// PIDO LOS DEMAS DATOS DEL REGISTRO
        cout << "Nro. Cliente: ";
        cin >> nroCliente;
        cout << "Saldo: $ ";
        cin >> saldo;

        // PROCESAMOS
        /// PUNTO C
        switch(nroSucursal)
        {
        case 1:
            acuSuc1 += saldo;
            break;
        case 2:
            acuSuc2 += saldo;
            break;
        case 3:
            acuSuc3 += saldo;
            break;
        case 4:
            acuSuc4 += saldo;
            break;
        }

        /// PEDIMOS EL SIGUIENTE REGISTRO
        cout << "----------------------" << endl;
        cout << "Nro. Sucursal (1, 2, 3 o 4): ";
        cin >> nroSucursal;
    }

    cout << "--------- YA SALI DEL WHILE -------------" << endl;

    cout << "Saldo Sucursal 1: $ " << acuSuc1 << endl;
    cout << "Saldo Sucursal 2: $ " << acuSuc2 << endl;
    cout << "Saldo Sucursal 3: $ " << acuSuc3 << endl;
    cout << "Saldo Sucursal 4: $ " << acuSuc4 << endl;

    return 0;
}
