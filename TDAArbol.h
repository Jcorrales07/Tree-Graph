#ifndef TDAARBOL_H
#define TDAARBOL_H

#include "Object.h"
#include "Nodo.h"

class TDAArbol : public Object {

    public:

        TDAArbol();
        ~TDAArbol();

//        virtual void            insertar(Nodo*) = 0;
//        virtual void            eliminar(Nodo*) = 0;
//        virtual bool            buscar(Nodo*) = 0;
//        virtual void            imprimir() = 0;
//        virtual void            imprimirInOrder() = 0;
//        virtual void            imprimirPreOrder() = 0;
//        virtual void            imprimirPostOrder() = 0;
//        virtual void            vaciar() = 0;
//        virtual bool            estaVacio() = 0;
//        virtual Nodo*           getRaiz() = 0;
//        virtual void            setRaiz(Nodo*);
//        bool                    equals(Object*);
//        string                  toString();

    private:
        Nodo*                   raiz;

};


#endif //TDAARBOL_H
