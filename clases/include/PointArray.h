#ifndef POINTARRAY_H
#define POINTARRAY_H

#include "punto.h"

class PointArray
{
    public:

        int size;
        punto *puntos;

        PointArray();
        PointArray(const punto pts[], const int size);
        PointArray(PointArray &o);
        ~PointArray();

        void print();
        int getSize();

        void push_back(const punto &p);
        void resize(int newSize);

        void insert(const int, const punto &p);
};

#endif // POINTARRAY_H
