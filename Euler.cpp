#include <iostream>

using namespace std;

int main()
{
/*
    //EJERCICIO 1
    int suma=0;
    for(int i=1;i<1000;i++){
        if((i%3)== 0 || (i%5)==0){
            suma+=i;
        }
    }
    cout<<suma<<endl;

//    EJERCICIO 2
    int a = 1, b = 2, fib = 0, resp = 2;
    while (a+b < 4000000){
            fib = a+b;
            if (fib % 2 == 0) {resp += fib;}
            a = b;
            b = fib;
    }

   cout << endl << "la suma fibonacci es:  " << resp << endl;

//    EJERCICIO 3
    long long num=600851475143, i=2,fact,cont=2;
    while(i<num){
        if(num%i==0){
            fact=i;
            while(fact%cont != 0){
                cont++;
                if(cont==fact-1){
                    cout<<fact<<endl;
                    cont=2;
                    break;
                }
            }
        }
        i++;
    }
*/
//    EJERCICIO 3
    int num = 20;
    int resultado = num;
    while (!calcular(resultado, num)) {
        resultado += num;
    }
    cout << resultado << '\n';

    return 0;
}
