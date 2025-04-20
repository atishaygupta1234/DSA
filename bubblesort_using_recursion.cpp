#include <iostream>
using namespace std;

void bsr(int* arr,int n){

    if(n==0||n==1){
        return;
    }

    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }

    bsr(arr,n-1);
    
}

int main(){

    int arr[10]={33,44,2,45,6,78,89,9,0,10};
    bsr(arr,10);
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 1;
}