#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int x){
    bool prime=true;
    for(int i=2; i<=sqrt(x);++i){
        if (x%i==0){
            prime=false;
            break;
        }
    }
    if (prime) return true;
    else return false;
}

int main(){
//   EJERCICIO 1
//    int suma=0;
//    for(int i=1;i<1000;i++){
//        if((i%3)== 0 || (i%5)==0){
//            suma+=i;
//        }
//    }
//    cout<<"la suma de los multiplos de 3 y 5 menores a 1000 es: "<<suma<<endl;

//   EJERCICIO 2
//    int a = 1, b = 2, fib = 0, resp = 2;
//    while (a+b < 4000000){
//            fib = a+b;
//            if (fib % 2 == 0) {resp += fib;}
//            a = b;
//            b = fib;
//    }
//
//   cout<<"la suma fibonacci es:  " << resp << endl;

//    EJERCICIO 3
//    long long num=600851475143, i=2,fact,cont=2;
//    while(i<num){
//        if(num%i==0){
//            fact=i;
//            while(fact%cont != 0){
//                cont++;
//                if(cont==fact-1){
//                    cout<<fact<<endl;
//                    cont=2;
//                    break;
//                }
//            }
//        }
//        i++;
//    }

//    EJERCICIO 4
//    int p=0, rev=0, rem=0, max1=0, max=0;
//    for (int i = 999; i >= 100; i--)
//    {
//        for (int j = 999; j >= 100; j--)
//        {
//            p = i * j;
//            while(p!=0)
//            {
//                rem = p % 10;
//                rev = rev * 10 + rem;
//                p = p / 10;
//            }
//            if (rev == (i*j))
//            {
//                max1 = rev;
//                if (max1 > max)
//                {
//                    max = max1;
//                }
//            }
//            rem = 0;
//            rev = 0;
//
//        }
//    }
//    cout <<"el mayor palandomo del producto de 3 digitos es: "<<max<<endl;

//    EJERCICIO 5
//    int arr[20];
//    for(int i=0;i<20;i++){
//        arr[i]=i+1;
//    }
//    for(int i=0;i<20;i++){
//        for(int j=0;j<i;j++){
//            if(arr[i]%arr[j]==0)
//                arr[i]/=arr[j];
//        }
//    }
//    int q=1;
//    for(int i=0;i<20;i++)
//        q*=arr[i];
//
//    cout<<"el multiplo mas pequeño es: "<<q<<endl;

//   EJERCICIO 6
//    int rest,sum=0,produ=0;
//
//    for(int i=1;i<=100;++i){
//        sum+=i;
//        produ+=(i*i);
//    }
//
//    sum*=sum;
//    rest=sum-produ;
//    cout<<"la resta es: "<<rest<<endl;

//  EJERCICIO 7
//    int i=2, k=0;
//    do{
//        if(isPrime(i) == true){
//            k++;
//        }
//        i++;
//    }
//    while(k != 10001);
//    cout<<"el 10001 primo es: "<<i-1;

//  EJERCICIO 8



//  EJERCICIO 9
//    for(int a = 0; a < 333; a++){
//            for(int b = a + 1; b < 666; b++){
//                for(int c = b + 1; c < 666; c++){
//                    if((a + b + c) == 1000){
//                        if((a * a + b * b) == c * c){
//                            cout<<"el valor de a:"<<a<<" b:"<<b<<" c:"<<c<<endl;
//                            cout <<"el resultado de a*b*c es: "<<a*b*c<<endl;
//                            break;
//                        }
//                    }
//                }
//            }
//    }

//  EJERCICIO 10
    int long long n=2000000;
    int long long sum=0;
    for (int i=2; i<n; i++){
        if(isPrime(i))
            sum+=i;
    }
    cout<<"La suma de los numeros primos menores a: "<<n<<" es: " <<sum;

    return 0;
}
