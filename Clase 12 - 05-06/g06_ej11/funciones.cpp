// Incluyo la librería
#include "funciones.h"

int buscarIndice(int v[], int tam, int cod){
    int indice = -1;
    for(int i=0; i < tam; i++){
            if(cod == v[i]){
                indice = i;
            }
        }
    return indice;
}
