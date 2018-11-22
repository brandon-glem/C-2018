#ifndef PUNTO_H
#define PUNTO_H
#include <iostream>

using namespace std;
template <typename T>

class punto
{
    T x,y;
    public:
        punto();
        punto(punto &o);
        punto(T, T);

        void offset(T,T);
        void print();
        double getX();
        double getY();
        void setX(T);
        void setY(T);
};

#endif // PUNTO_H
