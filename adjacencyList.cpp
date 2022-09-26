#include "iostream"
#include "adjacencyList.h"

/**
 * Crea una nueva lista de adyacencia
 */
adjacencyList::adjacencyList() {
    this->raiz = nullptr;
    this->size = 0;
    this->lista = new Elemento *[size];
}

/**
 * Elimina la matriz de listas.
 */
adjacencyList::~adjacencyList() {
    delete[] lista;
}

/**
 * Crea una nueva matriz de punteros a los objetos Elemento, copia los punteros de la matriz anterior a la nueva, agrega el
 * nuevo objeto Elemento al final de la nueva matriz, elimina la matriz anterior y establece el puntero de la lista para
 * que apunte al nueva matriz
 *
 * @param elemento El elemento a insertar.
 */
void adjacencyList::insertar(Elemento elemento) {
    Elemento *nuevo = new Elemento(elemento);
    Elemento **aux = new Elemento *[size + 1];
    for (int i = 0; i < size; i++) {
        aux[i] = lista[i];
    }
    aux[size] = nuevo;
    delete[] lista;
    lista = aux;
    size++;
}


/**
 * Elimina un elemento de la lista.
 *
 * @param elemento El elemento a eliminar.
 */
void adjacencyList::eliminar(Object *elemento) {
    Elemento *aux1 = dynamic_cast<Elemento *>(elemento);
    int pos = -1;
    for (int i = 0; i < size; i++) {
        if (lista[i]->equals(aux1)) {
            pos = i;
            break;
        }
    }
    if (pos != -1) {
        Elemento **aux = new Elemento *[size - 1];
        for (int i = 0; i < pos; i++) {
            aux[i] = lista[i];
        }
        for (int i = pos; i < size - 1; i++) {
            aux[i] = lista[i + 1];
        }
        delete[] lista;
        lista = aux;
        size--;
    }
}

/**
 * Busca un elemento en la lista y lo devuelve si lo encuentra
 *
 * @param elemento El elemento a buscar.
 *
 * @return Un puntero al objeto que se encontró.
 */
Object *adjacencyList::buscar(Object *elemento) {
    Elemento *aux = dynamic_cast<Elemento *>(elemento);
    for (int i = 0; i < size; i++) {
        if (lista[i]->equals(aux)) {
            return lista[i];
        }
    }
    return nullptr;
}

/**
 * Comprueba si el grafo está vacío.
 *
 * @return un valor booleano.
 */
bool adjacencyList::esVacio() {
    return size == 0;
}

/**
 * Elimina la matriz de punteros a los objetos de Elemento, establece el tamaño en 0 y crea una nueva matriz de punteros a
 * los objetos de Elemento.
 */
void adjacencyList::vaciar() {
    delete[] lista;
    size = 0;
    lista = new Elemento *[size];
}

/**
 * Imprime la lista
 */
void adjacencyList::imprimir() {
    if (esVacio()) {
        std::cout << "Lista vacia" << std::endl;
    } else {
        for (int i = 0; i < size; i++) {
            std::cout << lista[i]->toString() << std::endl;
        }
    }
}
