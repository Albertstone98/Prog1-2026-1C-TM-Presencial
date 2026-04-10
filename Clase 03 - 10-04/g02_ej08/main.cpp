#include <iostream>
using namespace std;

/*
    8 Hacer un programa para ingresar cinco números y listar cuantos de esos cinco
números son positivos, cuantos son negativos y cuantos son iguales a 0.
*/

int main()
{
    int a, b, c, d, e;
    int contPos = 0, contNeg = 0, contCero = 0;

    /// Contador: Contar cosas o incrementar de a 1.
    /// cont = cont + 1 | cont+=1 | cont++

    cout << "Ingrese numero: ";
    cin >> a;
    cout << "Ingrese numero: ";
    cin >> b;
    cout << "Ingrese numero: ";
    cin >> c;
    cout << "Ingrese numero: ";
    cin >> d;
    cout << "Ingrese numero: ";
    cin >> e;

    if(a>=0)
    {
        if(a == 0)
        {
            /// CERO
            contCero++;
        }
        else
        {
            /// POSITIVO
            contPos = contPos + 1;
        }
    }
    else
    {
        /// NEGATIVO
        contNeg+=1;
    }

    if(b>=0)
    {
        if(b == 0)
        {
            /// CERO
            contCero++;
        }
        else
        {
            /// POSITIVO
            contPos = contPos + 1;
        }
    }
    else
    {
        /// NEGATIVO
        contNeg+=1;
    }

    if(c>=0)
    {
        if(c == 0)
        {
            /// CERO
            contCero++;
        }
        else
        {
            /// POSITIVO
            contPos = contPos + 1;
        }
    }
    else
    {
        /// NEGATIVO
        contNeg+=1;
    }

    if(d>=0)
    {
        if(d == 0)
        {
            /// CERO
            contCero++;
        }
        else
        {
            /// POSITIVO
            contPos = contPos + 1;
        }
    }
    else
    {
        /// NEGATIVO
        contNeg+=1;
    }

    if(e>=0)
    {
        if(e == 0)
        {
            /// CERO
            contCero++;
        }
        else
        {
            /// POSITIVO
            contPos = contPos + 1;
        }
    }
    else
    {
        /// NEGATIVO
        contNeg+=1;
    }

    cout << "Cant. Positivos: " << contPos << endl;
    cout << "Cant. Negativos: " << contNeg << endl;
    cout << "Cant. Ceros: " << contCero << endl;

    return 0;
}
