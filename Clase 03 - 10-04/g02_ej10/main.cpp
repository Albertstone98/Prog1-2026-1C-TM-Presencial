#include <iostream>
using namespace std;

/*
  Hacer un programa para ingresar por teclado la fecha de nacimiento
  de una persona, ingresando día, mes y año como 3 datos individuales.
  Luego ingresar la fecha actual ingresando día, mes y año como 3 datos
  individuales. Calcular luego la edad en años de esa persona y
  listar por pantalla.
*/

int main()
{
    int diaNac, mesNac, anioNac;
    int diaAct, mesAct, anioAct;
    int edad;

    cout << "Ingrese Fecha Nacimiento: ";
    cin >> diaNac >> mesNac >> anioNac;
    cout << "Ingrese Fecha Actual: ";
    cin >> diaAct >> mesAct >> anioAct;

    if(mesAct > mesNac){
        edad = anioAct - anioNac;
    }
    else if(mesAct < mesNac){
        edad = anioAct - anioNac - 1;
    }
    else if(diaAct < diaNac){
        edad = anioAct - anioNac - 1;
    }
    else{
        edad = anioAct - anioNac;
    }

    cout << "La Edad es: " << edad << endl;

    return 0;
}
