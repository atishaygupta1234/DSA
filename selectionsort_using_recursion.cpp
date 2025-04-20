#include <iostream>
using namespace std;

void ss(int* arr,int n){

    if(n==0||n==1){
        return;
    }

    int min=0;
    for(int i=0;i<n;i++){
        if(arr[i]<arr[min]){
            min=i;
        }
    }
    swap(arr[0],arr[min]);

    ss(arr+1,n-1);
    
}

int main(){

    int arr[10]={33,44,2,45,6,78,89,9,0,10};
    ss(arr,10); 
    //ss(&arr[0],10) can also be passed
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 1;
}