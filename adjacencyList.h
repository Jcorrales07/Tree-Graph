#ifndef TREEGRAPH_ADJACENCYLIST_H
#define TREEGRAPH_ADJACENCYLIST_H


#include "TDAArbol.h"
#include "id.h"

class adjacencyList : public TDAArbol {
public:
    adjacencyList();
    ~adjacencyList();

    void insertar(Elemento) ;
    void eliminar(Object*) ;
    Object* buscar(Object*) ;
    string toString() override;
    bool esVacio();
    void vaciar() override;
    void imprimir() override;

protected:
    Nodo* raiz;
    int size;
    Elemento **lista;
};

#endif //TREEGRAPH_ADJACENCYLIST_H
