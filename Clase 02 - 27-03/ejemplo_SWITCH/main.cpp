#include <iostream>
using namespace std;

/*
    Supongamos que queremos simular el menú de apagado de una computadora,
    donde el usuario elige entre 1. Apagar, 2. Reiniciar 3.Hibernar o
    4. Suspender.
*/

int main()
{
    int opcion;

    cout << "Ingrese Opcion: ";
    cin >> opcion;

    /// ALTERNATIVA USANDO IFs ANIDADOS

    /*if(opcion == 1){
        cout << "Apagando Compu..." << endl;
    }
    else if (opcion == 2){
        cout << "Reiniciando Compu..." << endl;
    }
    else if (opcion == 3){
        cout << "Hibernando Compu..." << endl;
    }
    else if (opcion == 4){
        cout << "Suspendiendo Compu..." << endl;
    }
    else{
        cout << "Opcion invalida!" << endl;
    }*/

    /// APLICACIÓN DE USO DE SWITCH PARA EVALUAR VALORES POSIBLES 'EXACTOS' DE UNA VARIABLE

    switch(opcion)
    {
    case 1:
        cout << "Apagando Compu..." << endl;
        break;
    case 2:
        cout << "Reiniciando Compu..." << endl;
        break;
    case 3:
        cout << "Hibernando Compu..." << endl;
        break;
    case 4:
        cout << "Suspendiendo Compu..." << endl;
        break;
    default:
        cout << "Opcion invalida!" << endl;
    }

    return 0;
}
