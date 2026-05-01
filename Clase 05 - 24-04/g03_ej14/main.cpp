#include <iostream>

using namespace std;

/*
     Se define a un número como primo cuando tiene solamente dos divisores.
Ejemplo A: 2, 7, 11, 13 son números primos, ya que todos tienen solamente dos
divisores.
Ejemplo B: 6 no es primo, pues tiene 4 divisores (1, 2, 3 y 6).
Ejemplo C: 9 no es primo, pues tiene 3 divisores (1, 3 y 9).
Hacer un programa para ingresar un número y luego informar con un cartel
aclaratorio si el mismo es un número primo o es número no primo
*/

int main()
{
    int nro;
    int contDivisores = 0;


    /// OPCION PARA UN SOLO NUMERO
    /*cout << "Ingrese numero: ";
    cin >> nro;

    for(int i = 1; i <= nro; i++){

        if(nro % i == 0){
            /// Cuento divisores
            contDivisores++;
        }
    }

    /// PRIMO
    if(contDivisores == 2){
        cout << "ES PRIMO" << endl;
    }
    else{
        cout << "NO ES PRIMO" << endl;
    }

    cout << endl;
    cout << "Cant. Divisores: " << contDivisores << endl;*/

    /// OPCION PARA INGRESAR 5 NUMEROS Y VER SI SON PRIMOS

    for(int j = 1; j <= 5; j++) // CICLO EXTERNO: SE ENCARGA DE PEDIR LOS NUMEROS/CONTROLAR LOS GRUPOS
    {
        cout << "Ingrese numero: ";
        cin >> nro;

        /// INICIAR CONTADOR
        contDivisores = 0;

        for(int i = 1; i <= nro; i++)   // CICLO INTERNO: PROCESA LOS NUMEROS/GRUPOS
        {

            if(nro % i == 0)
            {
                /// Cuento divisores
                contDivisores++;
            }
        }

        /// PRIMO
        if(contDivisores == 2)
        {
            cout << "ES PRIMO" << endl;
        }
        else
        {
            cout << "NO ES PRIMO" << endl;
        }

        cout << endl;
        cout << "Cant. Divisores: " << contDivisores << endl;
    }


    return 0;
}
