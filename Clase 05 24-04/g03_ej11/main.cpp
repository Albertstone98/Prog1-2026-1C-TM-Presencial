#include <iostream>

using namespace std;

/*
    Hacer un programa para ingresar una lista de 10 números, luego informar el
   máximo de los negativos y el mínimo de los positivos.

   10, 20, -5, 30,-15, 3, 42, 0, 22, -13.
*/

int main()
{
    int n;
    int maxNeg;
    int minPos = 0;
    bool hayNegativo = false;

    for(int i = 0; i < 10; i++)
    {
        cout << "Ingrese numero: ";
        cin >> n;

        if(n < 0)  /// NEGATIVOS
        {
            /*if(!hayNegativo){ // false -> true
                /// ENCONTRAMOS EL PRIMER NEGATIVO y GUARDABAMOS
                maxNeg = n;
                hayNegativo = true;
            }
            else if(maxNeg < n){ /// n > maxNeg
                maxNeg = n;
            }*/

            if(!hayNegativo || n > maxNeg)
            {
                maxNeg = n;
                hayNegativo = true;
            }
        }
        else  /// POSITIVOS
        {
            if(minPos == 0)
            {
                minPos = n;
            }
            else if(n < minPos)
            {
                minPos = n;
            }
        }
    }

    /// VALIDACIONES

    if(hayNegativo)
    {
        cout << endl << "Maximo Negativos: " << maxNeg << endl;
    }
    else
    {
        cout << endl << "No se ingresaron Negativos" << endl;
    }

    if(minPos > 0)
    {
        cout << endl << "Minimo Positivos: " << minPos << endl;

    }
    else{
        cout << endl << "No se ingresaron Positivos" << endl;
    }

    return 0;
}
