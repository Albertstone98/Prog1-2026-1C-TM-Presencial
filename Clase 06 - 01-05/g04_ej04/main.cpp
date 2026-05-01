#include <iostream>
using namespace std;

/*
Dada una lista de números compuesta por 10 grupos y cada grupo separado del
siguiente por un cero, se pide determinar e informar:

a) Para cada uno de los grupos el máximo de los números pares y el máximo de los números impares. Se informan 2 resultados por cada grupo.
b) Para cada uno de los grupos el porcentaje de números negativos y números positivos. Se informan 2 resultados por cada grupo.
c) Cuántos números positivos había en total entre los 10 grupos. Se informa 1 resultado al final.
d) El número de grupo con mayor porcentaje de números impares positivos respecto al total de números que forman el grupo. Se informa 1 resultado al final.
e) Informar cuantos grupos están formados por todos números ordenados de mayor a menor. Se informa 1 resultado al final.
*/

int main()
{
    /// PUNTO A
    bool hayMaxPar;
    int num, maxPar, maxImpar;

    /// PUNTO B
    int pos, neg, total;
    float porcPos, porcNeg;

    /// PUNTO C
    int contPositivos=0;

    /// PUNTO D
    int numAnt, cantGruposOrdenados = 0;
    bool estanOrdenados;

    for(int x = 0; x < 5; x++) /// CICLO EXTERNO
    {
        hayMaxPar = false; //Reestablezco las banderas a su valor definido por cada grupo.
        maxImpar = 0; //En vez de usar una bandera, utilizo la misma variable como variable de control.

        pos = neg = 0; // Reinicio contadores para cada grupo

        estanOrdenados = true;

        cout << "Ingrese un numero: ";
        cin >> num;

        numAnt = num;

        while(num!=0) /// CICLO INTERNO
        {
            /// PUNTO A
            if(num%2==0) //PAR
            {
                if(!hayMaxPar || num>maxPar)
                {
                    maxPar=num;
                    hayMaxPar=true;
                }
            }
            else if(maxImpar==0 || num>maxImpar) // IMPAR
            {
                maxImpar=num;
            }

            /// PUNTO B
            if(num > 0)
            {
                pos++;
            }
            else
            {
                neg++;
            }

            /// PUNTO D
            if(num > numAnt)  /// Supongamos nos ingresan 10 - 9 - 8 - 5 - 3 - 2 - 0 -> Significa que los numeros me ingresaron ordenados de Mayor a Menor, entonce
            {
                estanOrdenados = false;
            }

            numAnt = num; /// Antes de pedir otro número, me guardo el numero recien procesado.

            cout << "Ingrese un numero: ";
            cin >> num;
        }

        cout << endl;

        /// PUNTO A
        cout << "El mayor par del grupo fue: " << maxPar <<endl;
        cout << "El mayor impar del grupo fue: " << maxImpar <<endl;

        /// PUNTO B
        total = pos + neg;
        porcPos = (float)pos / total * 100;
        porcNeg = (float)neg / total * 100;
        cout << "Porcentaje de Positivos del Grupo " << x + 1 << ": "<< porcPos << "%" << endl;
        cout << "Porcentaje de Negativos del Grupo " << x + 1 << ": "<< porcNeg << "%" << endl;

        /// PUNTO C
        contPositivos += pos;

        /// PUNTO D
        if(estanOrdenados)
            cantGruposOrdenados++;
    }

    cout << endl;

    /// PUNTO C
    cout << "La cantidad total de numeros positivos fue: " << contPositivos << endl;

    /// PUNTO D
    cout << "La cantidad de Grupos Ordenados de Mayor a Menor fue de: " << cantGruposOrdenados << endl;

    return 0;
}
