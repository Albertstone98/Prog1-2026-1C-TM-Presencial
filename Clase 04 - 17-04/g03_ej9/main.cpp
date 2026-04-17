#include <iostream>
using namespace std;

/*
Hacer un programa para ingresar una lista de 10 números, luego informar el
máximo.
Ejemplo A: 5, 10, 20, 8, 25, 13, 35, -8, -5, 20. Se listará Máximo 35.
Ejemplo B: 5, 10, 20, 8, 55, 13, 55, -8, -5, 20. Se listará Máximo 55.
Ejemplo C: -15, -10, -20, -8, -25, -13, -55, -6, -55, -20. Se listará Máximo -6.
El tercer ejemplo demuestra que NO SIEMPRE en una lista de números el
máximo es un positivo.
*/

int main()
{
    int nro;
    int maximo = 0;

    /// Opcion 1 - Preguntar si estoy en la primer vuelta
    /*
    for (int i = 0; i < 10; i++){
        cout << "Ingrese numero: ";
        cin >> nro;

        /// Opcion A - Sin concatenar
        /*if(i == 0){ /// Estoy en la primer vuelta?
            maximo = nro;
        }
        else if(nro > maximo){ /// Estoy en las demas vueltas
            maximo = nro;
        }

        /// Opcion B - Concatenando
        if(i == 0 || nro > maximo){ /// OR
            maximo = nro;
        }
    }
    */

    /// Opcion 2 - Usando Bandera

    bool primerNumero = false;

    for (int i = 0; i < 10; i++){
        cout << "Ingrese numero: ";
        cin >> nro;

        /// OPCION A
        if(primerNumero == false){ /// Pregunto si ya tengo al primer numero
            maximo = nro;
            primerNumero = true;
        }
        else if(nro > maximo) /// Comparo a partir de la segunda vuelta
        {
            maximo =nro;
        }

        /// OPCION B
        if(!primerNumero || nro > maximo){
            maximo = nro;
            primerNumero = true;
        }
    }

    cout << endl;
    cout << "El Mayor es: " << maximo << endl;

    return 0;
}
