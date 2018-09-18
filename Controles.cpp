#include <iostream>

using namespace std;

int main()
{
    ////////////////CONTROL 1
    //EJERCICIO 1
//    int suma=0;
//    for(int i=1;i<1000;i++){
//        if((i%3)== 0 || (i%5)==0){
//            suma+=i;
//        }
//    }
//    cout<<suma<<endl;
//
//    EJERCICIO 2
//    int numero, i=1;
//    cout<<"escriba el numero: ";
//    cin>>numero;
//    for(;i<numero-1;i++){
//        if((i%2)!=0){
//            cout<<i<<",";
//        }
//    }
//    if((i%2)!=0)
//            cout<<i;
//    else if(((i+1)%2)!=0)
//        cout<<i+1;
//    cout<<'\n';
//
//    EJERCICIO 3
    int primo, divisores=0,j=2,x;
    cout<<"ingrese numero: ";
    cin>>x;
    while(j<x){
        for(int i=1;i<(j+1);i=i+1){
            if ((j%i)==0){
                divisores=divisores+1;
    		}
    		primo=i;
		}
		if(divisores==2){
                cout<<primo<<" ";
		}
		j++;
		divisores=0;
    }
    cout<<'\n';
//
//    EJERCICIO 4
//    int sum=0,z;
//    cout<<"ingrese numero: ";
//    cin>>z;
//	for(int i=1;i<z;i++){
//		if((z%i)==0){
//			sum+=i;
//		}
//	}
//	if(sum==z)
//		cout<<"Es perfecto"<<endl;
//	else
//        cout<<"No es perfecto"<<endl;
//
//    EJERCICIO 5
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



//
//
//     CONTROL 2
//    EJERCICIO 1
//    int anio;
//    cout<<"ingrese un anio:";
//    cin>>anio;
//    if(anio % 4 == 0){
//            if (anio%100 != 0 || anio % 400 == 0){
//                cout<<"El anio " << anio << " ,si es Bisiesto";
//            }
//            else
//                cout<<"El anio " << anio << " ,no es Bisiesto";
//    }

    //EJERCICIO 2
//    int numeros, is=1;
//    cout<<"escriba el numero: ";
//    cin>>numeros;
//    for(;is<numeros-1;is++){
//        if((is%2)==0){
//            cout<<is<<",";
//        }
//    }
//    if((is%2)==0)
//            cout<<is;
//    else if(((is+1)%2)==0)
//        cout<<is+1;
//    cout<<'\n';
//
//    EJERCICIO 3
//    int x=1 , y=1,z, cantidad,fibo=2;
//	cout << "ingrese un numero: ";
//	cin >> cantidad;
//	cout<<x<<" ";
//	cout<<y<<" ";
//	while(fibo < cantidad){
//		z=x+y;
//		cout<<z<<" ";
//		fibo+=1;
//		x=y;
//		y=z;
//	}

//EJERCICIO 4


//EJERCICIO 5
//    int primo, divisores=0,j=2;
//    long long SUMA=0;
//    while(j<2000000){
//        for(int i=1;i<(j+1);i=i+1){
//            if ((j%i)==0){
//                divisores=divisores+1;
//    		}
//    		primo=i;
//		}
//		if(divisores==2){
//                SUMA+=primo;
//                cout<<SUMA<<endl;
//		}
//		j++;
//		divisores=0;
//    }
//    cout<<"la suma es: "<<SUMA<<endl;

	return 0;
}
