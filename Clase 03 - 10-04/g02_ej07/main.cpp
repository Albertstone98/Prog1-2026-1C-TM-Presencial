#include <iostream>
using namespace std;

/*
    7 Hacer un programa para ingresar cuatro números y listar el máximo de ellos
*/

int main()
{
    int n1, n2, n3, n4;
    int mayor;

    cout << "Ingrese numero: ";
    cin >> n1;
    cout << "Ingrese numero: ";
    cin >> n2;
    cout << "Ingrese numero: ";
    cin >> n3;
    cout << "Ingrese numero: ";
    cin >> n4;

    if(n1 > n2){
        mayor = n1;
    }
    else{
        mayor = n2;
    }

    if(n3 > mayor){
        mayor = n3;
    }

    if(n4 > mayor){
        mayor = n4;
    }

    cout << "El Mayor es: " << mayor << endl;

    /*if(n1 >= n2 && n1 >= n3 && n1 >= n4){
        cout << "N1 es el Mayor, su valor es: " << n1 << endl;
    }
    else if(n2 >= n1 && n2 >= n3 && n2 >= n4){
        cout << "N2 es el Mayor, su valor es: " << n2 << endl;
    }
    else if(n2 >= n1 && n2 >= n3 && n2 >= n4){
        cout << "N2 es el Mayor, su valor es: " << n2 << endl;
    }
    else if(n2 >= n1 && n2 >= n3 && n2 >= n4){
        cout << "N2 es el Mayor, su valor es: " << n2 << endl;
    }*/

    return 0;
}
