#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

void mainTitle();

void loteDeCarga(int vCodPartido[], int vCodInstancia[], float vPrecio[], int TAM, bool &seCargo);
void loteDeProceso(int vCodPartido[], int vCodInstancia[], float vPrecio[], int TAM, bool &seProceso,
                   float vPuntoA[], int vPuntoB[], int vPuntoC[]
                   );


/// PUNTO A
int  buscarIndice(int vCodigos[], int tam, int cod);
void puntoA(float [], int);

/// PUNTO B
int buscarMayor(int vRecaudacionInstancias[], int TAM);

/// PUNTO C
void ordenarVector(int [], int [], int);
void mostrarVectorVendedores(int [], int [], int);

/// PUNTO D
int obtenerRandom();

#endif // FUNCIONES_H_INCLUDED
