#ifndef NUMERO_H
#define NUMERO_H

#include "Object.h"

class Elemento : public Object {

    public:
        Elemento();
        Elemento(int num, string str);
        ~Elemento();

        void                        setNumero(int num);
        int                         getNumero();
        void                        setLetra(string ltr);
        string                      getLetra();
        bool                        equals(Object*) override;
        string                      toString();

    private:
        int numero;
        string letra;
};


#endif //NUMERO_H
