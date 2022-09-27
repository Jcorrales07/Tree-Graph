#ifndef TREEGRAPH_ADJACENCYLIST_H
#define TREEGRAPH_ADJACENCYLIST_H


#include "TDAArbol.h"
#include "Nodo.h"

class adjacencyList : public TDAArbol {
public:
    adjacencyList();

    ~adjacencyList();

    void insertarNodo(Nodo *nodo);

    Object *eliminarNodo(Nodo *nodo);

    bool buscarNodo(Nodo *nodo);

    void imprimir();

    void vaciar();

private:
    bool estaVacio();

    Nodo *insertarNodoRec(Nodo *nodo, Nodo *raiz);

    void imprimirRec(Nodo *raiz);

    Nodo *raiz;

protected:
    int size;
    Elemento **lista;
};

#endif //TREEGRAPH_ADJACENCYLIST_H
