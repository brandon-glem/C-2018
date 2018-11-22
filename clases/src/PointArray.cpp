#include "PointArray.h"

PointArray::PointArray()
{
    this->size = 0;
    this->puntos = new punto[size];
}

PointArray::PointArray(const punto pts[], const int size) {
    this->size = size;
    this->puntos = new punto[size];
    for(int i = 0; i < size; i++)
        puntos[i] = pts[i];
}

PointArray::PointArray(PointArray &o){
    this->size = o.size;
    this->puntos = new punto[size];
    for(int i = 0; i < size; i++)
        puntos[i] = o.puntos[i];
}

int PointArray::getSize(){
    return size;
}


PointArray::~PointArray()
{
    delete[] puntos;
}

void PointArray::print(){
    for(int t=0;t<size;t++)
        puntos[t].print();
}

void PointArray::resize(int newSize){
    punto *pts = new punto[newSize];
    int minsize = (newSize > size)? size: newSize;
    for(int t=0;t<minsize;t++)
        pts[t] = puntos[t];
    delete [] puntos;
    size = newSize;
    puntos = pts;
}

void PointArray::push_back(const punto &p){
    resize(size+1);
    puntos[size-1] = p;
}


//void PointArray::insert(const int s, const punto &p){
//    for(int t=0;t<size;t++)
//        if(t == s)
//
//}
//
//
//void PointArray::remove(const int s){
//    resize(size-1);
//    for(int i=0; i < size; i++)
//        puntos[i] =
//}
