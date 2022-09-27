#include "iostream"
#include "adjacencyList.h"


adjacencyList::adjacencyList() {
    this->size = 0;
    this->raiz = nullptr;
    lista = new Elemento *[size];
    for (int i = 0; i < size; ++i) {
        lista[i] = nullptr;
    }
}

adjacencyList::~adjacencyList() {
    for (int i = 0; i < size; ++i) {
        delete lista[i];
    }
}

void adjacencyList::insertarNodo(Nodo *nodo) {
    if (nodo != nullptr) {
        if (raiz == nullptr) {
            raiz = nodo;
        } else {
            insertarNodoRec(nodo, raiz);
        }
    }
}

Object *adjacencyList::eliminarNodo(Nodo *nodo) {
    if (nodo == nullptr) {
        return nullptr;
    } else {
        Elemento *temp;
        for (int i = 0; i < size; ++i) {
            if (lista[i]->equals(nodo)) {
                temp = lista[i];
                for (int j = i; j < size - 1; ++j) {
                    lista[j] = lista[j + 1];
                }
                size--;
                return temp;
            }
        }
        return nullptr;
    }
}

bool adjacencyList::buscarNodo(Nodo *nodo) {
    for (int i = 0; i < size; ++i) {
        if (lista[i]->equals(nodo)) {
            return true;
        }
    }
    return false;
}

void adjacencyList::imprimir() {
    for (int i = 0; i < size; ++i) {
        std::cout << lista[i]->toString() << std::endl;
    }
}

void adjacencyList::vaciar() {
    for (int i = 0; i < size; ++i) {
        delete lista[i];
    }
    size = 0;
    lista = new Elemento *[size];
    for (int i = 0; i < size; ++i) {
        lista[i] = nullptr;
    }

}

bool adjacencyList::estaVacio() {
    return size == 0;
}

Nodo *adjacencyList::insertarNodoRec(Nodo *nodo, Nodo *raiz) {
    if (raiz == nullptr) {
        raiz = nodo;
    } else {
        if (nodo->getDerecho() < raiz->getDerecho()) {
            raiz->setIzquierdo(insertarNodoRec(nodo, raiz->getIzquierdo()));
        } else {
            raiz->setDerecho(insertarNodoRec(nodo, raiz->getDerecho()));
        }
    }
    return raiz;
}

void adjacencyList::imprimirRec(Nodo *raiz) {
    if (raiz != nullptr) {
        imprimirRec(raiz->getIzquierdo());
        std::cout << raiz->toString() << std::endl;
        imprimirRec(raiz->getDerecho());
    } else {
        return;
    }

}




