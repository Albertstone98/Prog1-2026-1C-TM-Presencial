#include <iostream>
using namespace std;

/*
    Hacer un programa para ingresar por teclado las cuatro notas de los exámenes
obtenidas por un alumno y luego emitir uno solo de los cartel de acuerdo a las
siguientes condiciones:
- “Promociona”, sí obtuvo en los cuatro exámenes nota 7 o más.
- “Rinde examen final”, si obtuvo nota 4 o más en por lo menos tres exámenes.
- “Recupera Parciales”, si obtuvo nota 4 o más en por lo menos uno de los
exámenes.
- “Recursa la materia”, si no aprobó ningún examen parcial
*/

int main()
{
    int nota1, nota2, nota3, nota4;
    int cont = 0;

    cout << "Ingrese Nota: ";
    cin >> nota1;
    cout << "Ingrese Nota: ";
    cin >> nota2;
    cout << "Ingrese Nota: ";
    cin >> nota3;
    cout << "Ingrese Nota: ";
    cin >> nota4;

    if(nota1 >= 7 && nota2 >= 7 && nota3 >= 7 && nota4 >= 7){
        cout << "PROMOCIONA" << endl;
    }
    else{
        if(nota1 >= 4){
            cont++;
        }
        if(nota2 >= 4){
            cont++;
        }
        if(nota3 >= 4){
            cont++;
        }
        if(nota4 >= 4){
            cont++;
        }

        /// Pregunto sobre lo que tiene CONT
        if(cont >= 3){
            cout << "RINDE FINAL" << endl;
        }
        else if (cont != 0){
            cout << "RECUPERA PARCIAL" << endl;
        }
        else{
            cout << "RECURSA MATERIA. GAME OVER!!" << endl;
        }

    }


    return 0;
}
