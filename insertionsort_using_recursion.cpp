#include <iostream>
using namespace std;

void ss(int* arr,int n,int i){

    if(i>=n){
        return;
    }

    int temp=arr[i];
    int j=i-1;
    for(;j>=0;j--){
        if(arr[j]>temp){
            arr[j+1]=arr[j];
        }
        else{
            break;
        }
    }
    arr[j+1]=temp;

    ss(arr,n,i+1);
    
}

int main(){

    int arr[10]={33,44,2,45,6,78,89,9,0,10};
    ss(arr,10,1); 
    //ss(&arr[0],10) can also be passed
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 1;
}