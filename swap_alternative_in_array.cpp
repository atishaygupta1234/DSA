#include <iostream>
using namespace std;

int main(){

    int arr[10]={1,2,3,4,5,6,7,8,9,10};

    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int s=0;
    int f=1;

    while(f<10){
        swap(arr[s],arr[f]);
        s+=2;
        f+=2;
    }

    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 1;
}