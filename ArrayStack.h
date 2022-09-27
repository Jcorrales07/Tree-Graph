#ifndef TREEGRAPH_ARRAYSTACK_H
#define TREEGRAPH_ARRAYSTACK_H

#include "TDAPila.h"

class ArrayStack : public TDAPila {
public:
    ArrayStack();

    ~ArrayStack();

    virtual void anula();

    virtual Object *top(); // Devuelve el elemento en la parte superior de la pila

    virtual void push(Object *); // Agrega un elemento a la pila

    virtual Object *pop(); // Elimina el elemento del tope de la pila

    virtual bool estaVacia(); // Comprueba si la pila está vacía

    virtual void imprime_pila(); // Imprime la pila

protected:
    Object **array;
    int capacidad;
    int n;
};


#endif //TREEGRAPH_ARRAYSTACK_H
