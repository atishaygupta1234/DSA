#include <iostream>
using namespace std;

bool ls(int arr[],int size,int key){
    if(size==0){
        return false;
    }

    if(arr[0]==key){
        return true;
    }
    else{
        bool ans=ls(arr+1,size-1,key);
        return ans;
    }

    
    
}

int main(){

    int arr[6]={1,2,3,10,5,6};
    cout<<ls(arr,6,69)<<endl;

    return 1;
}