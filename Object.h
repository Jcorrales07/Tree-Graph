#ifndef OBJECT_H
#define OBJECT_H

#include <string>
#include <fstream>

using std::string;
using std::ifstream;

class Object {

    public:
        virtual bool equals(Object*) = 0;
        virtual string toString() = 0;

    void leerArchivo(string basicString);
};


#endif //OBJECT_H
