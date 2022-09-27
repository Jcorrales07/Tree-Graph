#include <fstream>
#include <iostream>
#include "Object.h"

void Object::leerArchivo(string basicString) {
    ifstream archivo;
    archivo.open(basicString);
    if (archivo.fail()) {
        std::cout << "No se pudo abrir el archivo" << std::endl;
        exit(1);
    }
    string texto;
    while (!archivo.eof()) {
        getline(archivo, texto);
        std::cout << texto << std::endl;
    }
    archivo.close();
}
