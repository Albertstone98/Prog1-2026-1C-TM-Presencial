#include <iostream>
#include "funciones.h"

using namespace std;

void mainTitle()
{
    cout << "=========================================================================" << endl;
    cout << "                           FIFA WORLD CUP 2026" << endl;
    cout << "                          USA - CANADA - MEXICO" << endl;
    cout << "=========================================================================" << endl;
    cout << endl;

    cout << "      AAAA   RRRRR   GGGGG  EEEEE  N   N  TTTTT  III  N   N   AAAA" << endl;
    cout << "     A    A  R    R G       E      NN  N    T     I   NN  N  A    A" << endl;
    cout << "     AAAAAA  RRRRR  G  GGG  EEEE   N N N    T     I   N N N  AAAAAA" << endl;
    cout << "     A    A  R   R  G    G  E      N  NN    T     I   N  NN  A    A" << endl;
    cout << "     A    A  R    R  GGGGG  EEEEE  N   N    T    III  N   N  A    A" << endl;

    cout << endl;
    cout << "                           SISTEMA DE VENTAS" << endl;
    cout << "                              DE ENTRADAS" << endl;
    cout << endl;
    cout << "=========================================================================" << endl;

    system("pause");
}

void loteDeCarga(int vCodPartido[], int vCodInstancia[], float vPrecio[], int TAM, bool &seCargo)
{
    for(int i = 0; i < TAM; i++)
    {
        cout << "Ingrese el código del partido: ";
        cin >> vCodPartido[i];

        cout << "Ingrese el código de la instancia: ";
        cin >> vCodInstancia[i];

        cout << "Ingrese el precio: $";
        cin >> vPrecio[i];
    }

    seCargo = true;
}

void loteDeProceso(int vCodPartido[], int vCodInstancia[], float vPrecio[], int TAM, bool &seProceso,
                   float vPuntoA[], int vPuntoB[], int vPuntoC[]
                  )
{
    int codPartido;
    int nroVendedor;
    int dia;
    int cantEntrada;
    int tipoEntrada;

    cout << "Ingrese el código del partido: ";
    cin >> codPartido;

    while(codPartido != 0)
    {
        cout << "Ingrese el número del vendedor: ";
        cin >> nroVendedor;
        cout << "Ingrese el día: ";
        cin >> dia;
        cout << "Ingrese la cantidad de entradas: ";
        cin >> cantEntrada;
        cout << "Ingrese el tipo de entrada: ";
        cin >> tipoEntrada;

        /// PUNTO A
        int indice = buscarIndice(vCodPartido, TAM, codPartido);
        vPuntoA[dia - 1] += vPrecio[indice] * cantEntrada;

        /// PUNTO B
        int instancia = vCodInstancia[indice];
        vPuntoB[instancia - 1] += cantEntrada;

        /// PUNTO C
        vPuntoC[nroVendedor - 1] += cantEntrada;

        cout << "Ingrese el código del partido: ";
        cin >> codPartido;
    }

    seProceso = true;
}

/// PUNTO A
int  buscarIndice(int vCodigos[], int tam, int cod)
{
    for(int i = 0; i < tam; i++)
    {
        if(vCodigos[i] == cod)
        {
            return i;
        }
    }

    return -1;
}

void puntoA(float vec[], int t)
{
    cout << endl;
    /// PUNTO A
    cout << "============== PUNTO A ==============" << endl;
    for(int i = 0; i < t; i++)
    {
        cout << "El día " << i + 1 << " recaudó: $" << vec[i] << endl;
    }
    cout << "=====================================" << endl;
}

/// PUNTO B
int buscarMayor(int vRecaudacionInstancias[], int TAM)
{
    int recaudacionMayor = vRecaudacionInstancias[0];
    int indiceMayor = 0;

    for(int i = 0; i < TAM; i++)
    {
        if(vRecaudacionInstancias[i] > recaudacionMayor)
        {
            recaudacionMayor = vRecaudacionInstancias[i];
            indiceMayor = i;
        }
    }

    return indiceMayor;
}

/// BURBUJEO
void ordenarVector(int vec1[], int vec2[], int t)
{
    int aux;

    for(int i = 0; i < t; i++)
    {
        for(int j = 0; j < t - 1; j++)
        {
            if(vec1[j] < vec1[j+1])
            {
                aux = vec1[j];
                vec1[j] = vec1[j+1];
                vec1[j+1] = aux;

                aux = vec2[j];
                vec2[j] = vec2[j+1];
                vec2[j+1] = aux;
            }
        }
    }
}

void mostrarVectorVendedores(int v[], int b[], int t)
{
    for(int i = 0; i < t; i++)
    {
        cout << "El Vendedor " << v[i] << " vendió " << b[i] << " entradas." << endl;
    }
}

/// RANDOM
int obtenerRandom(){
    return rand() % 7 + 1;
}
