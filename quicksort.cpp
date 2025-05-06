#include <iostream>
using namespace std;

int p(int arr[], int s,int e){

    int pivot=arr[s];

    int count=0;

    for(int i=s+1;i<=e;i++){
        if(arr[i]<=pivot){
            count++;
        }
    }

    int pv=s+count;

    swap(arr[s],arr[pv]);

    int i=s;int j=e;

    while(i<pv && j>pv){
    while(arr[i]<pivot){
        i++;
    }
    while(arr[j]>pivot){
        j--;
    }
    if(i<pv && j>pv){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}
return pv;
}

void qs(int arr[],int s,int e){
    if(s>=e){
        return;
    }
    
    int partition=p(arr,s,e);

    qs(arr,s,partition-1);
    qs(arr,partition+1,e);
}

int main(){
    int arr[5]={34,56,778,22,4};
    int n=5;

    qs(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 1;
}