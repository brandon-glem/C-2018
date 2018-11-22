#include <iostream>
#include "punto.h"
#include "PointArray.h"
#include "src\punto.cpp"
#include "src\PointArray.cpp"

using namespace std;

//punto operator +(punto &A, punto &B){
//    punto res(A.x + B.x, A.y + B.y);
//    return res;
//
//}

//PointArray operator +(PointArray &A, PointArray &B){
//    PointArray C = A;
//    for(int i = 0; i < A.size; i++){
//        C.puntos[i](A.puntos[i] + B.puntos[i]);
//    return C;
//    }
//}

int main(){

    punto<double> a(1.1,2.2);
    punto<int> p(1,10);
    punto<int> q(2,20);
    punto<int> r(3,30);

    punto<char> s('a','b');
    punto<char> s1('c','d');
    punto<char> s2('e','f');

    punto<int> arr[]={p,q,r};
    int size=sizeof(arr)/sizeof(arr[0]);
    PointArray<int> pa2(arr,size);
    PointArray<int> pa=pa2;

    pa.push_back(p);
    pa.print();
    cout<<"\n";

    punto<char> arr1[]={s,s1,s2};
    int size1=sizeof(arr1)/sizeof(arr1[0]);
    PointArray<char> cha(arr1,size);
    PointArray<char> cha1=cha;
    cha1.print();
    cout<<"\n";
    cha1.insert(1,s1);
    cha1.print();


    return 0;
}
