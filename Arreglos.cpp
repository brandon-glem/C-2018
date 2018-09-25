#include <iostream>

using namespace std;

bool perfecto(int z){
     int sum = 0;
 	for (int i = 1; i <z; i ++) {
 		if ((z% i) == 0) {
 			sum += i;
 		}
 	}
 	if (sum == z)
 		return true;
 	else
        return false;
}

int suma(int a[],int lend){
    int result=0;
    for(int i=0;i<lend;i++){
        result+=a[i];
    }
    return result;
}

int menor(int a[],int lend){
    int men=a[0];
    for(int i=0;i<lend;i++){
        if(a[i]<men){
            men=a[i];
        }
    }
    return men;
}

int n_perfecto(int a[],int lend){
    int cantidad=0;
    for(int i=0;i<lend;i++){
        if(perfecto(a[i])==true){
            cantidad+=1;
        }
    }
    return cantidad;
}

void ord_acnt(int arr[],int lend){
    int c;
    for(int i=0;i < lend;i++){
        for(int j=0;j < lend;j++){
            if(arr[j] > arr[i]){
                c=arr[i];
                arr[i]=arr[j];
                arr[j]=c;
            }
        }
    }
}

void ord_dect(int arr[],int lend){
    int c;
    for(int i=0;i < lend;i++){
        for(int j=0;j < lend;j++){
            if(arr[j] < arr[i]){
                c=arr[i];
                arr[i]=arr[j];
                arr[j]=c;
            }
        }
    }
}

void invertir(int arr[],int lend){
    int c;
    for(int i=0;i<=(lend/2);i++){
        c=arr[i];
        arr[i]=arr[lend-1];
        arr[lend-1]=c;
        lend-=1;
    }
}

int main()
{
    int arr[]={4,6,2,9,65,43,87,12,6};
    int lend=9;
    cout<<suma(arr,lend)<<endl;
    cout<<menor(arr,lend)<<endl;
    cout<<n_perfecto(arr,lend)<<endl;

    invertir(arr,lend);
    for(int i=0;i<lend;i++){
        cout<<arr[i]<<" ";
    }
    cout<<'\n';

    ord_acnt(arr,lend);
    for(int i=0;i<lend;i++){
        cout<<arr[i]<<" ";
    }
    cout<<'\n';

    ord_dect(arr,lend);
    for(int i=0;i<lend;i++){
        cout<<arr[i]<<" ";
    }
    cout<<'\n';

    return 0;
}
