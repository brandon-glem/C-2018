#include "vector.h"
#include <iostream>
#include "punto.h"

vector::vector()
{
    punto inicial;
    punto finish;
}

vector::vector(punto i,punto f){
    inicial = i;
    finish = f;

}

vector::vector(vector &o){
    inicial=o.inicial;
    finish=o.finish;
}

void vector::offset(int x,int y){
    inicial.offset(x,y);
    finish.offset(x,y);
}
void vector::print(){
    std::cout<<"punto inicial: ";
    inicial.print();
    std::cout<<"punto final: ";
    finish.print();
}
