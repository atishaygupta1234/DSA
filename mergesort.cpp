#include<iostream>
using namespace std;

void merge(int* arr,int s,int e){
    int mid=(s+e)/2;

    int len1=mid-s+1;
    int len2=e-mid;
    
    int *arr1=new int[len1];
    int *arr2=new int[len2];
    
    for(int i=0;i<len1;i++){
        arr1[i]=arr[s+i];
    }

    for(int i=0;i<len2;i++){
        arr2[i]=arr[mid+1+i];
    }

    int i=0;
    int j=0;
    int k=s;

    while(i<len1 && j<len2){
        if(arr1[i]>arr2[j]){
            arr[k++]=arr2[j++];
        }
        else{
            arr[k++]=arr1[i++];
        }
    }

    while(i<len1){
        arr[k++]=arr1[i++];
    }
    while(j<len2){
        arr[k++]=arr2[j++];
    }


}

void ms(int* arr,int s,int e){
    if(s>=e){
        return;
    }

    int mid=(s+e)/2;

    ms(arr,s,mid);
    ms(arr,mid+1,e);

    merge(arr,s,e);
}

int main(){
    int arr[5]={34,56,778,22,4};
    int n=5;

    ms(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 1;
}