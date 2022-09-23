#include "TDAArbol.h"


//Constructor
TDAArbol::TDAArbol() {
    raiz = nullptr;
}

//Destructor
TDAArbol::~TDAArbol() {
    TDAArbol::vaciar();
}


//Inserta un nodo en el arbol
void TDAArbol::insertar(Nodo *nodo) {
    if (estaVacio()) {
        raiz = nodo;
        return;
    }

    // Hacer logica que inserte el nodo en el arbol
}

//Elimina un nodo del arbol
void TDAArbol::eliminar(Nodo *nodo) {
    if (estaVacio()) {
        return;
    }

    // Hacer logica que elimine el nodo del arbol
}


//Funcion que verifica si el arbol esta vacio
bool TDAArbol::estaVacio() {
    return raiz == nullptr;
}


