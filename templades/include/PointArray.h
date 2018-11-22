#ifndef POINTARRAY_H
#define POINTARRAY_H

#include "punto.h"
template<typename TP>

class PointArray
{
    public:

        int size;
        punto<TP> *puntos;

        PointArray();
        PointArray(const punto<TP> pts[], const int size);
        PointArray(PointArray &o);
        ~PointArray();

        void print();
        int getSize();

        void push_back(const punto<TP> &p);
        void resize(int newSize);

        void insert(const int pos, const punto<TP> &p);
        void remove(const int pos);
};

#endif // POINTARRAY_H
