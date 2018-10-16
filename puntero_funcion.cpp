#include <iostream>

using namespace std;

bool comp_acent(int i, int j){
    return i > j;
}

bool comp_desent(int i, int j){
    return i < j;
}

void ord_acnt(int arr[],int lend,bool (*fp)(int,int)){
    int c;
    for(int i=0;i < lend;i++){
        for(int j=0;j < lend;j++){
            if((*fp)(arr[j],arr[j+1])){
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

int main()
{
    int arr[]={12,54,32,65,76};
    int lend=5;
    bool (*fp)(int,int);
    fp=comp_desent;
    ord_acnt(arr,lend,fp);
    for(int i=0;i<lend;i++){
        cout<<arr[i]<<" ";
    }
    cout<<'\n';
    return 0;
}
