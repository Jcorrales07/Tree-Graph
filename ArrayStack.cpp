#include <iostream>
#include "ArrayStack.h"

/**
 * Constructor
 */
ArrayStack::ArrayStack() {
    n = 0;
    capacidad = 10;
    array = new Object *[capacidad];
    for (int i = 0; i < capacidad; i++) {
        array[i] = nullptr;
    }
}

ArrayStack::~ArrayStack() {
    //libera el contenido de las casillas
    for (int i = 0; i < capacidad; i++) {
        if (array[i]) {
            delete array[i];
        }
    }
    //libera el arreglo
    delete[] array;
}

void ArrayStack::anula() {
    for (int i = 0; i < capacidad; i++) {
        if (array[i]) {
            delete array[i];
        }
    }
    n = 0;
}

/**
 * Si la pila no está vacía, devuelve el elemento superior de la pila
 *
 * @return Un puntero a la parte superior de la pila.
 */
Object *ArrayStack::top() {
    if (n > 0) {
        return array[n - 1];
    }
    return nullptr;
}

/**
 * Si la pila está llena, duplique el tamaño del arreglo y
 * luego agregue el nuevo elemento al final del arreglo.
 *
 * @param x El objeto que se empujará a la pila.
 */
void ArrayStack::push(Object *x) {
    if (n == capacidad) {
        Object **aux = new Object *[capacidad * 2];
        for (int i = 0; i < capacidad; i++) {
            aux[i] = array[i];
        }
        for (int i = capacidad; i < capacidad * 2; i++) {
            aux[i] = nullptr;
        }
        delete[] array;
        array = aux;
        capacidad *= 2;
    }
    array[n] = x;
    n++;
}

/**
 * Si la pila no está vacía, disminuya la cantidad de elementos en la pila,
 * almacene el último elemento en una variable
 * temporal, establezca el último elemento en nulo y devuelva la variable temporal
 *
 * @return El objeto que estaba en la parte superior de la pila.
 */
Object *ArrayStack::pop() {
    if (n > 0) {
        n--;
        Object *aux = array[n];
        array[n] = nullptr;
        return aux;
    }
    return nullptr;
}

/**
 * Comprueba si la pila está vacía.
 */
bool ArrayStack::estaVacia() {
    return n == 0;
}

/**
 * Imprime la pila
 */
void ArrayStack::imprime_pila() {
    for (int i = n - 1; i >= 0; i--) {
        std::cout << array[i]->toString() << std::endl;
    }
}
