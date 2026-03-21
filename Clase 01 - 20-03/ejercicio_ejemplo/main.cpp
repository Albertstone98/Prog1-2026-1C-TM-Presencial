#include <iostream>
using namespace std;

/*Hacer un programa que permita ingresar dos números enteros por teclado.
  Luego calcular e informar la suma de ellos.
*/

int main()
{   /// De aca para abajo, escribo codigo.

    int nro1, nro2, res;

    cout << "Ingrese un numero: ";
    cin >> nro1;
    cout << "Ingrese otro numero: ";
    cin >> nro2;

    res = nro1 + nro2;

    cout << "El Resultado es: ";
    cout << res;

    /// De aca para arriba, escribo codigo.
    return 0;
}
