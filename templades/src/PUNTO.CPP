#include <iostream>
#include "punto.h"

using namespace std;

template<typename T>
punto<T>::punto(punto &o){
    x=o.x;
    y=o.y;
}

template<typename T>
punto<T>::punto(){
    x=0;
    y=0;
}

template<typename T>
punto<T>::punto(T xh, T yh){
    x=xh;
    y=yh;
}

template<typename T>
void punto<T>::offset(T nx,T ny){
    x += nx;
    y += ny;
}

template<typename T>
void punto<T>::print(){
    std::cout<<"("<<x<<","<<y<<")"<<std::endl;
}

template<typename T>
double punto<T>::getX(){
    return x;
}

template<typename T>
double punto<T>::getY(){
    return y;
}

template<typename T>
void punto<T>::setX(T x){
    this->x = x;
}

template<typename T>
void punto<T>::setY(T y){
    this->y = y;
}
