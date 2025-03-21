#include <iostream>
using namespace std;

int bs(int arr[],int n,int k){
    int s=0;
    int e=n-1;
    while(s<=e){
        int mid=(s+e)/2;
        if(arr[mid]>k){
            e=mid-1;
        }
        else if(arr[mid]<k){
            s=mid+1;
        }
        else{
            cout<<"found!!"<<endl;
            return 1;
        }
    }
    return 0;
}


int main(){
    int arr[]={1,3,4,5,6,7,8,9,10};
    int ans=bs(arr,9,2);
    if(ans==1){
        cout<<"element present"<<endl;
    }
    else{
        cout<<"not present"<<endl;
    }
    return 1;
}