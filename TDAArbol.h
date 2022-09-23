#ifndef TDAARBOL_H
#define TDAARBOL_H

#include "Object.h"
#include "Nodo.h"

class TDAArbol : public Object {

    public:

        TDAArbol();
        ~TDAArbol();

        virtual void            insertar(Nodo*);
        virtual void            eliminar(Nodo*);
        virtual bool            buscar(Nodo*);
        virtual void            imprimir();
        virtual void            imprimirInOrder();
        virtual void            imprimirPreOrder();
        virtual void            imprimirPostOrder();
        virtual void            vaciar();
        virtual bool            estaVacio();
        virtual int             getAltura();
        virtual int             getNivel();
        virtual int             getTamanio();
        virtual Nodo*           getRaiz();
        virtual void            setRaiz(Nodo*);
        bool                    equals(Nodo*);
        string                  toString();

    private:
        Nodo*                   raiz;

};


#endif //TDAARBOL_H
