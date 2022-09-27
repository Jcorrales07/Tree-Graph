#include "Elemento.h"

Elemento::Elemento() {
    this->numero = 0;
    this->letra = "";
}

Elemento::Elemento(int num, string str) {
    this->numero = num;
    this->letra = str;
}

Elemento::~Elemento() {
    numero = 0;
    letra = "";
}

void Elemento::setNumero(int num) {
    this->numero = num;
}

int Elemento::getNumero() {
    return this->numero;
}

void Elemento::setLetra(string ltr) {
    this->letra = ltr;
}

string Elemento::getLetra() {
    return this->letra;
}

bool Elemento::equals(Object *) {
    if (this->numero == ((Elemento*)this)->numero) {
        return true;
    } else {
        return false;
    }
}

string Elemento::toString() {
    return "Nodo { Letra: " + getLetra() + " Numero: " + std::to_string(getNumero()) + " }" ;
}

