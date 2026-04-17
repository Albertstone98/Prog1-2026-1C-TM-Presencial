#include <iostream>
using namespace std;

/// DO-WHILE

int main()
{
    int nro, contPos = 0;

    do
    {
        cout << "Ingrese numero: "; /// Inicio
        cin >> nro;

        if(nro > 0)
        {
            contPos++;
        }
    }
    while(nro != 0);

    cout << "Cant. de Positivos: " << contPos << endl;

    return 0;
}
