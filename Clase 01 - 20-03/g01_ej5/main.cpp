#include <iostream>
using namespace std;

/*
Un comercio vende tres marcas de alfajores distintas A, B y C. Hacer un
programa para ingresar por teclado la cantidad de alfajores vendidos de cada
una de las tres marcas y luego se informe el porcentaje de ventas para cada
una de ellas.
Ejemplo. Si se ingresa 100, 25 y 75 como cantidades vendidas entonces el
programa calculará e informará A: 50%, B: 12,50% y C: 37,50%.
*/

int main()
{
    int cantA, cantB, cantC, totalAlfajores;
    float porcA, porcB, porcC;

    cout << "Cantidad de Alfajores A: ";
    cin >> cantA;
    cout << "Cantidad de Alfajores B: ";
    cin >> cantB;
    cout << "Cantidad de Alfajores C: ";
    cin >> cantC;

    totalAlfajores = cantA + cantB + cantC;

    porcA = cantA * 100 / totalAlfajores;
    porcB = cantB * 100 / (float)totalAlfajores;
    porcC = cantC * 100.0 / totalAlfajores;

    cout << "Alfajores A: " << porcA << " %" << endl;
    cout << endl;
    cout << "Alfajores B: " << porcB << " %" << endl;
    cout << endl;
    cout << "Alfajores C: " << porcC << " %" << endl;
    cout << endl;

    return 0;
}
