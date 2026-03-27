#include <iostream>

using namespace std;

/*
    Hacer un programa para ingresar por teclado dos números y luego
    informar por pantalla la diferencia entre ambos
*/

int main()
{
    int n1, n2;
    int dif;

    cout << "Ingrese numero: ";
    cin >> n1;
    cout << "Ingrese numero: ";
    cin >> n2;

    if(n1 > n2){
      dif = n1 - n2;
    }
    else{
        dif = n2 - n1;
    }

    cout << "La diferencia entre ambos es: " << dif << endl;

    return 0;
}
