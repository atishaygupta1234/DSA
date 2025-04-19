#include <iostream>
using namespace std;

int sumrec(int arr[],int size){
    if(size==1){
        return arr[0];
    }
    
    int sum=arr[0]+sumrec(arr+1,size-1);

    return sum;
}

int main(){

    int arr[6]={1,2,3,10,5,6};
    cout<<sumrec(arr,6)<<endl;

    return 1;
}