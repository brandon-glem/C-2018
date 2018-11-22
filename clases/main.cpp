#include <iostream>
#include "punto.h"
#include "vector.h"
#include "PointArray.h"

using namespace std;

punto operator +(punto &A, punto &B){
    punto res(A.x + B.x, A.y + B.y);
    return res;

}

PointArray operator +(PointArray &A, PointArray &B){
    PointArray C = A;
    for(int i = 0; i < A.size; i++){
        C.puntos[i](A.puntos[i] + B.puntos[i]);
    return C;
    }
}

void swaper(punto &x, punto &y){
    punto c = x;
    x=y;
    y=c;
}

void swaptr(punto *x, punto *y){
    punto c = *x;
    *x=*y;
    *y=c;
}

int main()
{
/*
    punto p(4,5);
    punto a(6,7);

    punto *x=&p;
    punto *y=&a;

    cout<<"NORMALES:"<<endl;
    cout<<"p: ";
    p.print();
    cout<<"a: ";
    a.print();

    cout<<"INTERCAMBIO:"<<endl;
    swaper(p,a);
    cout<<"p: ";
    p.print();
    cout<<"a: ";
    a.print();

    cout<<"INTERCAMBIO PUNTEROS:"<<endl;
    swaptr(&p,&a);
    cout<<"p: ";
    x->print();
    cout<<"a: ";
    y->print();

    cout<<'\n';
    punto *easy = new punto;
    easy -> offset(10,10);
    easy -> print();

*/
    punto p(1, 3);
    punto q(3, 3);
    punto r(3, 1);
    punto arr[] = {p, q , r};
    int size = sizeof(arr)/sizeof(arr[0]);

    PointArray pa2(arr, size);

    //PointArray pa = pa2;

    //cout << pa.getSize() << endl;

    pa2.print();

//    punto t(4, 23);
//    cout<<'\n';
//
//    pa2.push_back(t);
//
//    pa2.print();

    punto a(1, 3);
    punto b(3, 3);
    punto c(3, 1);
    punto A[] = {a, b, c};
    int size2 = sizeof(A)/sizeof(A[0]);
    PointArray pa(A, size2);
    pa.print();

    PointArray pa3;
    pa3 = pa + pa2;
    pa3.print();

//    punto j;
//    j = a + b;
//    j.print();

    return 0;
}
