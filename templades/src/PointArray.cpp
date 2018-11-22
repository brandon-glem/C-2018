#include <iostream>
#include "PointArray.h"

using namespace std;

template<typename TP>
PointArray<TP>::PointArray()
{
    this->size = 0;
    this->puntos = new punto<TP>[size];
}

template<typename TP>
PointArray<TP>::PointArray(const punto<TP> pts[], const int size) {
    this->size = size;
    this->puntos = new punto<TP>[size];
    for(int i = 0; i < size; i++)
        puntos[i] = pts[i];
}

template<typename TP>
PointArray<TP>::PointArray(PointArray &o){
    this->size = o.size;
    this->puntos = new punto<TP>[size];
    for(int i = 0; i < size; i++)
        puntos[i] = o.puntos[i];
}

template<typename TP>
int PointArray<TP>::getSize(){
    return size;
}

template<typename TP>
PointArray<TP>::~PointArray()
{
    delete[] puntos;
}

template<typename TP>
void PointArray<TP>::print(){
    for(int t=0;t<size;t++)
        puntos[t].print();
}

template<typename TP>
void PointArray<TP>::resize(int newSize){
    punto<TP> *pts = new punto<TP>[newSize];
    int minsize = (newSize > size)? size: newSize;
    for(int t=0;t<minsize;t++)
        pts[t] = puntos[t];
    delete [] puntos;
    size = newSize;
    puntos = pts;
}

template<typename TP>
void PointArray<TP>::push_back(const punto<TP> &p){
    resize(size+1);
    puntos[size-1] = p;
}


template<typename TP>
void PointArray<TP>::insert(const int pos,const punto<TP> &p){
    resize(size+1);
    for(int y=(size-1);pos-1<y;y--)
        puntos[y]=puntos[y-1];
    puntos[pos-1]=p;
}

template<typename TP>
void PointArray<TP>::remove(const int pos){
    for(int y=pos-1;y<size-1;y++)
        puntos[y]=puntos[y+1];
    size--;
    resize(size);
}
