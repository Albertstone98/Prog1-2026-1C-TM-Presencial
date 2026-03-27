#include <iostream>
using namespace std;

/*
Ingresar el largo, el ancho y la profundidad de una pileta rectangular y
calcular su volumen en litros y la cantidad de horas
necesarias para llenarla dado un
caudal en litros/minuto que también se ingresa.

Datos de entrada
Pileta de 10 mts de largo x 4 mts de ancho x 2 mts de profundidad
y un caudal de llenado de 500 lts por minuto.

Análisis
Pileta → 10 mts x 4 mts x 2 mts → Volumen: 80 mts cúbicos → 80000 litros
Caudal llenado → 500 lts/minuto
Tiempo para llenado completo: 2.66 hs
*/

int main()
{
    float largo, ancho, profundidad, caudalLitros;
    float volumenLitros;
    float horasLlenado;

    /// Datos de Entrada
    cout << "Ingrese Largo Pileta: ";
    cin >> largo;
    cout << "Ingrese Ancho Pileta: ";
    cin >> ancho;
    cout << "Ingrese Profundidad Pileta: ";
    cin >> profundidad;
    cout << "Ingrese Caudal: ";
    cin >> caudalLitros;

    /// Calculamos Litros
    volumenLitros = largo * ancho * profundidad * 1000;

    /// Calculamos Tiempo Llenado
    horasLlenado = volumenLitros / caudalLitros / 60;

    /// Información de Salida
        // Cantidad de Horas de Llenado

        // Volumen en Litros
    cout << "Litros: " << volumenLitros << endl;
    cout << "Tiempo de Llenado Pileta: " << horasLlenado << endl;

    return 0;
}
