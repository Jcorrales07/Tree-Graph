#ifndef TDAARBOL_H
#define TDAARBOL_H

#include "Object.h"
#include "Nodo.h"
#include "iostream"

class TDAArbol : public Object {

    public:

        TDAArbol();
        ~TDAArbol();

        virtual void            insertarNodo(Nodo*) = 0;
        virtual void            eliminarNodo(Nodo*) = 0;
        virtual bool            buscarNodo(Nodo*) = 0;
        virtual void            imprimir() = 0;
        virtual void            vaciar() = 0;
        bool                    equals(Object*);
        string                  toString();

    private:
    virtual bool            estaVacio() = 0;
        virtual Nodo            *insertarNodoRec(Nodo*, Nodo*) = 0;
        virtual void            imprimirRec(Nodo*) = 0;

protected:
    Nodo*                   raiz;
};


#endif //TDAARBOL_H
