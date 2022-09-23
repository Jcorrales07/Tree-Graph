#include <iostream>


using std::cout;
using std::cin;
using std::endl;
using std::string;

void print(string mensaje);

int menuPrincipal();
int menuArboles();
int menuGrafos();

void algoArboles();
void algoGrafos();

int main() {
    int opcion;
    do {
        opcion = menuPrincipal();
        cout << endl; // [=== Para poner espacios en la consola]

        if (opcion == 1) {
            algoArboles();
        } else if (opcion == 2) {
            algoGrafos();
        } else {
            print("Opcion no valida, siga el menu!");
        }

        cout << endl; // [=== ...]

    } while (opcion != 0);

    return 0;
}

void print(string mensaje) {
    cout << mensaje << endl;
}

int menuPrincipal() {
    int opcion;
    print("[=== Menu Principal ===]\n"
          "1. Algoritmos Sobre Arboles\n"
          "2. Algoritmos sobre Grafos\n"
          "3. Salir");
    cout << "Opcion #";
    cin >> opcion;
    return opcion;
}

int menuArboles() {
    int opcion;
    print("[=== Algoritmos sobre Arboles ===]\n"
          "1. Codificador de Huffman\n"
          "2. Decoficador de Huffman\n"
          "3. Regresar al Menu Principal");
    cout << "Opcion #";
    cin >> opcion;
    return opcion;
}

int menuGrafos() {
    int opcion;
    print("[=== Algoritmos sobre Grafos ===]\n"
          "1. Leer grafo de un archivo\n"
          "2. Prim\n"
          "3. Floyd\n"
          "4. Regresar al Menu Principal\n");
    cout << "Opcion #";
    cin >> opcion;
    return opcion;
}

void algoArboles() {
    int opcion;

    do {
        opcion = menuArboles();
        cout << endl; // [=== ...]

        if (opcion == 1) {
            print("Codificador");
        } else if (opcion == 2) {
            print("Decodificador");
        } else if (opcion == 3) {
            print("Regresar al Menu principal");
        } else {
            print("Opcion no valida");
        }
        cout << endl; // [=== ...]

    } while (opcion != 3);
}

void algoGrafos() {
    int opcion;
    cout << endl; // [=== ...]

    do {
        opcion = menuGrafos();

        if (opcion == 1) {
            print("Leer grafo de un archivo");
        } else if (opcion == 2) {
            print("Prim");
        } else if (opcion == 3) {
            print("Floyd");
        } else if (opcion == 4){
            print("Regresar al Menú principal");
        } else {
            print("Opcion no valida");
        }
        cout << endl; // [=== ...]

    } while (opcion != 4);
}
