#include "TDAArbol.h"
#include "Elemento.h"


//Constructor
TDAArbol::TDAArbol() {
    raiz = nullptr;
}

//Destructor
TDAArbol::~TDAArbol() {
//    TDAArbol::vaciar();
    delete raiz;
}

//Inserta un nodo en el arbol
Nodo *TDAArbol::insertarNodoRec(Nodo *nodoPadre, Nodo *nuevoNodo) {

    auto *elPadre = dynamic_cast<Elemento *>(nodoPadre->getItem());
    auto *elHijo = dynamic_cast<Elemento *>(nuevoNodo->getItem());

    if (estaVacio()) {
        nodoPadre = nuevoNodo;
    } else if (elHijo->getNumero() < elPadre->getNumero()) {
        nodoPadre->setIzquierdo(insertarNodoRec(nodoPadre->getIzquierdo(), nuevoNodo));
    } else if (elHijo->getNumero() > elPadre->getNumero()) {
        nodoPadre->setDerecho(insertarNodoRec(nodoPadre->getDerecho(), nuevoNodo));
    }

    return nodoPadre;
}

void TDAArbol::imprimirRec(Nodo *raiz) {

    if (estaVacio())
        return;

    auto *nodo = dynamic_cast<Elemento *>(raiz->getItem());
    std::cout << "[ " << nodo->getNumero() << " ] ";

    imprimirRec(raiz->getIzquierdo());
    imprimirRec(raiz->getDerecho());
}

void TDAArbol::imprimir() {
    imprimirRec(raiz);
}

//Funcion que verifica si el arbol esta vacio
bool TDAArbol::estaVacio() {
    return raiz == nullptr;
}


