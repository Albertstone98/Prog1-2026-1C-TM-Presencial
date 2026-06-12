/**
La organización del Mundial 2026 cuenta con los siguientes lotes de información. Un primer lote contiene los datos de los partidos que se disputarán durante el torneo. Cada registro posee:
o	Código de Partido (6 dígitos, no correlativos)
o	Instancia del Torneo (1= Fase de Grupos, 2= Dieciseisavos, 3= Octavos, 4= Cuartos, 5= Semifinal, 6= Tercer Puesto, 7= Final)
o	Precio de la Entrada
Este lote contiene un total de 104 registros y se encuentra desordenado.
Un segundo lote contiene las ventas de entradas realizadas durante el torneo. Cada registro posee:
o	Código de Partido (6 dígitos, no correlativos)
o	Número de Vendedor (1 a 15)
o	Día de Venta (1 a 31)
o	Cantidad de Entradas Vendidas
o	Tipo de Entrada (1= General, 2= Preferencial, 3=VIP)
Puede haber varios registros para el mismo partido y para el mismo vendedor.
Este lote finaliza con un registro cuyo Código de Partido es igual a cero.
Se pide a partir de estos datos, determinar e informar:
a)	Informar la recaudación total obtenida para cada uno de los 31 días del mes.
b)	Determinar cuál fue la instancia del torneo que vendió la mayor cantidad de entradas.
c)	Mostrar la cantidad total de entradas vendidas de cada Vendedor ordenado de Mayor a Menor.
d)	Informar, de manera aleatoria, la cantidad total de entradas vendidas de alguna Instancia de Torneo.

*/

#include <iostream>
#include <ctime>    // Para Función TIME
#include <cstdlib>  // Para Funciones SRAND y RAND

using namespace std;

/// PROTOTIPOS
void loteDeCarga( int vCodPartido[], int vCodInstancia[], float vPrecio[], int TAM);

void loteDeProceso( int vCodPartido[], int vCodInstancia[], float vPrecio[], int TAM);

/// PUNTO A
int  buscarIndice(int vCodigos[], int tam, int cod);

/// PUNTO B
int buscarMayor(int vRecaudacionInstancias[], int TAM);

/// PUNTO C
void ordenarVector(int [], int [], int);

void mostrarVectorVendedores(int [], int [], int);

int main()
{
    setlocale(LC_ALL, "spanish");

    srand(time(NULL)); /// Inicializamos SEMILLA para Números RANDOM --> Se hace una sola vez, siempre al comenzar el MAIN.


    /// LOTE DE CARGA
    const int TAM = 104;
    int vCodPartido[TAM];
    int vCodInstancia[TAM];
    float vPrecio[TAM];

    loteDeCarga(vCodPartido, vCodInstancia, vPrecio, TAM);

    cout << endl;
    cout << "================================================" << endl;

    /// LOTE DE PROCESO
    loteDeProceso(vCodPartido, vCodInstancia, vPrecio, TAM);

    return 0;
}

// Función Lote de Carga
void loteDeCarga( int vCodPartido[], int vCodInstancia[], float vPrecio[], int TAM)
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
}

// Función Lote de Proceso
void loteDeProceso( int vCodPartido[], int vCodInstancia[], float vPrecio[], int TAM)
{
    /// PUNTO A
    const int DIA = 31; // o -> n - 1
    float vRecaudacionDias[DIA]= {};

    /// PUNTO B
    int const INSTANCIAS = 7;
    int vRecaudacionInstancias[INSTANCIAS] = {};

    /// PUNTO C
    int const VENDEDORES = 15;
    int vecVendedores[VENDEDORES] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int vCantVendidasVendedores[VENDEDORES] {};

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
        vRecaudacionDias[dia - 1] += vPrecio[indice] * cantEntrada;

        /// PUNTO B
        int instancia = vCodInstancia[indice];
        vRecaudacionInstancias[instancia - 1] += cantEntrada;

        /// PUNTO C
        vCantVendidasVendedores[nroVendedor - 1] += cantEntrada;

        cout << "Ingrese el código del partido: ";
        cin >> codPartido;
    }

    cout << endl;
    /// PUNTO A
    cout << "============== PUNTO A ==============" << endl;
    for(int i = 0; i < DIA; i++)
    {
        cout << "El día " << i + 1 << " recaudó: $" << vRecaudacionDias[i] << endl;
    }
    cout << "=====================================" << endl;

    cout << endl;
    /// PUNTO B
    cout << "============== PUNTO B ==============" << endl;
    int indiceMayor = buscarMayor(vRecaudacionInstancias, INSTANCIAS);
    cout << "La instancia mayor fue " << indiceMayor + 1 << endl;
    cout << "=====================================" << endl;

    cout << endl;
    /// PUNTO C
    cout << "============== PUNTO C ==============" << endl;
    ordenarVector(vCantVendidasVendedores, vecVendedores, VENDEDORES);
    mostrarVectorVendedores(vecVendedores, vCantVendidasVendedores, VENDEDORES);
    cout << "=====================================" << endl;

    cout << endl;
    /// PUNTO D
    cout << "============== PUNTO D ==============" << endl;
    int random = rand() % 7 + 1;
    cout << "La Cantidad de Entradas vendidas de la Instancia " << random << " fue de " << vRecaudacionInstancias[random - 1] << " entradas para el Fuchibol." << endl;
    cout << "=====================================" << endl;
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
