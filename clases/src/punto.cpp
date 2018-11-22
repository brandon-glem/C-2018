#include <iostream>
#include "punto.h"


punto::punto(punto &o){
    x=o.x;
    y=o.y;
}

punto::punto(){
    x=0;
    y=0;
}

punto::punto(int xh, int yh){
    x=xh;
    y=yh;
}

void punto::offset(int nx,int ny){
    x += nx;
    y += ny;
}
void punto::print(){
    std::cout<<"("<<x<<","<<y<<")"<<std::endl;
}

double punto::getX(){
    return x;
}

double punto::getY(){
    return y;
}

void punto::setX(double x){
    this->x = x;
}

void punto::setY(double y){
    this->y = y;
}
