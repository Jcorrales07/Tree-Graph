#ifndef NODO_H
#define NODO_H

#include <iostream>
#include <unordered_map>

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

        // Metodos de object
        virtual bool    equals(Object*);
        virtual string  toString();

protected:
        Nodo*           izquierdo, *derecho;
        Object*         item;
};


#endif //NODO_H
