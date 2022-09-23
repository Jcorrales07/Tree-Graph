#include "Nodo.h"

/*
 * Constructor por default
 * **/
Nodo::Nodo() {
    izquierdo = nullptr;
    item = nullptr;
    derecho = nullptr;
}

/*
 * Constructor con parametros
 * **/
Nodo::Nodo(Nodo* izquierdo, Object *pObject, Nodo* derecho) {
    this->izquierdo = izquierdo;
    this->item = pObject;
    this->derecho = derecho;
}

/*
 * Destructor
 * **/
Nodo::~Nodo(){
    delete izquierdo;
    delete item;
    delete derecho;
}

/*
 * Setea el objeto para el nodo
 * **/
void Nodo::setItem(Object* item){
    this->item = item;
}

/*
 * Devuelve el objeto del nodo
 * **/
Object* Nodo::getItem(){
    return this->item;
}

/*
 * Setea el nodo siguiente
 * **/
void Nodo::setDerecho(Nodo *derecho) {
    this->derecho = derecho;
}

/*
 * Devuelve el nodo siguiente
 * **/
Nodo* Nodo::getDerecho(){
    return derecho;
}

/*
 * Setea el nodo anterior
 * **/
void Nodo::setIzquierdo(Nodo *izquierdo) {
    this->izquierdo = izquierdo;
}

/*
 * Devuelve el nodo anterior
 * **/
Nodo* Nodo::getIzquierdo(){
    return izquierdo;
}

// Metodos de object

bool Nodo::equals(Object *) {
    return false;
}

string Nodo::toString() {
    return std::string("Nodo {  item: " + item->toString() + "}");
}