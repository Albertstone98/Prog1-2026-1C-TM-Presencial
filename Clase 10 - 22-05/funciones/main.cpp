#include <iostream>
using namespace std;

/*
    Cabecera, Firma o Prototipo
     - tipo de dato de retorno (int, float, char, bool, string, void)
     - identificador
     - Parámetros. Valor: Copia de la variable/valor.
                   Referencia: Dirección de memoria de la variable
     - Definición o el cuerpo

     tipoDato identificador(){

     };

*/

/// CABECERAS
// Función sin retorno y sin parámetros
void mostrarCarteles();

// Función con retorno de float y sin parámetros
float pedirNumero();

// Función con retorno de float y con parametros por VALOR
float sumarNumeros(float , float);
// float sumarNumeros(float , float , string); Respetar orden de recepción de parámetros

// Función sin retorno y con parametro por VALOR
void mostrarResultado(float);

void sumarYmultiplicar(float, float, float&, float&);


int main()
{
    mostrarCarteles();

    float nro1, nro2, resultado;

    nro1 = pedirNumero();
    nro2 = pedirNumero();

    //resultado = sumarNumeros(nro1, nro2);

    //mostrarResultado(resultado);

    float suma, producto;

    sumarYmultiplicar(nro1, nro2, suma, producto);

    cout << "La Suma: " << suma << endl;
    cout << "La Multiplicacion: " << producto << endl;

    return 0;
}

void mostrarCarteles(){
    cout << "Hola Chicos" << endl;
    cout << "Saquen una hoja" << endl;
}

float pedirNumero(){
    float nro1;

    cout << "Ingrese un numero: ";
    cin >> nro1;

    return nro1;
}

float sumarNumeros(float n1, float n2){
    float res;

    res = n1 + n2;

    return res;
}

void mostrarResultado(float r){
    cout << "El resultado de la Suma: " << r << endl;
}

void sumarYmultiplicar(float n1, float n2, float& suma, float& producto){
    suma = n1 + n2;
    producto = n1 * n2;
}
