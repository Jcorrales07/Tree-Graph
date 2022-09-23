#ifndef NODO_H
#define NODO_H

#include "Object.h"

class Nodo : public Object {
public:

    Nodo();
    Nodo(Nodo *anterior, Object *pObject, Nodo *siguiente);
    ~Nodo();

    void            setIzquierdo(Nodo* anterior);
    Nodo*           getIzquierdo();
    void            setItem(Object* item);
    Object*         getItem();
    void            setDerecho(Nodo* siguiente);
    Nodo*           getDerecho();

    bool            equals(Object*);
    string          toString();

protected:
    Nodo*           izquierdo;
    Object*         item;
    Nodo*           derecho;

};


#endif //NODO_H
