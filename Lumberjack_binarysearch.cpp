#include <iostream>
using namespace std;

bool ispossible(int arr[],int w,int mid,int n){
    int tw=0;
    for(int i=0;i<n;i++){
        if(arr[i]>mid){
            tw+=arr[i]-mid;
            if(tw>=w){
                return true;
            }
            else{
                if(i==n-1 && !(tw>=w)){
                    return false;
                }
            }
        }
    }
}

int main(){
    int n=5;
    int w=20;
    int arr[]={4,26,40,42,46};

    int s=4;
    int e=46;
    int ans=-1;
    int mid=(s+e)/2;
    while(s<=e){
        if(ispossible(arr,w,mid,n)){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=(s+e)/2;
    }
    cout<<ans<<endl;
    return 1;
}