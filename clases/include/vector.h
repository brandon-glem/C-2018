#ifndef VECTOR_H
#define VECTOR_H

#include "punto.h"

class vector
{
    public:
        vector();
        vector(punto,punto);

        vector(vector &o);

        void offset(int,int);
        void print();

    private:
        punto inicial,finish;
};

#endif // VECTOR_H
