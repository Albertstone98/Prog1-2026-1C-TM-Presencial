#include <iostream>
using namespace std;

/*
  Hacer un programa para mostrar por pantalla los números del 1 al 10.
  Importante: El programa no tiene ningún ingreso de datos.
  Nota: Probarlo con For y con While.
*/

int main()
{
    /// Caso de Ejemplo con break
    /*for(int i = 1; i <= 10; i++){
        cout << i << endl;

        if(i == 5){
            cout << "Estoy en la vuelta 5. Me voy." << endl;
            break;
        }
        else{
            cout << "No estoy en la vuelta 5" <<endl;
            cout << "Estoy en la vuelta " << i << endl;
        }
    }*/

    /// Ej1 - FOR
    /*for(int i = 1; i <= 10; i++){
        cout << i << endl;
    }*/

    /// Ej1 - WHILE
    int cont = 1;
    while(cont <= 10){
        cout << cont << endl;
        cont++;
    }

    return 0;
}
