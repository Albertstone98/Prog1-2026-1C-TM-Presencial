#include <iostream>
using namespace std;

/*
Hacer un programa para ingresar una lista de 10 números y luego informar
cuántos de los números ingresados son perfectos. Se informa 1 resultado al
final.
Recordamos que un número es perfecto cuando la suma de sus divisores,
exceptuando al número en sí mismo, coinciden.
Ejemplo A: el 6 es perfecto ya que la suma de sus divisores es 1+2+3 = 6
Ejemplo B: el 28 es perfecto ya que la suma de sus divisores es
1+2+4+7+14=28
*/

int main()
{
    int num, cantPerfectos=0, acumulador=0;

    for(int x=0; x<10; x++) /// CICLO EXTERNO -> Controla los GRUPOS
    {
        cout << "Ingrese un numero: ";
        cin>>num;

        acumulador=0; /// REINICIA EN CADA VUELTA ANTES DE PROCESAR EL NÚMERO/GRUPO

        for(int i=1; i<num; i++)    /// CICLO INTERNO -> Procesa los GRUPOS
        {
            if(num%i==0)
            {
                acumulador+=i;
            }
        }

        if(num == acumulador)
        {
            cantPerfectos++;
        }
    }

    cout<<"La cantidad de numeros perfectos fue: "<<cantPerfectos<<endl;
    return 0;
}
