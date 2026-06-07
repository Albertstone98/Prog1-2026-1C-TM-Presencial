/**
Una agencia de viajes comercializa 20 planes de turismo, para cada uno de
ellos se generó un registro con los siguientes datos:

    - Número de plan (1 a 20)
    - Precio al contado
    - Precio con tarjeta

Los precios son por persona, estos datos se ingresan desordenados.
Existe un segundo lote con las ventas efectuadas durante el mes pasado en los
8 locales de atención al público.
Por cada venta que se concretó se dispone de los siguientes datos:

    - Número de local (1 a 8)
    - Número de plan contratado (1 a 20)
    - Cantidad de personas que viajan
    - Código de pago (1= contado,2= tarjeta)

Este lote finaliza con un registro con número de local igual a 9. A partir de esta
información se pide:

    a) Informar el total recaudado por la empresa por pago al contado y por
    pago con tarjeta entre todos los locales.
    b) Informar cuál fue el plan que eligieron más personas en total.
*/

    // TAREA: Completar el Ejercicio resolviendo el Punto B.

#include <iostream>
#include "funciones.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "spanish");

    /// LOTE DE CARGA
    const int TAM = 20;

    int vNroPlanes[TAM];
    float vPreContado[TAM];
    float vPreTarjeta[TAM];

    for(int i = 0; i < TAM; i++)
    {
        cout << "Ingrese el número de plan: " << endl;
        cin >> vNroPlanes[i];

        cout << "Ingrese el precio contado: $" << endl;
        cin >> vPreContado[i];

        cout << "Ingrese el precio tarjeta: $" << endl;
        cin >> vPreTarjeta[i];
    }

    /// LOTE DE PROCESO

    int nroLocal;
    int nroPlan;
    int cantPersonas;
    int codPago;

    float vRecaudacion[2]{}; // float acuRecContado=0, acuRecTarjeta=0;
    int indice;

    cout << "Ingrese Numero de Local: ";
    cin >> nroLocal;
    cout << "Ingrese Numero de Plan: ";
    cin >> nroPlan;
    cout << "Personas que viajan: ";
    cin >> cantPersonas;
    cout << "Ingrese Codigo de Pago: ";
    cin >> codPago;

    while(nroLocal != 9){
        /// PROCESAMOS
        // Punto A
            // Buscamos el indice donde está el PLAN
        indice = buscarIndice(vNroPlanes,TAM,nroPlan);

        if(indice < 0){
            cout << "Ingrese Numero de Local: ";
            cin >> nroLocal;
            cout << "Ingrese Numero de Plan: ";
            cin >> nroPlan;
            cout << "Personas que viajan: ";
            cin >> cantPersonas;
            cout << "Ingrese Codigo de Pago: ";
            cin >> codPago;
            continue;
        }

            // Vemos cuál es el Tipo de Pago
        if(codPago == 1){
            vRecaudacion[codPago - 1] += vPreContado[indice] * cantPersonas;
            // vRecaudacion[0]
        }
        else{
            vRecaudacion[codPago - 1] += vPreTarjeta[indice] * cantPersonas;
            // vRecaudacion[1]
        }

        /// Pedimos el siguiente Registro
        cout << "Ingrese Numero de Local: ";
        cin >> nroLocal;
        cout << "Ingrese Numero de Plan: ";
        cin >> nroPlan;
        cout << "Personas que viajan: ";
        cin >> cantPersonas;
        cout << "Ingrese Codigo de Pago: ";
        cin >> codPago;
    }

    return 0;
}
