#include <iostream>
#include "funciones.h"

using namespace std;

int variableGlobal = 5; /// ESTO NO HACER
int vectorGlobal[5]; /// ESTO TAMPOCO

int main()
{
    setlocale(LC_ALL, "spanish");

    mainTitle();

    char opcion; /// CARACTERES

    /// Variables para Validación de las Cargas
    bool seCargoLote = false;
    bool seProcesoVentas = false;

    /// ======= LOTE DE CARGA ======= ///
    const int TAM = 104;
    int vCodPartido[TAM];
    int vCodInstancia[TAM];
    float vPrecio[TAM];

    /// ======= PUNTO A ======= ///
    const int DIA = 31; // o -> n - 1
    float vRecaudacionDias[DIA]= {};

    /// ======= PUNTO B ======= ///
    int const INSTANCIAS = 7;
    int vRecaudacionInstancias[INSTANCIAS] = {};

    /// ======= PUNTO C ======= ///
    int const VENDEDORES = 15;
    int vecVendedores[VENDEDORES] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int vCantVendidasVendedores[VENDEDORES] {};




    do
    {
        system("cls"); /// Limpio la pantalla y muestro información nueva

        cout << endl;
        cout << " ================================================== " << endl;
        cout << "                 FIFA WORLD CUP 2026                " << endl;
        cout << "                USA - CANADA - MEXICO               " << endl;
        cout << " ================================================== " << endl;
        cout << "|              CENTRO DE CONTROL                   |" << endl;
        cout << " ================================================== " << endl;
        cout << "|                                                  |" << endl;
        cout << "|  [a] CARGAR PARTIDOS DEL MUNDIAL                 |" << endl;
        cout << "|  [b] REGISTRAR VENTA DE ENTRADAS                 |" << endl;
        cout << "|  [c] CONSULTAR REPORTES Y ESTADISTICAS           |" << endl;
        cout << "|                                                  |" << endl;
        cout << " ==================================================" << endl;
        cout << "|  [s] SALIR DEL SISTEMA                           |" << endl;
        cout << " ==================================================" << endl;
        cout << endl;
        cout << "      <-O  VIVI LA PASION DEL FUTBOL  O->" << endl;
        cout << endl;

        cout << "       Opción: ";
        cin >> opcion;

        switch(toupper(opcion)) /// Paso a Mayuscula a -> A
        {
        case 'A':
            system("cls");
            cout << " ========================================= " << endl;
            cout << "|            Carguemos el Lote            |" << endl;
            cout << " ========================================= " << endl;

            loteDeCarga(vCodPartido, vCodInstancia, vPrecio, TAM, seCargoLote);

            system("pause");
            break;
        case 'B':
            system("cls");
            cout << " ========================================= " << endl;
            cout << "|            Registremos Ventas           |" << endl;
            cout << " ========================================= " << endl;

            /// Valido que antes se haya cargado el Lote de Carga
            if(seCargoLote)
            {
                /// Si lo cargue, llamo a la Funcion cargarLoteProceso
                loteDeProceso(vCodPartido, vCodInstancia, vPrecio, TAM, seProcesoVentas, vRecaudacionDias, vRecaudacionInstancias, vCantVendidasVendedores);
            }
            else
            {
                cout << "Aún no se cargó el Lote de Carga..." << endl;
            }


            system("pause");
            break;
        case 'C':
            system("cls");
            cout << " ========================================= " << endl;
            cout << "|             Mostremos Info              |" << endl;
            cout << " ========================================= " << endl;

            /// Muestro los Resultados (o llamo a otro Menú de Reportes)

            if(seCargoLote && seProcesoVentas)
            {
                /// Si ambos están en TRUE, muestro los Reportes

                /// ======= PUNTO A ======= ///
                puntoA(vRecaudacionDias, DIA);

                /// ======= PUNTO B ======= ///
                cout << endl;
                cout << "============== PUNTO B ==============" << endl;
                int indiceMayor = buscarMayor(vRecaudacionInstancias, INSTANCIAS);
                cout << "La instancia mayor fue " << indiceMayor + 1 << endl;
                cout << "=====================================" << endl;

                /// ======= PUNTO C ======= ///
                cout << endl;
                cout << "============== PUNTO C ==============" << endl;
                ordenarVector(vCantVendidasVendedores, vecVendedores, VENDEDORES);
                mostrarVectorVendedores(vecVendedores, vCantVendidasVendedores, VENDEDORES);
                cout << "=====================================" << endl;

                /// ======= PUNTO D ======= ///
                cout << endl;
                cout << "============== PUNTO D ==============" << endl;
                int random = obtenerRandom();
                cout << "La Cantidad de Entradas vendidas de la Instancia " << random << " fue de " << vRecaudacionInstancias[random - 1] << " entradas para el Fuchibol." << endl;
                cout << "=====================================" << endl;


            }
            else
            {
                cout << "Aún no se cargó el Lote de Carga o no se Procesaron Ventas..." << endl;
            }

            system("pause");
            break;
        case 'S':
            system("cls");
            cout << " ========================================= " << endl;
            cout << "|                Adiós !!!                |" << endl;
            cout << " ========================================= " << endl;
            break;
        default:
            cout << "Opción ingresada no es válida." << endl;
            system("pause");
        }
    }
    while(toupper(opcion) != 'S');


    return 0;
}
