#include <iostream>
using namespace std;

bool checksorted(int arr[],int size){
    if(size==0 || size==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    else{
        bool ans=checksorted(arr+1,size-1);
        return ans;
    }
}

int main(){

    int arr[6]={1,2,3,10,5,6};
    cout<<checksorted(arr,6)<<endl;

    return 1;
}