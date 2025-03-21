#include <iostream>
using namespace std;

int bs(int arr[],int n,int k){
    int s=0;
    int e=n-1;
    int mid=(s+e)/2;
    while(s<e){
        if(arr[mid]>arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=(s+e)/2;
    }
    return s;
}


int main(){
    int arr[]={7,8,9,10,1,3,4,5,6};
    int ans=bs(arr,9,2);
    cout<<ans<<endl;
    return 1;
}