#include <iostream>
using namespace std;

/*
3. Hacer una función llamada EsPrimo que determine si un número es primo o no.
La función debe recibir el número y devolver true si es primo o false si no lo es.
La función no debe mostrar nada por pantalla.

Hacer un programa para ingresar un número y, utilizando EsPrimo, emita luego
un cartel indicando si el número ingresado es primo o no es primo.
*/

bool esPrimo(int);

int main()
{
    int nro;

    cout << "Ingrese numero: ";
    cin >> nro;

    /*bool primo = esPrimo(nro);

    if(primo){
        cout << "El numero es Primo" << endl;
    }
    else{
        cout << "El numero NO es Primo" << endl;
    }*/

    if(esPrimo(nro)){
        cout << "El numero es Primo" << endl;
    }
    else{
        cout << "El numero NO es Primo" << endl;
    }

    return 0;
}

bool esPrimo(int n){

    int contDivisores=0;

    for(int i=1; i <= n; i++){
        if(n%i == 0){
            contDivisores++;
        }
    }

    if(contDivisores == 2){
        return true;
    }

    return false;
}
