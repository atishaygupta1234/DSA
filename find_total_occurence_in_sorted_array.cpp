#include <iostream>
using namespace std;

int leftmost(int arr[],int n,int k){
    int s=0;
    int e=n-1;
    int mid=(s+e)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]>k){
            e=mid-1;
        }
        else if(arr[mid]<k){
            s=mid+1;
        }
        else{
            ans=mid;
            e=mid-1;
        }
        mid=(s+e)/2;
    }
    return ans;
}

int rightmost(int arr[],int n,int k){
    int s=0;
    int e=n-1;
    int mid=(s+e)/2;
    int ans=-1;
    while(s<=e){
        
        if(arr[mid]>k){
            e=mid-1;
        }
        else if(arr[mid]<k){
            s=mid+1;
        }
        else{
            ans=mid;
            s=mid+1;
        }
        mid=(s+e)/2;
    }
    return ans;
}

int main(){
    int arr[]={1,1,1,1,2,2,2,2,2,3,3,3,3,4,4};
    int l=leftmost(arr,15,4);
    int r=rightmost(arr,15,4);
    cout<<r-l+1<<endl;
    return 1;
}