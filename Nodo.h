#ifndef NODO_H
#define NODO_H

#include "Object.h"
#include "Elemento.h"

class Nodo : public Object {
    public:

        Nodo();
        Nodo(Nodo *izquierdo, Object *pObject, Nodo *derecho);
        ~Nodo();

        void            setIzquierdo(Nodo* izquierdo);
        Nodo*           getIzquierdo();
        void            setItem(Object* item);
        Object*         getItem();
        void            setDerecho(Nodo* derecho);
        Nodo*           getDerecho();

        bool            equals(Object*);
        string          toString();

    protected:
        Nodo*           izquierdo;
        Object*         item;
        Nodo*           derecho;

};


#endif //NODO_H
