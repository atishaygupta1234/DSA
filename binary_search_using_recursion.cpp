#include <iostream>
using namespace std;

bool bs(int arr[],int start,int end,int key){
    if(start>end){
        return false;
    }

    int mid=(start+end)/2;

    if(arr[mid]==key){
        return true;
    }
    
    if(arr[mid]>key){
        return bs(arr,start,mid-1,key);
    }
    else{
        return bs(arr,mid+1,end,key);
    }

}

int main(){

    int arr[6]={1,2,3,5,6,10};
    cout<<bs(arr,0,5,10)<<endl;

    return 1;
}